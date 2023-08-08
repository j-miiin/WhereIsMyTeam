using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class audioManager : MonoBehaviour
{
    public AudioClip bgmusic;
    public AudioClip speedUpmusic;
    public AudioSource audioSource;

    public static audioManager A;

    private void Awake()
    {
        if (A == null) A = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        audioSource.clip = bgmusic;
        audioSource.Play();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void playSpeedUpMusic()
    {
        audioSource.clip = speedUpmusic;
        audioSource.Play();
    }
}
