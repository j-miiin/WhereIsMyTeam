using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchPool
{
    ParticleSystem touchParticle;
    Stack<ParticleSystem> particlePool = new Stack<ParticleSystem>();

    Transform parentTrans;

    public TouchPool(ParticleSystem particle, Transform trans)
    {
        touchParticle = particle;
        parentTrans = trans;
    }

    public ParticleSystem GetObject()
    {
        ParticleSystem particle = null;

        if (particlePool.Count > 0)
        {
            particle = particlePool.Pop();
            particle.gameObject.SetActive(true);
        }
        else
        {
            particle = CreateNewObject();
            particlePool.Push(particle);
        }

        return particle;
    }

    void ReturnObject(ParticleSystem particle)
    {
        particle.gameObject.SetActive(false);
        particlePool.Push(particle);
    }

    ParticleSystem CreateNewObject()
    {
        ParticleSystem particle = Object.Instantiate(touchParticle, parentTrans);
        particle.GetComponent<TouchParticle>().SetReturnCallback(ReturnObject);
        return particle;
    }
}
