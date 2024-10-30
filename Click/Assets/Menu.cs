using UnityEngine;
using UnityEngine.InputSystem;
using YG;

public class Menu : MonoBehaviour
{
    [SerializeField] private YandexGame SDK;
    [SerializeField] private InputAction Esc;
    [SerializeField] private GameObject _Menu;
    [SerializeField] private GameObject _MenuPause;
    [SerializeField] private bool isPaused = false;

    private void YandexSDKStart() => SDK._GameplayStart();
    private void YandexSDKStop() => SDK._GameplayStop();

    private void Start()
    {
        _Menu.SetActive(true);
        Time.timeScale = 0f;
    }

    public void Μενώ()
    {
        YandexSDKStart();
        _Menu.SetActive(false);
        Time.timeScale = 1f;
    }

    private void OnEnable()
    {
        Esc.Enable();
        Esc.performed += TogglePause;
    }

    private void OnDisable()
    {
        Esc.Disable();
        Esc.performed -= TogglePause;
    }

    private void TogglePause(InputAction.CallbackContext context)
    {
        isPaused = !isPaused;

        if (isPaused)
        {
            YandexSDKStop();
        }
        else
        {
            YandexSDKStart();
        }

        _MenuPause.SetActive(isPaused);
        Time.timeScale = isPaused ? 0f : 1f;
    }
}