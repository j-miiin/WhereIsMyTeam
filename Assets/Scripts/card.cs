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

        // ������ ����
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
        // ���� �� ���� ����
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
        // �ִϸ��̼� ���ֱ� -> rotate �ִϸ��̼� ����
        anim.SetBool("isOpen", true);

        // �޸��� y�� ȸ���� 0 ~ 90���� ����
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

        // �޸� -> �ո� ����ġ
        frontTransform.gameObject.SetActive(true);
        backTransform.gameObject.SetActive(false);

        // �ո��� y�� ȸ���� 90 ~ 0���� ����
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

        // �ո��� y�� ȸ���� 0 ~ 90���� ����
        Vector3 frontRotation = frontTransform.rotation.eulerAngles;
        while (ratio < flipRotation)
        {
            ratio += Time.deltaTime * flipSpeed;
            frontRotation.y = ratio;
            frontTransform.rotation = Quaternion.Euler(frontRotation);
            yield return null;
        }

        // �ո� -> �޸� ����ġ
        frontTransform.gameObject.SetActive(false);
        backTransform.gameObject.SetActive(true);

        // �޸��� y�� ȸ���� 90 ~ 0���� ����
        Vector3 backRotation = backTransform.rotation.eulerAngles;
        while (ratio > 0)
        {
            ratio -= Time.deltaTime * flipSpeed;
            backRotation.y = ratio;
            backTransform.rotation = Quaternion.Euler(backRotation);
            yield return null;
        }

        // �ִϸ��̼� ���ֱ� -> rotate �ִϸ��̼� Ű��
        anim.SetBool("isOpen", false);
    }
}
