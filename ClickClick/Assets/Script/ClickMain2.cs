using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;

public class ClickMain2 : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI scoreText;
    [SerializeField] private TextMeshProUGUI startText;
    [SerializeField] private TextMeshProUGUI timeText;
    [SerializeField] private GameObject WinPanel;
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

    [SerializeField] private float gameDuration = 30f; // ������������ ���� � ��������
    private float timeRemaining;

    private void Start()
    {
        pos = Vector2.zero;
        startText.gameObject.SetActive(true);
        WinPanel.SetActive(false); // ������ ������ ������ � ������
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
        timeRemaining = gameDuration; // ���������� ���������� �����
        InvokeRepeating(nameof(Spawn), 0f, 0.3f);
    }

    private void Update()
    {
        if (!gameStarted) return;

        // ���������� �������
        if (timeRemaining > 0)
        {
            timeRemaining -= Time.deltaTime;
            UpdateTimeText();
        }
        else
        {
            EndGame();
        }

        // ���������� ������ ������
        if (Camera.main == null) return;
        screenHeight = Camera.main.orthographicSize * 2;
        screenWidth = screenHeight * Camera.main.aspect;
    }

    private void EndGame()
    {
        gameStarted = false;
        CancelInvoke(nameof(Spawn));
        WinPanel.SetActive(true); // �������� ������ ������
    }

    private void UpdateTimeText()
    {
        timeText.text = $"Время: {Mathf.CeilToInt(timeRemaining)}"; // ���������� ���������� �����
    }

    private void Spawn()
    {
        if (objMain == null) return;

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
            if (attempts >= maxAttempts) return;

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
        Click?.Enable();
        Click.performed += OnClickPerformed;
    }


private void ClearObjects()
{
    for (int i = spawnedObjects.Count - 1; i >= 0; i--)
    {
        var obj = spawnedObjects[i];
        if (obj != null && obj.scene.isLoaded)
        {
            Destroy(obj);
            spawnedObjects.RemoveAt(i);
        }
    }
    spawnedObjects.Clear();
}

    private void OnDisable()
    {
        Click?.Disable();
        Click.performed -= OnClickPerformed;
        CancelInvoke(); // Отменяем все повторяющиеся вызовы
        ClearObjects(); // Очищаем объекты
    }

    private void OnClickPerformed(InputAction.CallbackContext context)
    {
        if (!gameStarted || Camera.main == null) return;

        Vector2 screenPosition = GetInputPosition();
        Ray ray = Camera.main.ScreenPointToRay(screenPosition);
        RaycastHit2D hit = Physics2D.GetRayIntersection(ray);

        if (hit.collider != null)
        {
            GameObject obj = hit.collider.gameObject;

            if (obj.CompareTag("Green"))
                score++;
            else if (obj.CompareTag("Red"))
                score--;

             spawnedObjects.Remove(obj.transform.root.gameObject); // Удаляем объект из списка
            Destroy(obj.transform.root.gameObject);
            UpdateScoreText();
        }
    }

    private Vector2 GetInputPosition()
    {
        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.isPressed)
        {
            return Touchscreen.current.primaryTouch.position.ReadValue();
        }
        return Mouse.current.position.ReadValue();
    }

    private void UpdateScoreText() => scoreText.text = score.ToString();
}
