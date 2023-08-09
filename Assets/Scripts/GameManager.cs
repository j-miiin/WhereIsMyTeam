using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public Text timeText;
    public Text maxScoreTxt;
    public GameObject card;
    public GameObject endText;
    public GameObject tryMatchCountText;
    public GameObject scoreText;
    public GameObject resultPanel;
    public GameObject countdownText;
    public GameObject nextStageBtn;

    // 변수 
    float time;     // 게임 플레이 시간 변수
    float countdownTime;    // 카운트다운 시간 변수
    int tryMatchCount;      // 카드 매칭 시도 횟수
    int score;      // 현재 스테이지 점수
    int curStage = 0;   // 현재 스테이지
    bool isSpeedUp;     // 시간이 5초 이하일 때 스피드업 상태(빨간 글씨 + 빠른 BGM)로 바꿨는지
    bool isSuccess;     // 현재 스테이지 클리어 여부
    
    // 상수
    const int MAX_TRYCOUNT_SCORE = 1000;       // 최소 매칭 횟수일 때의 최대 점수
    const float PLAY_TIME = 30f;        // Stage 1 플레이 시간 
    const float STAGE2_PLAY_TIME = 60f;     // Stae 2 플레이 시간
    const float COUNTDOWN_TIME = 3f;    // 첫 번째 카드 뒤집고 카운트다운 시간
    const string LOCKED_STAGE = "lockedStage";  // 해제한 스테이지 확인용 PlayerPrefs key 

    public static GameManager I;

    public GameObject firstCard;
    public GameObject secondCard;

    public AudioClip match;
    public AudioClip fail;
    public AudioSource audioSource;
    public Text matchText;

    [Header("르탄이 스프라이트 사이즈 기준 500x500")]
    public int rtanSpriteSize = 500;

    [Header("카드 이펙트 시간")]
    public float matchTextTime = 1f;

    public float closeDelayTime = 0.5f;
    public string unCorrectMessage = "실패";

    [Header("매칭 컬러")]
    public Color correctColor;
    public Color unCorrectColor;

    [Header("카드 경로")]
    public const string CARD_PATH = "cardImages";

    [Header("스폰 되는 기준 원 반지름")]
    public float radius = 5f;

    [Header("카드 세팅")]
    public float cardSettingTime = 1f;
    bool isSettings = true;

    
    private void Awake()
    {
        I = this;
    }

    // Start is called before the first frame update
    IEnumerator Start()
    {
        Time.timeScale = 1f;

        // 변수 초기화
        tryMatchCount = 0;
        time = PLAY_TIME;
        tryMatchCount = 0;
        isSuccess = false;
        score = 0;
        countdownTime = COUNTDOWN_TIME;
        curStage = stageSelectManager.SSM.getStage();

        // 현재 스테이지 1이면 PLAY_TIME(30f) 시간만큼, 스테이지 2면 STAGE2_PLAY_TIME(60f)로 설정
        time = (curStage == 1) ? PLAY_TIME : STAGE2_PLAY_TIME;
        timeText.text = time.ToString("N2");

        // stageManager에게 현재 스테이지 정보를 보내줌 -> stageManager가 스테이지에 따라 카드를 생성해줌
        stageManager.S.selectStage(curStage);

        //stageManager.S.selectStage(2);

        //int[] teams = { 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7 };
        //teams = teams.OrderBy(item => Random.Range(-1.0f, 1.0f)).ToArray();


        //// 폴더의 스프라이트 모두 부르기
        //Sprite[] sprites = Resources.LoadAll<Sprite>(CARD_PATH);

        //for (int i = 0; i < 16; i++)
        //{
        //    GameObject newCard = Instantiate(card);
        //    newCard.transform.parent = GameObject.Find("cards").transform;

        //    // 큰 원의 반지름 만큼의 랜덤 위치 값
        //    newCard.transform.position = Random.onUnitSphere * radius;
        //    float x = (i / 4) * 1.4f - 2.1f;
        //    float y = (i % 4) * 1.4f - 3.0f;

        //    StartCoroutine(CoMoveOffsetPosition(newCard.transform, new Vector3(x, y, 0)));

        //    Transform frontTrans = newCard.transform.Find("front");
        //    SpriteRenderer cardRenderer = frontTrans.GetComponent<SpriteRenderer>();

        //    cardRenderer.sprite = sprites[teams[i]];

        //    // 스케일 세팅

        //    Vector3 tempScale = frontTrans.transform.localScale;
        //    tempScale.x *= rtanSpriteSize / cardRenderer.sprite.rect.width;
        //    tempScale.y *= rtanSpriteSize / cardRenderer.sprite.rect.height;
        //    frontTrans.localScale = tempScale;
        //}

        yield return new WaitForSeconds(cardSettingTime);

        isSettings = false;
    }

    //IEnumerator CoMoveOffsetPosition(Transform cardTrans, Vector3 destination)
    //{
    //    Vector3 offsetPos = cardTrans.position;
    //    Vector3 targetPos = Vector3.zero;
    //    float ratio = 0f;
    //    while (ratio < cardSettingTime)
    //    {
    //        ratio += Time.deltaTime;
    //        targetPos = Vector3.Lerp(offsetPos, destination, ratio / cardSettingTime);

    //        // 원의 방정식 (x-a)^2 + (y-b)^2 = r^2
    //        float halfRadius = radius * 0.5f;
    //        // 반지름의 제곱
    //        float powRadius = Mathf.Pow(halfRadius, 2);
    //        // 현재 x위치가 목표의 왼쪽인지 오른쪽인지
    //        bool isDestinationXLow = targetPos.x > destination.x;
    //        // 오른쪽이라면 반지름 빼주기 왼쪽이라면 반지름 더해주기 (원의 센터 x좌표가 반지름만큼 차이나니까)
    //        float powXPos = isDestinationXLow ? Mathf.Pow(targetPos.x - destination.x - halfRadius, 2) 
    //            : Mathf.Pow(targetPos.x - destination.x + halfRadius, 2);
    //        // y좌표
    //        float yPos = Mathf.Sqrt(Mathf.Abs(powRadius - powXPos));

    //        // 현재 위치에서 목표지점까지의 선분(원의 지름) 위의 점 + 원 중심으로부터 y좌표
    //        targetPos.y += yPos;
    //        cardTrans.position = targetPos;

    //        yield return null;
    //    }
    //}

    void Update()
    {
        if (isSettings)
        {
            return;
        }

        if (time <= 0f) // 시간 초과 (실패)
        {
            Time.timeScale = 0f;
            setResultPanel();
        } else if (time <= 5f) {    // 5초 이하일 때 
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

        if (firstCard != null && secondCard == null)    // 첫 번째 카드만 선택했을 때 카운트다운 시작
        {
            countdownTime -= Time.deltaTime;
            countdownText.SetActive(true);
            countdownText.GetComponent<Text>().text = countdownTime.ToString("N0");

            if (countdownTime < 1f)
            {
                firstCard.GetComponent<card>().closeCard(0f);
                firstCard = null;
                audioSource.PlayOneShot(fail);
                countdownText.SetActive(false);
                countdownTime = COUNTDOWN_TIME;
            }
        } else
        {
            countdownTime = COUNTDOWN_TIME;
            countdownText.SetActive(false);
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
            Debug.Log(cardsLeft);
            if (cardsLeft == 2)
            {
                isSuccess = true;   // 스테이지 클리어
                Invoke("GameEnd", 1f);
            }
        }
        else
        {
            time -= 1f;     // 매칭 실패시 시간 1초 감소
            StartCoroutine(CoVerifyMatching(firstCardImage));
            audioSource.PlayOneShot(fail);
        
            firstCard.GetComponent<card>().closeCard(closeDelayTime);
            secondCard.GetComponent<card>().closeCard(closeDelayTime);
        }

        firstCard = null;
        secondCard = null;
        tryMatchCount++;    // 매칭 시도 횟수 카운트
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
        //maxScoreTxt.text = maxScore.ToString();

        if (isSuccess)  // 스테이지 클리어
        {
            // 점수 계산
            score += (int)time * 100;
            int tryCntScore = MAX_TRYCOUNT_SCORE - ((tryMatchCount - 8) * 50);
            if (tryCntScore > 0) score += tryCntScore;

            // PlayerPrefs에 해제된 스테이지 정보가 있고, 현재 스테이지가 새로 해제한 스테이지일 때 업데이트
            if (PlayerPrefs.HasKey(LOCKED_STAGE) && PlayerPrefs.GetInt(LOCKED_STAGE) < curStage)
            {
                PlayerPrefs.SetInt(LOCKED_STAGE, curStage);     
            }
        }
        setResultPanel();
    }

    public void retryGame()
    {
        if (curStage == 1)  // 스테이지 1
        {
            SceneManager.LoadScene("MainScene");
        }
        else    // 스테이지 2
        {
            SceneManager.LoadScene("Stage2Scene");
        } 
    }

    private void setResultPanel()
    {
        // 게임 종료시 나오는 결과 패널을 set
        resultPanel.SetActive(true);    // 패널 활성화
        endText.GetComponent<Text>().text = isSuccess ? "성공!" : "실패!";  // 성공 or 실패 텍스트 
        tryMatchCountText.GetComponent<Text>().text = tryMatchCount + " 회 시도";  // 매칭 시도 횟수 텍스트
        scoreText.GetComponent<Text>().text = "score " + score; // 점수 텍스트 

        stageManager.S.SetInActiveCards();

        // 스테이지를 클리어했고 현재 스테이지가 1이면 다음 스테이지 버튼 활성화
        if (isSuccess && curStage == 1)
        {
            nextStageBtn.SetActive(true);
        }
    }
}
