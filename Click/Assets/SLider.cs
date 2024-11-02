using UnityEngine;
using UnityEngine.UI;

public class SLider : MonoBehaviour
{
    public Slider slider;

    public float min = 100; //������������ �������
    public float max = 300;

    public GameObject objSlider;
    public ClickMain obj;


    private void Start()
    {
        if (slider != null)
        {
            slider.minValue = min;
            slider.maxValue = max;
            slider.value = min; 
        }
    }

    private void Update()
    {
        if (slider != null && objSlider != null && obj != null)
        {
            float sliderValue = slider.value;

            // ��������� �������� ������������ �������
            objSlider.transform.localScale = new Vector2(sliderValue, sliderValue);

            // �������������� ��� ���������� ���������
            float scaleValueObj = Mathf.Lerp(1f, 3f, (sliderValue - min) / (max - min));
            obj.objMain.transform.localScale = new Vector2(scaleValueObj, scaleValueObj);
        }
    }
}
