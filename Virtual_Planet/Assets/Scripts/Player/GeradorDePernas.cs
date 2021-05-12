using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;

[RequireComponent(typeof(MeshFilter))]
/// <summary>
/// Esta função tem como objetivo Criar As Pernas do Personagem.
/// </summary>
public class GeradorDePernas : MonoBehaviour
{
    [SerializeField]
    private GameObject PrefabDoJoelho;
    [SerializeField]
    private LineRenderer LRPernaUm;
    [SerializeField]
    private LineRenderer LRPernaDois;

    private GameObject[] joelhosDaPernaUm = new GameObject[0];
    private GameObject[] joelhosDaPernaDois = new GameObject[0];

    public GameObject[] JoelhosDaPernaDois { get => joelhosDaPernaDois;  set => joelhosDaPernaDois = value; }
    public GameObject[] JoelhosDaPernaUm { get => joelhosDaPernaUm;  set => joelhosDaPernaUm = value; }

    /// <summary>
    /// Recebe os transforms gerados pelo desenho, transforma em um LineRenderer e instancia gameObjects nos respectivos pontos do LineRenderer.
    /// </summary>
    public IEnumerator GerarPernas( Vector3[] PontosDeDobraDaPerna)
    {
        if (Time.frameCount % 30 == 0)
        {
            System.GC.Collect();
        }

        for (int i = 0; i < JoelhosDaPernaUm.Length; i++)
        {
            Destroy(JoelhosDaPernaUm[i]);

            Destroy(JoelhosDaPernaDois[i]);
        }
        


        Vector3[] UpdatedPositions = PontosDeDobraDaPerna;
        Vector3 zeroPosition = new Vector3(0, 0, 0);

        JoelhosDaPernaUm = new GameObject[PontosDeDobraDaPerna.Length];
        JoelhosDaPernaDois = new GameObject[PontosDeDobraDaPerna.Length];


        for (int i = 0; i < PontosDeDobraDaPerna.Length; i++)
        {

        LRPernaUm.positionCount =  i +1;
        LRPernaDois.positionCount = i+1;

            if (i == 0)
            {
                zeroPosition = PontosDeDobraDaPerna[i];
                PontosDeDobraDaPerna[i] = new Vector3(0, 0, 0);
                UpdatedPositions[i] = PontosDeDobraDaPerna[i];
            }
            else
            {
                UpdatedPositions[i] = new Vector3(PontosDeDobraDaPerna[i].x - zeroPosition.x, PontosDeDobraDaPerna[i].y - zeroPosition.y, 0);
            }

            LRPernaUm.SetPosition(i, UpdatedPositions[i]);
            JoelhosDaPernaUm[i] = Instantiate(PrefabDoJoelho, LRPernaUm.transform);
            JoelhosDaPernaUm[i].transform.localPosition = UpdatedPositions[i];

            LRPernaDois.SetPosition(i, UpdatedPositions[i]);
            JoelhosDaPernaDois[i] = Instantiate(PrefabDoJoelho, LRPernaDois.transform);
            JoelhosDaPernaDois[i].transform.localPosition = UpdatedPositions[i];
            yield return new WaitForSecondsRealtime(0.01f);
        }
    }
}
