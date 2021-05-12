using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Ui : MonoBehaviour
{
    public static Ui InstanceUi;

    [Header ("UI Panels")]
    [SerializeField]
    public GameObject GameOverPanel;

    private void Awake()
    {
        InstanceUi = this;
    }
    public void LigarPainel(GameObject Panel)
    {
        Panel.SetActive(true);
    }
    public void DesligarPainel(GameObject Panel)
    {
        Panel.SetActive(false);
    }
    public void CarregarCena(string nomeDaCena)
    {
        SceneManager.LoadScene(nomeDaCena);
    }

}
