using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class aboutGameBtn : MonoBehaviour
{
    public GameObject aboutGamePanel;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void openAboutGamePanel()
    {
        aboutGamePanel.SetActive(true);
    }

    public void closeAboutGamePanel()
    {
        aboutGamePanel.SetActive(false);
    }
}
