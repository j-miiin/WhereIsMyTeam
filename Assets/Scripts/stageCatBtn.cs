using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class stageCatBtn : MonoBehaviour
{
    public GameObject selectStagePanel;
    public Image stageCatBtnImage;
    public Sprite pixelcat;
    public Sprite pixelcat_with_sunglasses;
    public Text selectedStageText;

    const string LOCKED_STAGE = "lockedStage";

    // Start is called before the first frame update
    void Start()
    {
        // 처음 게임 시작이거나 stage 1을 클리어 못했을 때
        if (!PlayerPrefs.HasKey(LOCKED_STAGE) || PlayerPrefs.GetInt(LOCKED_STAGE) == 0)
        {
            stageCatBtnImage.sprite = pixelcat;
            selectedStageText.text = "STAGE 1";
        }
        // stage 1 클리어 했을 때 stage2
        else
        {
            stageCatBtnImage.sprite = pixelcat_with_sunglasses;
            selectedStageText.text = "STAGE 2";
        }
    }

    // Update is called once per frame
    void Update()
    {
        // 초기화 이후에는 홈 화면에서 stage 버튼 클릭하는 거에 따라 고양이 이미지와 텍스트가 달라져야 함
        // 그래서 PlayerPrefs 말고 stageSelectManager로부터 정보 가져오기
        if (stageSelectManager.SSM.getStage() == 1)
        {
            stageCatBtnImage.sprite = pixelcat;
            selectedStageText.text = "STAGE 1";
        } else
        {
            stageCatBtnImage.sprite = pixelcat_with_sunglasses;
            selectedStageText.text = "STAGE 2";
        }
    }

    public void openSelectStagePanel()
    {
        selectStagePanel.SetActive(true);
    }
}
