using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

/// <summary>
/// Esta função tem como objetivo indentificar o desenho feito na tela e converte-lo em pernas para o personagem.
/// </summary>
public class DesenhoNaTela : MonoBehaviour
{
    [SerializeField]
    private GeradorDePernas geradorDePernas;

    [SerializeField]
    private LineRenderer lRDesenhoDaPerna;

    [SerializeField]
    private Vector3[] pontosDeDobraDaPerna;

    private bool iniciarDesenho;
    private Vector3 posicaoDoMause;
    private int indexAtual;
    private bool Desenhando;

    [SerializeField]
    private Camera camera;
    void Update()
    {
        if (Desenhando == false && Input.GetButtonDown("Fire1") && PodeDesenhar())
        {
            ComecarADesenhar();
        }


        else if (PodeDesenhar() == false && Desenhando == true || Input.GetButtonUp("Fire1") && Desenhando == true)
        {
            PararDeDesenhar();
        }

        if (iniciarDesenho)
        {

            if (Time.frameCount % 30 == 0)
            {
                System.GC.Collect();
            }

            Vector3 Dist = posicaoDoMause - Input.mousePosition;

            float Distance_SqrMag = Dist.sqrMagnitude;

            // Faz o desenho na tela.
            if (Distance_SqrMag > 500f)
            {
                lRDesenhoDaPerna.SetPosition(indexAtual, camera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, Input.mousePosition.z + 4f)));

                posicaoDoMause = Input.mousePosition;

                indexAtual++;

                lRDesenhoDaPerna.positionCount = indexAtual + 1;

                lRDesenhoDaPerna.SetPosition(indexAtual, camera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, Input.mousePosition.z + 4f)));
            }
        }
    }
    public void ComecarADesenhar()
    {
        Time.timeScale = 0.0f;

        Desenhando = true;

        iniciarDesenho = true;
        posicaoDoMause = Input.mousePosition;

        lRDesenhoDaPerna.positionCount = 2;
    }

    public void PararDeDesenhar()
    {
        Time.timeScale = 1;

        Desenhando = false;
        iniciarDesenho = false;
        lRDesenhoDaPerna.useWorldSpace = false;

        pontosDeDobraDaPerna = new Vector3[lRDesenhoDaPerna.positionCount];

        // Salva em um array os pontos que o desenho fez.
        for (int i = 0; i < lRDesenhoDaPerna.positionCount; i++)
        {
            pontosDeDobraDaPerna[i] = lRDesenhoDaPerna.GetPosition(i);
        }

        StartCoroutine(geradorDePernas.CriadorDePernaSimples.GerarPernas(pontosDeDobraDaPerna));

        lRDesenhoDaPerna.positionCount = 0;

        indexAtual = 0;
    }
    /// <summary>
    /// Verifica se o mouse está em cima da ui de desenho e retorna um bool.
    /// </summary>
    private bool PodeDesenhar()
    {
        PointerEventData pointerEventData = new PointerEventData(EventSystem.current);
        pointerEventData.position = Input.mousePosition;

        List<RaycastResult> raycastResultList = new List<RaycastResult>();
        EventSystem.current.RaycastAll(pointerEventData, raycastResultList);
        for (int i = 0; i < raycastResultList.Count; i++)
        {
            if (raycastResultList[i].gameObject.tag != "PainelDeDesenho")
            {
                raycastResultList.RemoveAt(i);
                i--;
            }

        }
        return raycastResultList.Count > 0;
    }
}
