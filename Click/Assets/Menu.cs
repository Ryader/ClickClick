using UnityEngine;
using UnityEngine.InputSystem;

public class Menu : MonoBehaviour
{
    [SerializeField] private InputAction Esc;
    [SerializeField] private GameObject _Menu;
    [SerializeField] private GameObject _MenuPause;
    [SerializeField] private bool isPaused = false;

    private void Start()
    {
        if (_Menu != null)
        {
            _Menu.SetActive(true);
            Time.timeScale = 0f;
        }
    }

    public void Μενώ()
    {
        if (_Menu != null)
        {
            _Menu.SetActive(false);
            Time.timeScale = 1f;
        }
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
        _MenuPause.SetActive(isPaused);
        Time.timeScale = isPaused ? 0f : 1f;
    }
}