#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//typedef struct people
//{
//	char name[10];
//	int age;
//	float height;
//}People;
//
//void main()
//{
//	People P2 = { "김지운", 28,168.5f };
//	printf("이름 = %s\n나이 = %d\n키 = %.2f\n", P2.name,P2.age,P2.height);
//}
 
//0~4사이의 숫자를 중복없이 랜덤으로 구하는 함수 반복적으로 사용을 할려면 name을 받을때와 age를 받을때의 범위가 달라져야함
int RandRange()//name을 매개변수로 받았을때 최소,최대가 0~4 이고 age를 매개변수로 받으면 최소,최대가 20~24
//이름 주소값에 갔을때 최소,최대 설정 / 나이 주소값에 갔을때 최소, 최대 설정 
//이름 , 나이 , 키 최소 최대가 바뀌는거
{
	
}
typedef struct people// 구조체 선언 , struct , 태그 
{
	char name[5][10] =//People라는 구조체의 이름에서 name자료형의 배열5개를 지정하여 배열값을 이름으로 고정함
	{
		"김지운",
		"김경찬",
		"박지환",
		"신정훈",
		"김재우"
	};
	int age[4];
	int height[31];
}People;//구조체의 이름

//People 구조체의 변수에 랜덤값을 생성하는 함수 이름,나이,키의 최소 최대값을 설정한뒤 랜덤으로 리턴받기
void RandPeople(People P/*,int age, int height*/)
{
	for (int i = 0; i < 5; i++)
	{
		printf("이름 : %s\n", &P.name[0]);//name랜덤 주소값에 접근
		printf("나이 : %d\n", &P.age[0]);//age랜덤 주소값에 접근
		printf("키 : %d\n", &P.height[0]);//height랜덤 주소값에 접근
	}
	
}

//void ShowPeople(People P)//People : 구조체이름 P : 변수
//{
//	printf("===============\n");
//	printf("1.이름 : %s\n", P.name);
//	printf("2.나이 : %d\n", P.age);
//	printf("3.키 : %.2f\n", P.height);
//	printf("===============\n");
//}

//void SetPeople(People* P)
//{
//
//}
void main()
{
	/*srand(time(0));*/
	People P;//사람을 만드는것을 해야됨  //내가만든것은 사람마다 나를 다르게 소개를 한것이다
	P[3].age = RandRange(20, 24);
	//RandPeople();

	/*People P_List[3];
	for (int i = 0; i < 3; i++)
	{
		printf("====%d번째 사람====\n", i+1);
		printf("이름입력 : ");
		scanf("%s", &P_List[i].name);
		printf("나이입력 : ");
		scanf("%d", &P_List[i].age);
		printf("키입력 : ");
		scanf("%f", &P_List[i].height);
		printf("===============\n");
	}
	for (int i = 0; i < 3; i++)
		ShowPeople(P_List[i]);*/
}
