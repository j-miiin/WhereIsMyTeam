using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class stageManager : MonoBehaviour
{
    public GameObject card;

    [Header("르탄이 스프라이트 사이즈 기준 500x500")]
    public int rtanSpriteSize = 500;

    [Header("카드 경로")]
    public const string CARD_PATH = "cardImages";

    [Header("스폰 되는 기준 원 반지름")]
    public float radius = 5f;

    [Header("카드 세팅")]
    public float cardSettingTime = 1f;

    [Header("스테이지 카드 사이즈")]
    public Dictionary<int, float> stageCardSizeDict = new Dictionary<int, float>();

    public static stageManager S;

    const int STAGE_1 = 16;
    const int STAGE_2 = 36;

    private void Awake()
    {
        S = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void selectStage(int stage)
    {
        if (stage == 1)
        {
            stageCardSizeDict.Add(stage, 1);
            int[] teams = new int[STAGE_1];
            for (int i = 0, j = 0; i < STAGE_1 - 1; i += 2, j++)
            {
                teams[i] = j;
                teams[i + 1] = j;
            }
            teams = teams.OrderBy(item => Random.Range(-1.0f, 1.0f)).ToArray();

            // 폴더의 스프라이트 모두 부르기
            Sprite[] sprites = Resources.LoadAll<Sprite>(CARD_PATH);

            for (int i = 0; i < 16; i++)
            {
                GameObject newCard = Instantiate(card);
                newCard.transform.parent = GameObject.Find("cards").transform;

                // 큰 원의 반지름 만큼의 랜덤 위치 값
                newCard.transform.position = Random.onUnitSphere * radius;
                float x = (i / 4) * 1.4f - 2.1f;
                float y = (i % 4) * 1.4f - 3.0f;

                StartCoroutine(CoMoveOffsetPosition(newCard.transform, new Vector3(x, y, 0)));

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
        else if (stage == 2)
        {
            stageCardSizeDict.Add(stage, 0.6f);
            int[] teams = new int[STAGE_2];
            for (int i = 0, j = 0; i < STAGE_2 - 1; i += 2, j++)
            {
                teams[i] = j;
                teams[i + 1] = j;
            }
            teams = teams.OrderBy(item => Random.Range(-1.0f, 1.0f)).ToArray();

            // 폴더의 스프라이트 모두 부르기
            Sprite[] sprites = Resources.LoadAll<Sprite>(CARD_PATH);

            for (int i = 0; i < STAGE_2; i++)
            {
                GameObject newCard = Instantiate(card);
                newCard.transform.parent = GameObject.Find("cards").transform;

                // 큰 원의 반지름 만큼의 랜덤 위치 값
                newCard.transform.position = Random.onUnitSphere * radius;
                float x = (i / 6) * 1.4f * 0.6f - 2.1f;
                float y = (i % 6) * 1.4f * 0.6f - 2.8f;

                newCard.transform.Find("back").transform.localScale *= stageCardSizeDict[stage];

                StartCoroutine(CoMoveOffsetPosition(newCard.transform, new Vector3(x, y, 0)));

                Transform frontTrans = newCard.transform.Find("front");
                SpriteRenderer cardRenderer = frontTrans.GetComponent<SpriteRenderer>();

                cardRenderer.sprite = sprites[teams[i]];

                // 스케일 세팅

                Vector3 tempScale = frontTrans.transform.localScale;
                tempScale.x *= (rtanSpriteSize / cardRenderer.sprite.rect.width) * 0.6f;
                tempScale.y *= (rtanSpriteSize / cardRenderer.sprite.rect.height) * 0.6f; 
                frontTrans.localScale = tempScale;
            }
        }

    }

    IEnumerator CoMoveOffsetPosition(Transform cardTrans, Vector3 destination)
    {
        Vector3 offsetPos = cardTrans.position;
        Vector3 targetPos = Vector3.zero;
        float ratio = 0f;
        while (ratio < cardSettingTime)
        {
            ratio += Time.deltaTime;
            targetPos = Vector3.Lerp(offsetPos, destination, ratio / cardSettingTime);

            // 원의 방정식 (x-a)^2 + (y-b)^2 = r^2
            float halfRadius = radius * 0.5f;
            // 반지름의 제곱
            float powRadius = Mathf.Pow(halfRadius, 2);
            // 현재 x위치가 목표의 왼쪽인지 오른쪽인지
            bool isDestinationXLow = targetPos.x > destination.x;
            // 오른쪽이라면 반지름 빼주기 왼쪽이라면 반지름 더해주기 (원의 센터 x좌표가 반지름만큼 차이나니까)
            float powXPos = isDestinationXLow ? Mathf.Pow(targetPos.x - destination.x - halfRadius, 2)
                : Mathf.Pow(targetPos.x - destination.x + halfRadius, 2);
            // y좌표
            float yPos = Mathf.Sqrt(Mathf.Abs(powRadius - powXPos));

            // 현재 위치에서 목표지점까지의 선분(원의 지름) 위의 점 + 원 중심으로부터 y좌표
            targetPos.y += yPos;
            cardTrans.position = targetPos;

            yield return null;
        }
    }
}
