using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneS : MonoBehaviour
{
    public void переход()
    {
        SceneManager.LoadScene("Game1");
    }

    public void переход2()
    {
        SceneManager.LoadScene("Game2");
    }

    public void переход3()
    {
        SceneManager.LoadScene("Game3");
    }
}
