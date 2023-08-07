using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class card : MonoBehaviour
{
    public Animator anim;
    public AudioClip flip;
    public AudioSource audioSource;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void openCard()
    {
        audioSource.PlayOneShot(flip);
        anim.SetBool("isOpen", true);
        transform.Find("front").gameObject.SetActive(true);
        transform.Find("back").gameObject.SetActive(false);

        if (GameManager.I.firstCard == null)
        {
            GameManager.I.firstCard = gameObject;
        } else
        {
            GameManager.I.secondCard = gameObject;
            GameManager.I.isMatched();
        }
    }

    // public ÇÔ¼ö´Â GameManager°¡ ºÎ¸£´Â ÇÔ¼ö
    public void destroyCard()
    {
        Invoke("destroyCardInvoke", 1.0f);
    }

    void destroyCardInvoke()
    {
        Destroy(gameObject);
    }

    public void closeCard()
    {
        Invoke("closeCardInvoke", 1.0f);
    }

    void closeCardInvoke()
    {
        anim.SetBool("isOpen", false);
        transform.Find("back").GetComponent<SpriteRenderer>().color = new Color(0.7f, 0.7f, 0.7f, 1f);
        transform.Find("back").gameObject.SetActive(true);
        transform.Find("front").gameObject.SetActive(false);
    }
}
