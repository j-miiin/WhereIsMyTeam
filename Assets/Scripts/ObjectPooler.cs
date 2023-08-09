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
    }

    void Start()
    {
        // ��ġ ����Ʈ Ǯ
        TouchParticle touchPrefab = Resources.Load<TouchParticle>("TouchParticle");
        touchPool = new ObjectPool<TouchParticle>(touchPrefab, transform, 10);

        // ī�� ���� Ǯ
        // ������ �׳� ���� �ı� �ص� �� ����? - ������ �� ����
        Explosion explosionPrefab = Resources.Load<Explosion>("Explosion");
        explosionPool = new ObjectPool<Explosion>(explosionPrefab, transform, 4);
    }
}
