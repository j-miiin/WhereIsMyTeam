using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class stageSelectManager : MonoBehaviour
{
    private int stage = 1;

    public static stageSelectManager SSM;

    [Header("씬 페이드 시간")]
    [SerializeField] float fadeValue = 1f;
    [SerializeField] float fadeTime = 1f;

    [Header("페이드 이미지")]
    [SerializeField] Image fadeImage;

    const string LOCKED_STAGE = "lockedStage";

    private void Awake()
    {
        SSM = this;
        DontDestroyOnLoad(this);
    }

    // Start is called before the first frame update
    void Start()
    {
        // 스테이지 값은 항상 최종 클리어한 스테이지의 다음 스테이지로 설정 (1스테이지 해제했으면 2스테이지)
        if (PlayerPrefs.HasKey(LOCKED_STAGE)) 
        {
            SSM.stage = PlayerPrefs.GetInt(LOCKED_STAGE) + 1;
        } else
        {
            SSM.stage = 1;
        }
    }

    // Update is called once per frame
    void Update()
    {
        fadeImage.material.SetFloat("_StepValue", 0);
    }

    public void StartGame()
    {
        if (stage == 1)
        {
            Fade("MainScene");
        }
        else if (stage == 2)
        {
            Fade("Stage2Scene");
        }
    }

    public void Fade(string sceneName)
    {
        StartCoroutine(CoFade(sceneName));
    }

    IEnumerator CoFade(string sceneName)
    {
        float time = 0;
        while (time < fadeValue)
        {
            time += Time.unscaledDeltaTime / fadeTime;
            fadeImage.material.SetFloat("_StepValue", time);
            yield return null;
        }

        var op = SceneManager.LoadSceneAsync(sceneName);

        while (op.isDone)
        {
            yield return null;
        }

        time = fadeValue;
        while (time > 0)
        {
            time -= Time.unscaledDeltaTime / fadeTime;
            fadeImage.material.SetFloat("_StepValue", time);
            yield return null;
        }
    }

    public int getStage()
    {
        return stage;
    }

    public void setStage(int value)
    {
        SSM.stage = value;
    }
}
