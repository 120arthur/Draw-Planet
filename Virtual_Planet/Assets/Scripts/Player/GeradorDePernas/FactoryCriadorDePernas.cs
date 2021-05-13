using System.Collections;
using UnityEngine;
/// <summary>
/// Padrão de projeto Factory:
/// esta classe abstrata permite que as subclasses criem variações de pernas.
/// </summary>
public abstract class FactoryCriadorDePernas : MonoBehaviour
{

    protected GameObject prefabDoJoelho;

    protected LineRenderer lRPernaUm;
    protected LineRenderer lRPernaDois;

    protected GameObject[] joelhosDaPernaUm = new GameObject[0];
    protected GameObject[] joelhosDaPernaDois = new GameObject[0];
    public GameObject[] JoelhosDaPernaDois { get => joelhosDaPernaDois; set => joelhosDaPernaDois = value; }
    public GameObject[] JoelhosDaPernaUm { get => joelhosDaPernaUm; set => joelhosDaPernaUm = value; }

    public void DeletarPernasExistentes()
    {
        for (int i = 0; i < joelhosDaPernaUm.Length; i++)
        {
            Destroy(JoelhosDaPernaUm[i]);

            Destroy(JoelhosDaPernaDois[i]);
        }
    }
    public abstract IEnumerator GerarPernas(Vector3[] PontosDeDobraDaPerna);

}
