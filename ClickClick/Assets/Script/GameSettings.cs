using UnityEngine;

[CreateAssetMenu(fileName = "GameSettings", menuName = "ClickClick/GameSettings")]
public class GameSettings : ScriptableObject
{
    public float objectScale = 1f;

    private static GameSettings instance;
    public static GameSettings Instance
    {
        get
        {
            if (instance == null)
            {
                instance = Resources.Load<GameSettings>("GameSettings");
            }
            return instance;
        }
    }
}
