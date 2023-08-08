using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public Text timeText;
    public GameObject card;
    public GameObject endText;
    public GameObject tryMatchCountText;
    float time;
    int tryMatchCount;
    bool isSpeedUp;

    public static GameManager I;

    public GameObject firstCard;
    public GameObject secondCard;

    public AudioClip match;
    public AudioClip fail;
    public AudioSource audioSource;
    public Text matchText;

    [Header("르탄이 스프라이트 사이즈 기준 500x500")]
    public int rtanSpriteSize = 500;

    [Header("카드 이펙트 시간")]
    public float matchTextTime = 1f;
    public string unCorrectMessage = "실패";


    [Header("매칭 컬러")]
    public Color correctColor;
    public Color unCorrectColor;

    [Header("카드 경로")]
    public const string CARD_PATH = "cardImages";

    private void Awake()
    {
        I = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1f;

        int[] teams = { 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7 };
        teams = teams.OrderBy(item => Random.Range(-1.0f, 1.0f)).ToArray();
        
        // 폴더의 스프라이트 모두 부르기
        Sprite[] sprites = Resources.LoadAll<Sprite>(CARD_PATH);
        time = 30f;
        tryMatchCount = 0;



        for (int i = 0; i < 16; i++)
        {
            GameObject newCard = Instantiate(card);
            newCard.transform.parent = GameObject.Find("cards").transform;
            float x = (i / 4) * 1.4f - 2.1f;
            float y = (i % 4) * 1.4f - 3.0f;
            newCard.transform.position = new Vector3(x, y, 0);

            Transform frontTrans = newCard.transform.Find("front");
            SpriteRenderer cardRenderer = frontTrans.GetComponent<SpriteRenderer>();

            cardRenderer.sprite = sprites[teams[i]];

            // 스케일 세팅
            Vector3 tempScale = frontTrans.transform.localScale;
            tempScale.x *= rtanSpriteSize / cardRenderer.sprite.rect.width;
            tempScale.y *= rtanSpriteSize / cardRenderer.sprite.rect.height;
            frontTrans.localScale = tempScale;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (time <= 0f)
        {
            Time.timeScale = 0f;
            endText.SetActive(true);
            tryMatchCountText.GetComponent<Text>().text = tryMatchCount + " try";
            tryMatchCountText.SetActive(true);
        } else if (time <= 5f) {
            if (!isSpeedUp)
            {
                timeText.color = Color.red;
                audioManager.A.playSpeedUpMusic();
                isSpeedUp = true;
            }
            time -= Time.deltaTime;
            timeText.text = time.ToString("N2");
        } else
        {
            time -= Time.deltaTime;
            timeText.text = time.ToString("N2");
        }
    }

    public void isMatched()
    {
        string firstCardImage = firstCard.transform.Find("front").GetComponent<SpriteRenderer>().sprite.name;
        string secondCardImage = secondCard.transform.Find("front").GetComponent<SpriteRenderer>().sprite.name;

        if (firstCardImage == secondCardImage)
        {
            StartCoroutine(CoVerifyMatching(firstCardImage, true));

            audioSource.PlayOneShot(match);

            firstCard.GetComponent<card>().destroyCard();
            secondCard.GetComponent<card>().destroyCard();

            int cardsLeft = GameObject.Find("cards").transform.childCount;
            if (cardsLeft == 2)
            {
                Invoke("GameEnd", 1f);
            }
        }
        else
        {
            StartCoroutine(CoVerifyMatching(firstCardImage));
            audioSource.PlayOneShot(fail);
        
            firstCard.GetComponent<card>().closeCard();
            secondCard.GetComponent<card>().closeCard();
        }

        firstCard = null;
        secondCard = null;
        tryMatchCount++;
    }

    private IEnumerator CoVerifyMatching(string cardName, bool isCorrect = false)
    {
        // 맞췄을 때
        if (isCorrect)
        {
            matchText.text = cardName.Split('_')[0];
            matchText.color = correctColor;
        }
        // 아닐 때
        else
        {
            matchText.text = unCorrectMessage;
            matchText.color = unCorrectColor;
        }

        matchText.gameObject.SetActive(true);
        yield return new WaitForSeconds(matchTextTime);
        matchText.gameObject.SetActive(false);
    }

    void GameEnd()
    {
        Time.timeScale = 0f;
        endText.SetActive(true);
        tryMatchCountText.GetComponent<Text>().text = tryMatchCount + " try";
        tryMatchCountText.SetActive(true);
    }

    public void retryGame()
    {
        SceneManager.LoadScene("MainScene");
    }
}
