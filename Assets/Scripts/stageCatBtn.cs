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
        // ó�� ���� �����̰ų� stage 1�� Ŭ���� ������ ��
        if (!PlayerPrefs.HasKey(LOCKED_STAGE) || PlayerPrefs.GetInt(LOCKED_STAGE) == 0)
        {
            stageCatBtnImage.sprite = pixelcat;
            selectedStageText.text = "STAGE 1";
        }
        // stage 1 Ŭ���� ���� �� stage2
        else
        {
            stageCatBtnImage.sprite = pixelcat_with_sunglasses;
            selectedStageText.text = "STAGE 2";
        }
    }

    // Update is called once per frame
    void Update()
    {
        // �ʱ�ȭ ���Ŀ��� Ȩ ȭ�鿡�� stage ��ư Ŭ���ϴ� �ſ� ���� ����� �̹����� �ؽ�Ʈ�� �޶����� ��
        // �׷��� PlayerPrefs ���� stageSelectManager�κ��� ���� ��������
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
