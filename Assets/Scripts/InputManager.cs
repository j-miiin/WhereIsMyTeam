using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour
{
    public static InputManager I;

    [Header("Touch Pool")]
    TouchPool touchPool;

    Touch touch;

    Camera mainCam;

    private void Awake()
    {
        I = this;
        ParticleSystem touchPrefab = Resources.Load<ParticleSystem>("TouchParticle");
        touchPool = new TouchPool(touchPrefab, transform);
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
                GameObject particle = touchPool.GetObject();
                particle.transform.position = mainCam.ScreenToWorldPoint(touch.position);
            }
        }
#endif
#if UNITY_STANDALONE
        if (Input.GetMouseButtonDown(0))
        {
            ParticleSystem particle = touchPool.GetObject();
            Vector3 mousePos = mainCam.ScreenToWorldPoint(Input.mousePosition);
            mousePos.z = 0;
            particle.transform.position = mousePos;
        }
#endif

    }
}
