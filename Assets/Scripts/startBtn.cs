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

    const string LOCKED_STAGE = "lockedStage";

    // Start is called before the first frame update
    void Start()
    {
        if (!PlayerPrefs.HasKey(LOCKED_STAGE))
        {
            PlayerPrefs.SetInt(LOCKED_STAGE, 0);
        }  
        Debug.Log("This is StartBtn " + PlayerPrefs.GetInt(LOCKED_STAGE));
    }

    // Update is called once per frame
    void Update()
    {
        if (PlayerPrefs.GetInt(LOCKED_STAGE) == 1)
        {
            stage2Btn.GetComponent<Button>().interactable = true;
            lock_img.SetActive(false);
        } else
        {
            stage2Btn.GetComponent<Button>().interactable = false;
            lock_img.SetActive(true);
        }
    }

    public void gameStart()
    {
        if (stageSelectManager.SSM.getStage() == 1)
        {
            //SceneManager.LoadScene("MainScene");
            SceneManager.LoadScene("kjm_mainScene");
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
        selectStagePanel.SetActive(false);
    }

    public void selectStage2()
    {
        stageSelectManager.SSM.setStage(2); 
        selectStagePanel.SetActive(false);
    }
}
