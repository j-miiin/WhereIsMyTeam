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
    float time;

    public static GameManager I;

    public GameObject firstCard;
    public GameObject secondCard;

    public AudioClip match;
    public AudioSource audioSource;

    private void Awake()
    {
        I = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1f;

        int[] rtans = { 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7 };
        rtans = rtans.OrderBy(item => Random.Range(-1.0f, 1.0f)).ToArray();

        for (int i = 0; i < 16; i++)
        {
            GameObject newCard = Instantiate(card);
            // newCard¸¦ cards ¾ÈÀ¸·Î ¿Å°ÜÁà
            newCard.transform.parent = GameObject.Find("cards").transform;
            float x = (i / 4) * 1.4f - 2.1f;
            float y = (i % 4) * 1.4f - 3.0f;
            newCard.transform.position = new Vector3(x, y, 0);

            string rtanName = "rtan" + rtans[i].ToString();
            newCard.transform.Find("front").GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(rtanName);
        }
    }

    // Update is called once per frame
    void Update()
    {     
        if (time > 30f)
        {
            Time.timeScale = 0f;
            endText.SetActive(true);
        } else
        {
            time += Time.deltaTime;
            timeText.text = time.ToString("N2");
        }
    }

    public void isMatched()
    {
        string firstCardImage = firstCard.transform.Find("front").GetComponent<SpriteRenderer>().sprite.name;
        string secondCardImage = secondCard.transform.Find("front").GetComponent<SpriteRenderer>().sprite.name;

        if (firstCardImage == secondCardImage)
        {
            audioSource.PlayOneShot(match);

            firstCard.GetComponent<card>().destroyCard();
            secondCard.GetComponent<card>().destroyCard();

            int cardsLeft = GameObject.Find("cards").transform.childCount;
            if (cardsLeft == 2)
            {
                Invoke("GameEnd", 1f);
            }
        } else
        {
            firstCard.GetComponent<card>().closeCard();
            secondCard.GetComponent<card>().closeCard();
        }

        firstCard = null;
        secondCard = null;
    }

    void GameEnd()
    {
        Time.timeScale = 0f;
        endText.SetActive(true);
        tryMatchCountText.GetComponent<Text>().text = tryMatchCount + "  ";
        tryMatchCountText.SetActive(true);

        if (PlayerPrefs.HasKey("bestScore") == false)
        {
            PlayerPrefs.SetFloat("bestScore", score);
        }
        else
        {
            if (PlayerPrefs.GetFloat("bestScore") < score)
            {
                PlayerPrefs.SetFloat("bestScore", score);
            }
        }
        float maxScore = PlayerPrefs.GetFloat("bestScore");
        maxScoreTxt.text = maxScore.ToString();

        if (isSuccess)
        {
            score += (int)time * 100;
            int tryCntScore = MAX_TRYCOUNT_SCORE - ((tryMatchCount - 8) * 50);
            if (tryCntScore > 0) score += tryCntScore;
        }
        setResultPanel();
        
    }

    public void retryGame()
    {
        SceneManager.LoadScene("MainScene");
    }
}
