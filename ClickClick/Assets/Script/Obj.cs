using System.Collections;
using UnityEngine;

public class Obj : MonoBehaviour
{
    [SerializeField] private GameObject mainObject;
    [SerializeField] private GameObject greenObject;

    private readonly float duration = 3f;
    private readonly Vector3 targetScale = new(0.1f, 0.1f, 0.1f);
    private Transform greenTransform;

    [Header("Настройка анимации")]
    [SerializeField] private AnimationCurve scaleCurve = AnimationCurve.EaseInOut(0f, 1f, 1f, 0f);

    private Coroutine scaleCoroutine;
    private bool isScaling;

    private void Start()
    {
        Debug.Assert(mainObject != null, "Основной объект не найден");
        Debug.Assert(greenObject != null, "Зелёный объект не найден");

        if (mainObject == null || greenObject == null)
            return;

        greenTransform = greenObject.transform;
        StartScaling();
    }

    private IEnumerator ScaleOverTime()
    {
        Vector3 initialScale = greenTransform.localScale;
        float elapsedTime = 0f;

        while (elapsedTime < duration)
        {
            float normalizedTime = elapsedTime / duration;
            float curveValue = scaleCurve.Evaluate(normalizedTime);
            greenTransform.localScale = Vector3.Lerp(initialScale, targetScale, curveValue);

            elapsedTime += Time.deltaTime;
            yield return null;
        }

        greenTransform.localScale = targetScale;
        isScaling = false;

        if (mainObject != null)
        {
            Destroy(mainObject);
        }
    }

    private void OnDisable()
    {
        StopScaling();
    }

    public void StartScaling()
    {
        if (isScaling) return;

        StopScaling();
        scaleCoroutine = StartCoroutine(ScaleOverTime());
        isScaling = true;
    }

    public void StopScaling()
    {
        if (scaleCoroutine != null)
        {
            StopCoroutine(scaleCoroutine);
            scaleCoroutine = null;
        }
        isScaling = false;
    }

}
