using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Explosion : MonoBehaviour, IPoolable<Explosion>
{
    Action<Explosion> returnCallback;
    
    Animator animator;

    const string EXPLOSION_NAME = "Explosion";

    void Awake()
    {
        animator = GetComponent<Animator>();
    }

    void OnEnable()
    {
        SetSize();
        animator.Play(EXPLOSION_NAME);
    }

    void OnDisable()
    {
        returnCallback?.Invoke(this);
    }

    public void SetReturnObject(Action<Explosion> action)
    {
        returnCallback = action;
    }

    void SetSize()
    {
        if (!stageManager.S)
        {
            return;
        }

        transform.localScale *= stageManager.S.stageCardSizeDict[stageSelectManager.SSM.getStage()];
    }

    // 애니메이션 끝날 때 SetActive(false);
    void OnExploded()
    {
        gameObject.SetActive(false);
    }
}
