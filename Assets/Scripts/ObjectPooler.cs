using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPooler : MonoBehaviour
{
    public static ObjectPooler I;

    [Header("Pools")]
    public ObjectPool<TouchParticle> touchPool;
    public ObjectPool<Explosion> explosionPool;


    void Awake()
    {
        I = this;

        // 터치 이펙트 풀
        TouchParticle touchPrefab = Resources.Load<TouchParticle>("TouchParticle");
        touchPool = new ObjectPool<TouchParticle>(touchPrefab, transform, 10);

        // 카드 폭발 풀
        // 폭발은 그냥 생성 파괴 해도 될 수도? - 갯수가 얼마 없음
        Explosion explosionPrefab = Resources.Load<Explosion>("Explosion");
        explosionPool = new ObjectPool<Explosion>(explosionPrefab, transform, 4);

    }
}
