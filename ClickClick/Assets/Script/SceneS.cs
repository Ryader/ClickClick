using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneS : MonoBehaviour
{
    public void ����() => SceneManager.LoadScene("Menu");
    public void �������() => SceneManager.LoadScene("Game1");
    public void �������2() => SceneManager.LoadScene("Game2");
    public void �������3() => SceneManager.LoadScene("Game3");
    public void �����() => Application.Quit();
}
