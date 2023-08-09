using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchParticle : MonoBehaviour
{
    float remainTime = 1f;

    Action<ParticleSystem> returnAction;

    ParticleSystem ParticleSystem;

    private void Awake()
    {
        ParticleSystem = GetComponent<ParticleSystem>();
        remainTime = ParticleSystem.main.startLifetime.constant;
    }

    void OnEnable()
    {
        ParticleSystem.Play();
        StartCoroutine(CoRemainWhile());
    }

    void OnDisable()
    {
        returnAction?.Invoke(ParticleSystem);
    }


    public void SetReturnCallback(Action<ParticleSystem> action)
    {
        returnAction = action;
    }

    IEnumerator CoRemainWhile()
    {
        float ratio = 0f;
        while (ratio < remainTime)
        {
            ratio += Time.deltaTime;
            yield return null;
        }

        gameObject.SetActive(false);
    }


}
