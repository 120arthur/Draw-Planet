using UnityEngine;

public class Chegada : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "Player")
        {
            Ui.instanceUi.LigarPainel(Ui.instanceUi.gameOverPanel);
            Time.timeScale = 0;
        }
    }
}
