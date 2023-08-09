using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class card : MonoBehaviour
{
    public Animator anim;
    public AudioClip flip;
    public AudioSource audioSource;

    [Header("Flip Values")]
    public float flipRotation = 90f;
    public float flipSpeed = 200f;

    [Header("card Transform")]
    Transform frontTransform;
    Transform backTransform;

    [Header("Button")]
    Button clickBtn;

    // Start is called before the first frame update
    void Start()
    {
        clickBtn = GetComponent<Button>();
        frontTransform = transform.Find("front");
        backTransform = transform.Find("back");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void openCard()
    {
        audioSource.PlayOneShot(flip);

        // 뒤집기 시작
        StartCoroutine(CoFlip());

        if (GameManager.I.firstCard == null)
        {
            GameManager.I.firstCard = gameObject;
        } else
        {
            GameManager.I.secondCard = gameObject;
            GameManager.I.isMatched();
        }
    }

    public void destroyCard()
    {
        

        Invoke("destroyCardInvoke", 1.0f);
    }

    void destroyCardInvoke()
    {
        // 성공 시 폭발 연출
        ObjectPooler.I.explosionPool.GetObject().transform.position = transform.position;
        stageManager.S.RemoveCard(this);
        Destroy(gameObject);
    }

    public void closeCard(float delayTime)
    {
        Invoke("closeCardInvoke", delayTime);
    }

    public void SetButtonInactive()
    {
        clickBtn.interactable = false;
    }

    void closeCardInvoke()
    {
        StartCoroutine(CoReverseFlip());

        backTransform.GetComponent<SpriteRenderer>().color = new Color(0.7f, 0.7f, 0.7f, 1f);
    }

    IEnumerator CoFlip()
    {
        // 애니메이션 꺼주기 -> rotate 애니메이션 끄기
        anim.SetBool("isOpen", true);

        // 뒷면의 y축 회전을 0 ~ 90까지 증가
        float ratio = 0f;
        Vector3 backRotation = backTransform.rotation.eulerAngles;
        while (ratio < flipRotation)
        {
            ratio += Time.deltaTime * flipSpeed;
            backRotation.y = ratio;
            backRotation.y = Mathf.Clamp(backRotation.y, 0, flipRotation);
            backTransform.rotation = Quaternion.Euler(backRotation);
            yield return null;
        }

        // 뒷면 -> 앞면 스위치
        frontTransform.gameObject.SetActive(true);
        backTransform.gameObject.SetActive(false);

        // 앞면의 y축 회전을 90 ~ 0까지 감소
        Vector3 frontRotation = frontTransform.rotation.eulerAngles;
        while (ratio > 0)
        {
            ratio -= Time.deltaTime * flipSpeed;
            frontRotation.y = ratio;
            frontRotation.y = Mathf.Clamp(frontRotation.y, 0, flipRotation);
            frontTransform.rotation = Quaternion.Euler(frontRotation);
            yield return null;
        }

    }

    IEnumerator CoReverseFlip()
    {
        float ratio = 0f;

        // 앞면의 y축 회전을 0 ~ 90까지 증가
        Vector3 frontRotation = frontTransform.rotation.eulerAngles;
        while (ratio < flipRotation)
        {
            ratio += Time.deltaTime * flipSpeed;
            frontRotation.y = ratio;
            frontTransform.rotation = Quaternion.Euler(frontRotation);
            yield return null;
        }

        // 앞면 -> 뒷면 스위치
        frontTransform.gameObject.SetActive(false);
        backTransform.gameObject.SetActive(true);

        // 뒷면의 y축 회전을 90 ~ 0까지 감소
        Vector3 backRotation = backTransform.rotation.eulerAngles;
        while (ratio > 0)
        {
            ratio -= Time.deltaTime * flipSpeed;
            backRotation.y = ratio;
            backTransform.rotation = Quaternion.Euler(backRotation);
            yield return null;
        }

        // 애니메이션 켜주기 -> rotate 애니메이션 키기
        anim.SetBool("isOpen", false);
    }
}
