using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Explosion : MonoBehaviour, IPoolable<Explosion>
{
    [Header("카드 폭발 콜백")]
    Action<Explosion> returnCallback;
    
    [Header("카드 폭발 애니메이터")]
    Animator animator;

    [Header("리소스 경로")]
    const string EXPLOSION_PATH = "Explosion";

    void Awake()
    {
        animator = GetComponent<Animator>();
    }

    void OnEnable()
    {
        SetSize();
        animator.Play(EXPLOSION_PATH);
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
        if (stageManager.S.stageCardSizeDict.Count == 0)
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
