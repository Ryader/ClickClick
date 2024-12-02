using UnityEngine;
using UnityEngine.UI;

public class SLider : MonoBehaviour
{
    [SerializeField] private Slider slider;
    public float min = 100f;
    public float max = 300f;
    public GameObject objSlider;

    private void Start()
    {
        if (slider != null)
        {
            slider.minValue = min;
            slider.maxValue = max;
            slider.value = min;
            slider.onValueChanged.AddListener(OnSliderValueChanged);
        }
    }

    private void Update()
    {
        if (slider == null || objSlider == null) return;

        // Меняем размер объекта в меню
        float sliderValue = slider.value;
        objSlider.transform.localScale = new Vector2(sliderValue, sliderValue);

        // Пересчитываем значение для игровых объектов (от 1 до 3)
        float scaleValueGame = Mathf.Lerp(1f, 3f, (sliderValue - min) / (max - min));

        // Сохраняем значение в настройках
        GameSettings.Instance.objectScale = scaleValueGame;
    }

    private void OnDestroy()
    {
        if (slider != null)
        {
            slider.onValueChanged.RemoveListener(OnSliderValueChanged);
        }
    }

    private void OnSliderValueChanged(float value)
    {
        // Этот метод можно использовать, если нужна дополнительная логика при изменении значения слайдера
    }
}
