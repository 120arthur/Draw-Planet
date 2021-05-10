using UnityEngine;
using UnityEngine.EventSystems;

[RequireComponent(typeof(MeshFilter))]
public class Seguimento_Perna : MonoBehaviour
{
    [SerializeField]
    private GameObject PrefabDoJoelho;
    [SerializeField]
    private Vector3[] PontosDeDobraDaPerna;


    private bool IniciarDesenho;
    private Vector3 PosicaoDoMause;

    [SerializeField]
    private LineRenderer LRDesenhoDaPerna;
   
    [SerializeField]
    private LineRenderer LRPernaUm;
    [SerializeField]
    private LineRenderer LRPernaDois;

    private GameObject[] JoelhosDaPernaUm = new GameObject[0];
    private GameObject[] JoelhosDaPernaDois = new GameObject[0];

    private int IndexAtual;

    bool ApertouMouse;

    [SerializeField]
    private Camera Camera;

    public void QuandoApertarOMouse()
    {
        ApertouMouse = true;
        for (int i = 0; i < JoelhosDaPernaUm.Length; i++)
        {
            Destroy(JoelhosDaPernaUm[i]);

            Destroy(JoelhosDaPernaDois[i]);
        }
        IniciarDesenho = true;
        PosicaoDoMause = Input.mousePosition;

        LRDesenhoDaPerna.positionCount = 2;
    }

    public void QuandoSoltarOMouse()
    {
        ApertouMouse = false;
        IniciarDesenho = false;
        LRDesenhoDaPerna.useWorldSpace = false;

        PontosDeDobraDaPerna = new Vector3[LRDesenhoDaPerna.positionCount];

        for (int i = 0; i < LRDesenhoDaPerna.positionCount; i++)
        {
            PontosDeDobraDaPerna[i] = LRDesenhoDaPerna.GetPosition(i);
        }

        GeradorDePernas();

        LRDesenhoDaPerna.positionCount = 0;

        IndexAtual = 0;
    }

    void Update()
    {
        if (ApertouMouse == false && Input.GetMouseButtonDown(0))
        {
            print("apertou");
            QuandoApertarOMouse();
        }
        else if (Input.GetMouseButtonUp(0))
        {
            QuandoSoltarOMouse();
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

    public void GeradorDePernas()
    {

        LRPernaUm.positionCount = PontosDeDobraDaPerna.Length;
        LRPernaDois.positionCount = PontosDeDobraDaPerna.Length;


        Vector3[] UpdatedPositions = PontosDeDobraDaPerna;
        Vector3 zeroPosition = new Vector3(0, 0, 0);

        JoelhosDaPernaUm = new GameObject[PontosDeDobraDaPerna.Length];
        JoelhosDaPernaDois = new GameObject[PontosDeDobraDaPerna.Length];

        for (int i = 0; i < PontosDeDobraDaPerna.Length; i++)
        {

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
            JoelhosDaPernaUm[i] = Instantiate(PrefabDoJoelho, UpdatedPositions[i], Quaternion.identity, LRPernaUm.transform);

            LRPernaDois.SetPosition(i, UpdatedPositions[i]);
            JoelhosDaPernaDois[i] = Instantiate(PrefabDoJoelho, UpdatedPositions[i] * -1, Quaternion.identity, LRPernaDois.transform);
        }
    }
}
