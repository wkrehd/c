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
//	People P2 = { "������", 28,168.5f };
//	printf("�̸� = %s\n���� = %d\nŰ = %.2f\n", P2.name,P2.age,P2.height);
//}
 
//0~4������ ���ڸ� �ߺ����� �������� ���ϴ� �Լ�
int RandRange()//���̴� �����ڸ��� ���ϴ°Ϳ� ���ϼ� �ִ� �׷��� �ϸ� ���̸� �迭�� �ȸ�����
{
	int min = 1;
	int max = 5;
	return rand() % (max - min + 1);


}
typedef struct people// ����ü ���� , struct , �±� 
{
	char name[10];//People��� ����ü�� �̸����� name�ڷ����� �迭5���� �����Ͽ� �迭���� �̸����� ������
	int age;
	float height;
}People;//����ü�� �̸�

//P_List[i]�� �̸��� ���� ���� �Լ�
void Name(People* P)
{
	int y = 0;
	y = RandRange();
	/*int randnum[5];*/
	char name[5][10] = 
	{ 
		"�����",
		"������",
		"������",
		"����ȯ",
		"�����"
	};
	
	strcpy_s(P->name, 10, name[y]);

	int age = 0;
	age = 20 + y;
	//for (int i = 0; i < 5; i++)
	//{
	//	randnum[i] = y;
	//	if (randnum[i]==y)//�ߺ����� ���� �ֱ�����
	//	{
	//		i--;
	//		continue;
	//	}
	//	name[randnum[i]][10];
	//}
	


}

void ShowPeople(People P)
{
	printf("�̸� : %s ���� : %d\n", P.name,P.age);
}

//People ����ü�� ������ �������� �����ϴ� �Լ� �̸�,����,Ű�� �ּ� �ִ밪�� �����ѵ� �������� ���Ϲޱ�
//void RandPeople(People P/*,int age, int height*/)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("�̸� : %s\n", &P.name[0]);//name���� �ּҰ��� ����
//		printf("���� : %d\n", &P.age[0]);//age���� �ּҰ��� ����
//		printf("Ű : %d\n", &P.height[0]);//height���� �ּҰ��� ����
//	}
//	
//}

//void ShowPeople(People P)//People : ����ü�̸� P : ����
//{
//	printf("===============\n");
//	printf("1.�̸� : %s\n", P.name);
//	printf("2.���� : %d\n", P.age);
//	printf("3.Ű : %.2f\n", P.height);
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
		printf("====%d��° ���====\n", i+1);
		printf("�̸��Է� : ");
		scanf("%s", &P_List[i].name);
		printf("�����Է� : ");
		scanf("%d", &P_List[i].age);
		printf("Ű�Է� : ");
		scanf("%f", &P_List[i].height);
		printf("===============\n");
	}
	for (int i = 0; i < 3; i++)
		ShowPeople(P_List[i]);*/
	People P_List[5];
	for (int i = 0; i < 5; i++)
	{
		Name(&P_List[i]);
		ShowPeople(P_List[i]);
	}

}
