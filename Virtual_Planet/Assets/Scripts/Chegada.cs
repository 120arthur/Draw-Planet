using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Chegada : MonoBehaviour
{
    [SerializeField]
    private GameObject GameOverPanel;
    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "Player")
        {
            Ui.InstanceUi.LigarPainel(GameOverPanel);
            Time.timeScale = 0;
        }
    }
}
