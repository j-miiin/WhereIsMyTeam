using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class startBtn : MonoBehaviour
{
    public GameObject stageSelectManagerObject;

    public GameObject selectStagePanel;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
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
        selectStagePanel.SetActive(false);
    }

    public void selectStage2()
    {
        stageSelectManager.SSM.setStage(2);
        selectStagePanel.SetActive(false);
    }
}
