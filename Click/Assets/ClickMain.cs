using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;

public class ClickMain : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI scoreText;
    [SerializeField] private TextMeshProUGUI startText;
    [SerializeField] private GameObject objMain;
    [SerializeField] private Vector3 pos;

    private List<GameObject> spawnedObjects = new();
    private bool gameStarted = false;
    private float minDistance = 1.0f;
    private int countdownValue = 3;
    private int score = 0;

    [SerializeField] private InputAction Click;

    private float screenWidth;
    private float screenHeight;
    private float borderLeftRight = 50f; 
    private float borderUpDown = 100f;   

    private void Start()
    {
        
        pos = Vector3.zero;
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
        // Устанавливаем начальные границы видимой области
        screenHeight = Camera.main.orthographicSize * 2;
        screenWidth = screenHeight * Camera.main.aspect;

        // Масштабируем игровое поле, если это необходимо
        objMain.transform.localScale = new Vector3(1f, 1f, 1f);
    }

    private void Spawn()
    {
        Vector3 randomPos;

        // Переводим отступы из пикселей в единицы мира
        float worldBorderOffsetX = borderLeftRight / Screen.width * screenWidth;
        float worldBorderOffsetY = borderUpDown / Screen.height * screenHeight;

        // Используем границы камеры для генерации позиций в видимой области с учетом отступов
        float xMin = -screenWidth / 2 + worldBorderOffsetX;
        float xMax = screenWidth / 2 - worldBorderOffsetX;
        float yMin = -screenHeight / 2 + worldBorderOffsetY;
        float yMax = screenHeight / 2 - worldBorderOffsetY;

        do
        {
            randomPos = new Vector3(
                Random.Range(xMin, xMax),
                Random.Range(yMin, yMax),
                0) + pos;
        }
        while (spawnedObjects.Exists(obj => obj != null && Vector3.Distance(obj.transform.position, randomPos) < minDistance));

        // Добавляем объект в список и на сцену
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

        Ray ray = Camera.main.ScreenPointToRay(Mouse.current.position.ReadValue());
        RaycastHit2D hit = Physics2D.GetRayIntersection(ray);

        if (hit.collider != null)
        {
            GameObject obj = hit.collider.gameObject;

            // Обновляем счёт в зависимости от цвета объекта
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
