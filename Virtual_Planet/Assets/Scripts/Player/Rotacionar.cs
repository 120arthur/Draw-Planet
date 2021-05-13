using UnityEngine;

public class Rotacionar : MonoBehaviour
{
    public float velocidade;
    void Update()
    {
        transform.Rotate(Vector3.forward, -velocidade * Time.deltaTime);
    }
}
