#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
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
 
//0~4사이의 숫자를 중복없이 랜덤으로 구하는 함수
int RandRange()//나이는 일의자리를 더하는것에 쓰일수 있다 그렇게 하면 나이를 배열로 안만들어도됨
{
	int min = 1;
	int max = 5;
	return rand() % (max - min + 1);


}
typedef struct people// 구조체 선언 , struct , 태그 
{
	char name[10];//People라는 구조체의 이름에서 name자료형의 배열5개를 지정하여 배열값을 이름으로 고정함
	int age;
	float height;
}People;//구조체의 이름

//People P_List[0]에 들어갈 이름
void Name()
{
	int num = 0;
	num = RandRange();
	int randnum[5];
	char name[5][10] = 
	{ 
		"김경찬",
		"김지운",
		"신정훈",
		"박지환",
		"김재우"
	};
	for (int i = 0; i < 5; i++)
	{
		name[num][10];
		randnum[i] = num;
		if (randnum[i] = num)
		{
			i--;
			continue;
		}
	}


}

void ShowPeople(People P)
{
	printf("이름 : %s\n", P.name);
}

//People 구조체의 변수에 랜덤값을 생성하는 함수 이름,나이,키의 최소 최대값을 설정한뒤 랜덤으로 리턴받기
//void RandPeople(People P/*,int age, int height*/)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("이름 : %s\n", &P.name[0]);//name랜덤 주소값에 접근
//		printf("나이 : %d\n", &P.age[0]);//age랜덤 주소값에 접근
//		printf("키 : %d\n", &P.height[0]);//height랜덤 주소값에 접근
//	}
//	
//}

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
	srand(time(0));
	/*P[3].age = RandRange(20, 24);*/
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
	People P_List[5];
	for (int i = 0; i < 5; i++)
	{
		ShowPeople(P_List[i]);
	}

}
