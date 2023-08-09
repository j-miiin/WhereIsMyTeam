using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchParticle : MonoBehaviour, IPoolable<TouchParticle>
{
    float remainTime = 1f;

    Action<TouchParticle> returnAction;

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
        returnAction?.Invoke(this);
    }

    IEnumerator CoRemainWhile()
    {
        float ratio = 0f;
        while (ratio < remainTime)
        {
            ratio += Time.unscaledDeltaTime;
            yield return null;
        }

        gameObject.SetActive(false);
    }

    public void SetReturnObject(Action<TouchParticle> action)
    {
        returnAction = action;
    }
}
