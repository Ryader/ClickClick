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
    private float borderUpDown = 150;
    private float screenHeight;
    private float screenWidth;

    [SerializeField] private float gameDuration = 30f;
    private float timeRemaining;

    private float nextCleanupTime = 1f;
    private const float CLEANUP_INTERVAL = 1f;

    private void Start()
    {
        pos = Vector2.zero;
        startText.gameObject.SetActive(true);
        WinPanel.SetActive(false);
        startText.text = countdownValue.ToString();
        InvokeRepeating(nameof(UpdateCountdown), 1f, 1f);
    }

    private void UpdateCountdown()
    {
        countdownValue--;
        startText.text = countdownValue.ToString();
        if (countdownValue <= 0)
        {
            CancelInvoke(nameof(UpdateCountdown));
            StartGame();
        }
    }

    private void StartGame()
    {
        startText.gameObject.SetActive(false);
        gameStarted = true;
        timeRemaining = gameDuration;
        InvokeRepeating(nameof(Spawn), 0f, 0.3f);
    }

    private void Update()
    {
        if (!gameStarted) return;

        if (Time.time >= nextCleanupTime)
        {
            CleanupSpawnedObjectsList();
            nextCleanupTime = Time.time + CLEANUP_INTERVAL;
        }

        if (timeRemaining > 0)
        {
            timeRemaining -= Time.deltaTime;
            UpdateTimeText();
        }
        else
        {
            EndGame();
        }

        if (Camera.main == null) return;
        screenHeight = Camera.main.orthographicSize * 2;
        screenWidth = screenHeight * Camera.main.aspect;
    }

    private void EndGame()
    {
        gameStarted = false;
        CancelInvoke(nameof(Spawn));
        WinPanel.SetActive(true);
    }

    private void UpdateTimeText()
    {
        timeText.text = $"Время: {Mathf.CeilToInt(timeRemaining)}";
    }

    private void Spawn()
    {
        if (objMain == null) return;

        // Применяем масштаб из настроек к префабу
        objMain.transform.localScale = Vector3.one * GameSettings.Instance.objectScale;

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

        //// Получаем ссылку на зеленый круг
        //Transform greenCircle = newObj.transform.Find("Green");
        //if (greenCircle != null)
        //{
        //    // Получаем размер красного круга
        //    Transform redCircle = newObj.transform.Find("Red");
        //    if (redCircle != null)
        //    {
        //        float redRadius = redCircle.localScale.x / 2f;

        //        // Генерируем случайный угол и расстояние
        //        float randomAngle = Random.Range(0f, 360f);
        //        float randomDistance = Random.Range(0f, redRadius * 0.5f); // Используем половину радиуса, чтобы зеленый круг всегда был внутри красного

        //        // Вычисляем позицию
        //        float x = Mathf.Cos(randomAngle * Mathf.Deg2Rad) * randomDistance;
        //        float y = Mathf.Sin(randomAngle * Mathf.Deg2Rad) * randomDistance;

        //        // Устанавливаем позицию зеленого круга относительно центра
        //        greenCircle.localPosition = new Vector3(x, y, 0);
        //    }
        //}

        spawnedObjects.Add(newObj);
    }

    private void CleanupSpawnedObjectsList()
    {
        spawnedObjects.RemoveAll(obj => obj == null);
    }

    public void Reset()
    {
        CancelInvoke();
        ClearObjects();
        score = 0;
        UpdateScoreText();
        gameStarted = false;
        WinPanel.SetActive(false);
        timeRemaining = gameDuration;
        UpdateTimeText();
        countdownValue = 3;
        startText.gameObject.SetActive(true);
        startText.text = countdownValue.ToString();
        InvokeRepeating(nameof(UpdateCountdown), 1f, 1f);
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
        CancelInvoke();
        ClearObjects();
    }

     private void OnClickPerformed(InputAction.CallbackContext context)
    {
        if (!gameStarted || Camera.main == null) return;

        Vector2 screenPosition = GetInputPosition();
        Vector3 worldPosition = Camera.main.ScreenToWorldPoint(new Vector3(screenPosition.x, screenPosition.y, 10f));
        
        // Use a small radius for more reliable touch detection on mobile
        RaycastHit2D[] hits = Physics2D.CircleCastAll(worldPosition, 0.5f, Vector2.zero);

        foreach (RaycastHit2D hit in hits)
        {
            if (hit.collider != null)
            {
                GameObject obj = hit.collider.gameObject;
                if (obj.CompareTag("Green"))
                    score++;
                else if (obj.CompareTag("Red"))
                    score--;

                spawnedObjects.Remove(obj.transform.root.gameObject);
                Destroy(obj.transform.root.gameObject);
                UpdateScoreText();
                break; // Stop after first successful hit
            }
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
