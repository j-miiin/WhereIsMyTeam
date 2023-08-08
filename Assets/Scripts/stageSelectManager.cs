using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class stageSelectManager : MonoBehaviour
{
    private int stage;

    public static stageSelectManager SSM;

    private void Awake()
    {
        SSM = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

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
