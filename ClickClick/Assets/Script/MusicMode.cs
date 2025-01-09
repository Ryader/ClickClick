using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
using System.Collections;
using UnityEngine.Networking;
using Newtonsoft.Json.Linq;
using TMPro;

public class MusicMode : MonoBehaviour
{
    public GameObject trackPrefab;
    public Transform content; 
    public VideoPlayer videoPlayer; 

    private const string apiKey = "AIzaSyAM2s0VMkMcup-DfGEYepTXCBA7pFT3ZWY";
    private const string playlistId = "PLirAqAtl_h2pRAtj2DgTa3uWIZ3-0LKTA"; 
    private const string apiUrl = "https://www.googleapis.com/youtube/v3/playlistItems";

    void Start()
    {
        StartCoroutine(FetchMusicFromPlaylist());
    }

    IEnumerator FetchMusicFromPlaylist()
    {
        string url = $"{apiUrl}?part=snippet&playlistId={playlistId}&key={apiKey}&maxResults=100";

        using UnityWebRequest request = UnityWebRequest.Get(url);
        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.Success)
        {
            Debug.Log("Response: " + request.downloadHandler.text);
            PopulateTrackList(request.downloadHandler.text);
        }
        else
        {
            Debug.LogError("Error fetching YouTube playlist: " + request.error);
        }
    }

    void PopulateTrackList(string json)
    {
        JObject response = JObject.Parse(json);
        foreach (var item in response["items"])
        {
            string title = item["snippet"]["title"].ToString();
            string videoId = item["snippet"]["resourceId"]["videoId"].ToString();

            // Создаем объект трека
            GameObject trackObject = Instantiate(trackPrefab, content);

            // Поиск TextMeshProUGUI
            TextMeshProUGUI titleText = trackObject.GetComponentInChildren<TextMeshProUGUI>();
            if (titleText != null)
            {
                titleText.text = title;
            }
            else
            {
                Debug.LogWarning($"TextMeshProUGUI component not found for track: {title}");
            }

            Button selectButton = trackObject.transform.Find("Выбрать")?.GetComponent<Button>();
            selectButton?.onClick.AddListener(() => OnTrackSelected(videoId, title));
        }
    }

    void OnTrackSelected(string videoId, string title)
    {
        PlayVideo(videoId);
    }

    void PlayVideo(string videoId)
    {
        string videoUrl = $"https://www.youtube.com/watch?v={videoId}";

        videoPlayer.url = videoUrl;

        videoPlayer.Prepare();

        videoPlayer.prepareCompleted += (source) =>
        {
            videoPlayer.Play();
        };
    }
}
