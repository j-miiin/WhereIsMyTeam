using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class startBtn : MonoBehaviour
{
    public GameObject stageSelectManagerObject;
    public GameObject selectStagePanel;
    public GameObject stage2Btn;
    public GameObject lock_img;
    public Text selectedStageText;

    const string LOCKED_STAGE = "lockedStage";

    // Start is called before the first frame update
    void Start()
    {
        if (!PlayerPrefs.HasKey(LOCKED_STAGE))
        {
            PlayerPrefs.SetInt(LOCKED_STAGE, 0);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (PlayerPrefs.HasKey(LOCKED_STAGE) && PlayerPrefs.GetInt(LOCKED_STAGE) == 1)
        {
            stage2Btn.transform.Find("Button").GetComponent<Button>().interactable = true;
            lock_img.SetActive(false);
        }
    }

    public void gameStart()
    {
        if (stageSelectManager.SSM.getStage() == 1)
        {
            SceneManager.LoadScene("MainScene");
            DontDestroyOnLoad(stageSelectManagerObject);
        } else
        {
            SceneManager.LoadScene("kjm_nextStageScene");
            DontDestroyOnLoad(stageSelectManagerObject);
        }
        
    }

    public void selectStage1()
    {
        stageSelectManager.SSM.setStage(1);
        selectedStageText.text = "STAGE 1";
        selectStagePanel.SetActive(false);
    }

    public void selectStage2()
    {
        stageSelectManager.SSM.setStage(2);
        selectedStageText.text = "STAGE 2";
        selectStagePanel.SetActive(false);
    }
}
