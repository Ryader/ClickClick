using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;

public class ClickMain : MonoBehaviour
{
    [Header("Настройки интерфейса")]
    [SerializeField] private TextMeshProUGUI scoreText;
    [SerializeField] private TextMeshProUGUI startText;
    [SerializeField] private TextMeshProUGUI timeText;
    [SerializeField] private TextMeshProUGUI scoreText2;
    [SerializeField] private TextMeshProUGUI timeText2;
    [SerializeField] internal GameObject objMain;
    [SerializeField] private InputAction Click;

    [Header("Настройки режима")]
    [SerializeField] private float initialSpawnInterval = 0.3f;
    [SerializeField] private float minSpawnInterval = 0.1f;
    [SerializeField] private float speedUpRate = 0.02f;
    [SerializeField] private float initialLifetime = 3f;
    [SerializeField] private float minLifetime = 1f;
    [SerializeField] private float borderLeftRight = 100f;
    [SerializeField] private float borderUpDown = 150f;
    [SerializeField] private float minDistance = 1.0f;

    private readonly List<GameObject> spawnedObjects = new(20); // Предварительное выделение памяти
    private Camera mainCamera;
    private Vector3 pos;
    private float currentSpawnInterval;
    private float currentLifetime;
    private float nextSpawnTime;
    private float screenHeight;
    private float screenWidth;
    private float nextCleanupTime;
    private float time;
    private int countdownValue = 3;
    private int score;
    private bool gameStarted;

    private const float CLEANUP_INTERVAL = 1f;
    private const int MAX_SPAWN_ATTEMPTS = 10;

    private void Awake()
    {
        mainCamera = Camera.main;
        UpdateScreenDimensions();
    }

    private void Start() => InitializeGame();

    private void InitializeGame()
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
        time = 0f;
        timeText.text = "0.00";
        currentSpawnInterval = initialSpawnInterval;
        currentLifetime = initialLifetime;
        nextSpawnTime = Time.time;
    }

    private void Update()
    {
        if (!gameStarted) return;

        UpdateGameTime();
        UpdateGameLogic();
    }

    private void UpdateGameTime()
    {
        time += Time.deltaTime;
        timeText.text = $"{time:F2}";
        timeText2.text = $"{time:F2}";
    }

    private void UpdateGameLogic()
    {
        if (Time.time >= nextCleanupTime)
        {
            CleanupSpawnedObjectsList();
            nextCleanupTime = Time.time + CLEANUP_INTERVAL;
        }

        if (mainCamera == null)
        {
            mainCamera = Camera.main;
            if (mainCamera == null) return;
        }

        UpdateScreenDimensions();
        UpdateSpawnParameters();
        CheckAndSpawn();
    }

    private void UpdateScreenDimensions()
    {
        screenHeight = mainCamera.orthographicSize * 2;
        screenWidth = screenHeight * mainCamera.aspect;
    }

    private void UpdateSpawnParameters()
    {
        if (currentSpawnInterval > minSpawnInterval)
        {
            currentSpawnInterval = Mathf.Max(minSpawnInterval, initialSpawnInterval - (speedUpRate * time));
        }

        if (currentLifetime > minLifetime)
        {
            currentLifetime = Mathf.Max(minLifetime, initialLifetime - (speedUpRate * time));
        }
    }

    private void CheckAndSpawn()
    {
        if (Time.time >= nextSpawnTime)
        {
            Spawn();
            nextSpawnTime = Time.time + currentSpawnInterval;
        }
    }

    private void CleanupSpawnedObjectsList() => spawnedObjects.RemoveAll(obj => obj == null);

    private void Spawn()
    {
        if (objMain == null) return;

        Vector3 randomPos = GetValidSpawnPosition();
        if (randomPos == Vector3.zero) return;

        GameObject newObj = Instantiate(objMain, randomPos, Quaternion.identity);
        newObj.transform.localScale = Vector3.one * GameSettings.Instance.objectScale;
        spawnedObjects.Add(newObj);
        Destroy(newObj, currentLifetime);
    }

    private Vector3 GetValidSpawnPosition()
    {
        float worldBorderOffsetX = borderLeftRight / Screen.width * screenWidth;
        float worldBorderOffsetY = borderUpDown / Screen.height * screenHeight;
        float objRadius = objMain.transform.localScale.x / 2f;

        float xMin = -screenWidth / 2 + worldBorderOffsetX + objRadius;
        float xMax = screenWidth / 2 - worldBorderOffsetX - objRadius;
        float yMin = -screenHeight / 2 + worldBorderOffsetY + objRadius;
        float yMax = screenHeight / 2 - worldBorderOffsetY - objRadius;

        for (int attempts = 0; attempts < MAX_SPAWN_ATTEMPTS; attempts++)
        {
            Vector3 randomPos = new(Random.Range(xMin, xMax), Random.Range(yMin, yMax), 0);
            randomPos += pos;

            if (!IsPositionOccupied(randomPos, objRadius))
            {
                return randomPos;
            }
        }

        return Vector3.zero;
    }

    private bool IsPositionOccupied(Vector3 position, float objRadius)
    {
        foreach (GameObject obj in spawnedObjects)
        {
            if (obj == null) continue;

            float existingObjRadius = obj.transform.localScale.x / 2f;
            float adjustedMinDistance = minDistance + objRadius + existingObjRadius;

            if (Vector3.Distance(obj.transform.position, position) < adjustedMinDistance)
            {
                return true;
            }
        }
        return false;
    }

    public void ClearObjects()
    {
        foreach (GameObject obj in spawnedObjects)
        {
            if (obj != null)
            {
                Destroy(obj);
            }
        }
        spawnedObjects.Clear();
    }

    public void SetObjectsActive(bool active)
    {
        foreach (GameObject obj in spawnedObjects)
        {
            obj?.SetActive(active);
        }
    }

    private void OnEnable()
    {
        Click?.Enable();
        Click.performed += OnClickPerformed;
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

        Vector2 inputPos = GetInputPosition();
        Vector3 worldPoint = Camera.main.ScreenToWorldPoint(new Vector3(inputPos.x, inputPos.y, 0));
        RaycastHit2D hit = Physics2D.Raycast(worldPoint, Vector2.zero);

        if (hit.collider != null)
        {
            HandleObjectClick(hit.collider.gameObject);
        }
    }

    private void HandleObjectClick(GameObject clickedObject)
    {
        if (clickedObject.CompareTag("Green"))
        {
            score++;
        }
        else if (clickedObject.CompareTag("Red"))
        {
            score--;
        }

        Destroy(clickedObject.transform.root.gameObject);
        UpdateScoreText();
    }

    private Vector2 GetInputPosition()
    {
        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.isPressed)
        {
            return Touchscreen.current.primaryTouch.position.ReadValue();
        }
        return Mouse.current.position.ReadValue();
    }

    private void UpdateScoreText()
    {
        scoreText.text = score.ToString();
        scoreText2.text = score.ToString();
    }
}