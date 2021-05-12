using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotacionar : MonoBehaviour
{
    public float Velocidade;
    void Update()
    {
        transform.Rotate(Vector3.forward, -Velocidade * Time.deltaTime);
    }
}
