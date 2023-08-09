using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPool<T> where T : MonoBehaviour, IPoolable<T>
{
    [Header("풀링 프리펩")]
    T tPrefab;

    [Header("스택 풀")]
    Stack<T> objectPool = new Stack<T>();

    Transform parentTrans;

    public ObjectPool(T t, Transform trans, int initCount)
    {
        tPrefab = t;
        parentTrans = trans;

        for (int i = 0; i < initCount; i++)
        {
            CreateNewObject();
        }
    }

    public T GetObject()
    {
        T t = null;

        if (objectPool.Count > 0)
        {
            t = objectPool.Pop();
            t.gameObject.SetActive(true);
        }
        else
        {
            t = CreateNewObject();
        }

        return t;
    }

    void ReturnObject(T t)
    {
        objectPool.Push(t);
    }

    T CreateNewObject()
    {
        T t = Object.Instantiate(tPrefab, parentTrans);
        t.SetReturnObject(ReturnObject);
        t.gameObject.SetActive(false);
        return t;
    }
}
