using UnityEngine;
using UnityEngine.SceneManagement;
/// <summary>
/// Gerencia as Uis do game.
/// </summary>
public class Ui : MonoBehaviour
{
    public static Ui instanceUi;

    [Header ("UI Panels")]
    public GameObject gameOverPanel;

    private void Awake()
    {
        instanceUi = this;
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
