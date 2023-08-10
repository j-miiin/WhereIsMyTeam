using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour
{
    public static InputManager I;

    Touch touch;

    Camera mainCam;

    private void Awake()
    {
        I = this;
        
        mainCam = Camera.main;
    }
    
    void Update()
    {
#if UNITY_ANDROID
        if (Input.touchCount > 0)
        {
            touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began)
            {
                TouchParticle particle = ObjectPooler.I.touchPool.GetObject();
                Vector3 touchPos = mainCam.ScreenToWorldPoint(touch.position);
                touchPos.z = 0;
                particle.transform.position = touchPos;
            }
        }
#endif
#if UNITY_STANDALONE
        if (Input.GetMouseButtonDown(0))
        {
            TouchParticle particle = ObjectPooler.I.touchPool.GetObject();
            Vector3 mousePos = mainCam.ScreenToWorldPoint(Input.mousePosition);
            mousePos.z = 0;
            particle.transform.position = mousePos;
        }
#endif

    }
}
