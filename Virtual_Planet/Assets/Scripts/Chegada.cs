using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Chegada : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "Player")
        {
            Ui.InstanceUi.LigarPainel(Ui.InstanceUi.GameOverPanel);
            Time.timeScale = 0;
        }
    }
}
