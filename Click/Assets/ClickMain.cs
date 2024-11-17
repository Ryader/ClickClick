using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;

public class ClickMain : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI scoreText;
    [SerializeField] private TextMeshProUGUI startText;
    [SerializeField] internal GameObject objMain;
    [SerializeField] private InputAction Click;
    [SerializeField] private Vector3 pos;

    private List<GameObject> spawnedObjects = new();
    private bool gameStarted = false;
    private float minDistance = 1.0f;
    private int countdownValue = 3;
    private int score = 0;

    private float borderLeftRight = 100f;
    private float borderUpDown = 100f;
    private float screenHeight;
    private float screenWidth;

    private void Start()
    {
        
        pos = Vector2.zero;
        startText.gameObject.SetActive(true);
        startText.text = countdownValue.ToString();
        InvokeRepeating(nameof(UpdateCountdown), 1f, 1f);
    }

    private void UpdateCountdown()
    {
        if (countdownValue > 1)
        {
            countdownValue--;
            startText.text = countdownValue.ToString();
        }
        else
        {
            startText.text = "Начали!";
            Invoke(nameof(StartGame), 1f);
            CancelInvoke(nameof(UpdateCountdown));
        }
    }

    private void StartGame()
    {
        startText.gameObject.SetActive(false);
        gameStarted = true;
        InvokeRepeating(nameof(Spawn), 0f, 0.3f);
    }

    private void Update()
    {
        screenHeight = Camera.main.orthographicSize * 2;
        screenWidth = screenHeight * Camera.main.aspect;
    }

    private void Spawn()
    {
        Vector3 randomPos;

        float worldBorderOffsetX = borderLeftRight / Screen.width * screenWidth;
        float worldBorderOffsetY = borderUpDown / Screen.height * screenHeight;

        float objRadius = objMain.transform.localScale.x / 2f;

        float xMin = -screenWidth / 2 + worldBorderOffsetX + objRadius;
        float xMax = screenWidth / 2 - worldBorderOffsetX - objRadius;
        float yMin = -screenHeight / 2 + worldBorderOffsetY + objRadius;
        float yMax = screenHeight / 2 - worldBorderOffsetY - objRadius;

        int attempts = 0;
        const int maxAttempts = 10;

        do
        {
            if (attempts >= maxAttempts)
            {
                return;
            }

            randomPos = new Vector3(
                Random.Range(xMin, xMax),
                Random.Range(yMin, yMax),
                0) + pos;

            attempts++;
        }
        while (spawnedObjects.Exists(obj =>
        {
            if (obj == null) return false;
            float existingObjRadius = obj.transform.localScale.x / 2f;
            float adjustedMinDistance = minDistance + objRadius + existingObjRadius;
            return Vector3.Distance(obj.transform.position, randomPos) < adjustedMinDistance;
        }));

        GameObject newObj = Instantiate(objMain, randomPos, Quaternion.identity);
        spawnedObjects.Add(newObj);
    }

    private void OnEnable()
    {
        Click.Enable();
        Click.performed += OnClickPerformed;
    }

    private void OnDisable()
    {
        Click.Disable();
        Click.performed -= OnClickPerformed;
    }
    private void OnClickPerformed(InputAction.CallbackContext context)
    {
        if (!gameStarted) return;

        Vector2 screenPosition;
        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.isPressed)
        {
            screenPosition = Touchscreen.current.primaryTouch.position.ReadValue();
        }
        else
        {
            screenPosition = Mouse.current.position.ReadValue();
        }

        Ray ray = Camera.main.ScreenPointToRay(screenPosition);
        RaycastHit2D hit = Physics2D.GetRayIntersection(ray);

        if (hit.collider != null)
        {
            GameObject obj = hit.collider.gameObject;

            if (obj.CompareTag("Green"))
            {
                score++;
            }
            else if (obj.CompareTag("Red"))
            {
                score--;
            }

            Destroy(hit.collider.transform.root.gameObject);
            UpdateScoreText();
        }
    }

    private void UpdateScoreText() => scoreText.text = score.ToString();
}
