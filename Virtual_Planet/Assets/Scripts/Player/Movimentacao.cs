using UnityEngine;

public class Movimentacao : MonoBehaviour
{
    [SerializeField]
    private Rigidbody rb;
    [SerializeField]
    private int Velocidade;
    [SerializeField]
    private Transform chaoVerificador;
    [SerializeField]
    private bool estaNoChao;
    void Update()
    {
        estaNoChao = Physics.Linecast(transform.position, chaoVerificador.position, 1 << LayerMask.NameToLayer("Chao"));
       
        if(estaNoChao == false)
        {
            rb.velocity = new Vector3 (1 * Velocidade * Time.deltaTime, rb.velocity.y, 0);
        }
        else
        {
            rb.velocity = new Vector3(0.0f, rb.velocity.y, 0);
        }
    }   
}
