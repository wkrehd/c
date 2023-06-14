#include<stdio.h>

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

typedef struct people// 구조체 선언 , struct , 태그 
{
	char name[10];
	int age;
	float height;
}People;//구조체의 이름

void ShowPeople(People P)//People : 구조체이름 P : 변수
{
	printf("===============\n");
	printf("1.이름 : %s\n", P.name);
	printf("2.나이 : %d\n", P.age);
	printf("3.키 : %.2f\n", P.height);
	printf("===============\n");
}

void SetPeople(People* P)
{

}
void main()
{
	People P_List[3];
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
		ShowPeople(P_List[i]);
}
