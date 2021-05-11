using System.Collections;
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
    private LineRenderer LRDesenhoDaPerna;

    [SerializeField]
    private Vector3[] PontosDeDobraDaPerna;

    private bool IniciarDesenho;
    private Vector3 PosicaoDoMause;
    private int IndexAtual;
    private bool ApertouMouse;

    [SerializeField]
    private Camera Camera;
    void Update()
    {
        if (ApertouMouse == false && Input.GetMouseButtonDown(0) && PodeDesenhar())
        {
            ComecarADesenhar();
        }

       
        else if (PodeDesenhar() == false && ApertouMouse == true)
        {
            PararDeDesenhar();
        }
        else if (Input.GetMouseButtonUp(0) && ApertouMouse == true)
        {
            PararDeDesenhar();
        }

        if (IniciarDesenho)
        {

            Vector3 Dist = PosicaoDoMause - Input.mousePosition;

            float Distance_SqrMag = Dist.sqrMagnitude;

            if (Distance_SqrMag > 2000f)
            {
                LRDesenhoDaPerna.SetPosition(IndexAtual, Camera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, Input.mousePosition.z + 10f)));

                PosicaoDoMause = Input.mousePosition;

                IndexAtual++;

                LRDesenhoDaPerna.positionCount = IndexAtual + 1;

                LRDesenhoDaPerna.SetPosition(IndexAtual, Camera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, Input.mousePosition.z + 10f)));
            }
        }
    }
    public void ComecarADesenhar()
    {
        ApertouMouse = true;
        for (int i = 0; i < geradorDePernas.JoelhosDaPernaUm.Length; i++)
        {
            Destroy(geradorDePernas.JoelhosDaPernaUm[i]);

            Destroy(geradorDePernas.JoelhosDaPernaDois[i]);
        }
        IniciarDesenho = true;
        PosicaoDoMause = Input.mousePosition;

        LRDesenhoDaPerna.positionCount = 2;
    }

    public void PararDeDesenhar()
    {
        ApertouMouse = false;
        IniciarDesenho = false;
        LRDesenhoDaPerna.useWorldSpace = false;

        PontosDeDobraDaPerna = new Vector3[LRDesenhoDaPerna.positionCount];

        for (int i = 0; i < LRDesenhoDaPerna.positionCount; i++)
        {
            PontosDeDobraDaPerna[i] = LRDesenhoDaPerna.GetPosition(i);
        }

        geradorDePernas.GerarPernas(PontosDeDobraDaPerna);

        LRDesenhoDaPerna.positionCount = 0;

        IndexAtual = 0;
    }

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
