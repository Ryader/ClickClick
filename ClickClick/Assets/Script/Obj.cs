using System.Collections;
using UnityEngine;

public class Obj : MonoBehaviour
{
    [SerializeField] private GameObject mainObject;
    [SerializeField] private GameObject greenObject;

    private readonly float duration = 3f;
    private readonly Vector3 targetScale = new(0.1f, 0.1f, 0.1f);
    private Transform greenTransform;

    private void Start()
    {
        Debug.Assert(mainObject != null, "Нет род. объекта");
        Debug.Assert(greenObject != null, "Нет зелени");

        if (mainObject == null || greenObject == null)
            return;

        greenTransform = greenObject.transform;
        StartCoroutine(ScaleOverTime());
    }

    private IEnumerator ScaleOverTime()
    {
        Vector3 initialScale = greenTransform.localScale;
        float elapsedTime = 0f;

        while (elapsedTime < duration)
        {
            greenTransform.localScale = Vector3.Lerp(initialScale, targetScale, elapsedTime / duration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        greenTransform.localScale = targetScale;

        // Уничтожаем основной объект только если он существует
        if (mainObject != null)
            Destroy(mainObject);
    }
}
