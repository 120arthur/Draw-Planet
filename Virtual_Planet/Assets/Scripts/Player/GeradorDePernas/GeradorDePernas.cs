using UnityEngine;

[RequireComponent(typeof(MeshFilter))]
/// <summary>
/// Esta clase tem como objetivo Criar As Pernas do Personagem.
/// </summary>
public class GeradorDePernas : MonoBehaviour
{
    [SerializeField]
    private GameObject prefabDoJoelho;

    [Header("LineRenderers Das Pernas")]
    [SerializeField]
    private LineRenderer lRPernaUm;
    [SerializeField]
    private LineRenderer lRPernaDois;

    private GameObject[] joelhosDaPernaUm = new GameObject[0];
    private GameObject[] joelhosDaPernaDois = new GameObject[0];

    public GameObject[] JoelhosDaPernaDois { get => joelhosDaPernaDois; set => joelhosDaPernaDois = value; }
    public GameObject[] JoelhosDaPernaUm { get => joelhosDaPernaUm; set => joelhosDaPernaUm = value; }

   [HideInInspector] public FactoryCriadorDePernas CriadorDePernaSimples;

    private void Start()
    {
        CriadorDePernaSimples = new PernaSimples(
            prefabDoJoelho,
            lRPernaUm,
            lRPernaDois,
            JoelhosDaPernaUm,
            JoelhosDaPernaDois);
    }


}
