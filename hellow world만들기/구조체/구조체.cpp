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
 


//0~4사이의 범위를 지정하는 함수
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

//구조체 값을 바꿔주는 함수
void Swap(People*p1, People* p2)//첫번째 p값 두번째 p값을 매개로 해야함
{
	People p3;
	p3 = *p1;
	*p1 = *p2;
	*p2 = p3;
}

//P_List[i]의 이름,나이,키 값을 넣은 함수
void SetPeople(People* p)
{
	int y = 0;
	y = RandRange();
	/*int randnum[5];*/
	char name[5][10] = 
	{ 
		"김경찬",
		"김지운",
		"신정훈",
		"박지환",
		"김재우"
	};
	
	strcpy_s(p->name, 10, name[y]);//P-> 이것의 기능은?
	y = RandRange();
	p->age = 20 + y;
	
	p->height = 150+ (rand()%(30-1)+1) + (float)rand() / RAND_MAX;//0~1사이의 소수값 150+(29범위)+소수값
	
	//for (int i = 0; i < 5; i++)
	//{
	//	randnum[i] = y;
	//	if (randnum[i]==y)//중복없는 값을 넣기위해
	//	{
	//		i--;
	//		continue;
	//	}
	//	name[randnum[i]][10];
	//}
	


}

void ShowPeople(People p)
{
	printf("이름 : %s 나이 : %d\t키 : %.2f\n", p.name,p.age,p.height);
}

//나이 키를 내림차순으로 정렬하는 함수
void DescendingOrder(People* p)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			if (p[i].age == p[j].age)
				{
					if (p[i].height<p[j].height)
					{
						Swap(&p[i], &p[j]);
					}
				}
			else if (p[i].age < p[j].age)
			{
				Swap(&p[i], &p[j]);
			}
			
		}
	}
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
	while (1)
	{
		People p_List[5];
		printf("정렬 전 정보\n");
		for (int i = 0; i < 5; i++)
		{
			SetPeople(&p_List[i]);//주소접근
			// &p_List[i] : 0x00001
			//void SetPeople(People* p = 0x00001)
			// p->name : p_List[i].name
			// p->name = "asd";
			// p_List[i].name = "asd";


			ShowPeople(p_List[i]);//주소접근?
		}
		printf("========================\n\n");
		system("pause");

		DescendingOrder(p_List);
		for (int i = 0; i < 5; i++)
		{
			ShowPeople(p_List[i]);
		}
		system("pause");
		system("cls");
	}
	

}
