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
//	People P2 = { "������", 28,168.5f };
//	printf("�̸� = %s\n���� = %d\nŰ = %.2f\n", P2.name,P2.age,P2.height);
//}
 
//0~4������ ���ڸ� �ߺ����� �������� ���ϴ� �Լ� �ݺ������� ����� �ҷ��� name�� �������� age�� �������� ������ �޶�������
int RandRange()//name�� �Ű������� �޾����� �ּ�,�ִ밡 0~4 �̰� age�� �Ű������� ������ �ּ�,�ִ밡 20~24
//�̸� �ּҰ��� ������ �ּ�,�ִ� ���� / ���� �ּҰ��� ������ �ּ�, �ִ� ���� 
//�̸� , ���� , Ű �ּ� �ִ밡 �ٲ�°�
{
	
}
typedef struct people// ����ü ���� , struct , �±� 
{
	char name[5][10] =//People��� ����ü�� �̸����� name�ڷ����� �迭5���� �����Ͽ� �迭���� �̸����� ������
	{
		"������",
		"�����",
		"����ȯ",
		"������",
		"�����"
	};
	int age[4];
	int height[31];
}People;//����ü�� �̸�

//People ����ü�� ������ �������� �����ϴ� �Լ� �̸�,����,Ű�� �ּ� �ִ밪�� �����ѵ� �������� ���Ϲޱ�
void RandPeople(People P/*,int age, int height*/)
{
	for (int i = 0; i < 5; i++)
	{
		printf("�̸� : %s\n", &P.name[0]);//name���� �ּҰ��� ����
		printf("���� : %d\n", &P.age[0]);//age���� �ּҰ��� ����
		printf("Ű : %d\n", &P.height[0]);//height���� �ּҰ��� ����
	}
	
}

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
	/*srand(time(0));*/
	People P;//����� ����°��� �ؾߵ�  //����������� ������� ���� �ٸ��� �Ұ��� �Ѱ��̴�
	P[3].age = RandRange(20, 24);
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
}
