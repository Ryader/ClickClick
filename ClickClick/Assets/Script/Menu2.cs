using UnityEngine;
using UnityEngine.InputSystem;

public class Menu2 : MonoBehaviour
{
    [SerializeField] private InputAction Esc;
    [SerializeField] private GameObject _Menu;
    [SerializeField] private GameObject _MenuPause;
    [SerializeField] private GameObject _GameMode;
    [SerializeField] private bool isPaused = false;

    [SerializeField] private Camera _Сamera;
    [SerializeField] private Color color = new Color();
    [SerializeField] private Color color2 = new Color();

    public void Start()
    {
        if (_Menu != null)
        {
            _Menu.SetActive(true);
            Time.timeScale = 0f;
            _Сamera.backgroundColor = color;
        }
    }

    public void Меню()
    {
        if (_Menu != null)
        {
            _Menu.SetActive(false);
            Time.timeScale = 1f;
            _GameMode.SetActive(true);
        }
    }

    public void OnEnable()
    {
        if (Esc != null)
        {
            Esc.Enable();
            Esc.performed += TogglePause;
        }
    }

    public void OnDisable()
    {
        if (Esc != null)
        {
            Esc.performed -= TogglePause;
            Esc.Disable();
        }
    }

    private void TogglePause(InputAction.CallbackContext context)
    {
        if (_MenuPause == null) return;

        isPaused = !isPaused;
        _GameMode.SetActive(!isPaused);
        _MenuPause.SetActive(isPaused);
        Time.timeScale = isPaused ? 0f : 1f;
        _Сamera.backgroundColor = isPaused ? color2 : color;
    }
}
