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
//	People P2 = { "������", 28,168.5f };
//	printf("�̸� = %s\n���� = %d\nŰ = %.2f\n", P2.name,P2.age,P2.height);
//}

typedef struct people// ����ü ���� , struct , �±� 
{
	char name[10];
	int age;
	float height;
}People;//����ü�� �̸�

void ShowPeople(People P)//People : ����ü�̸� P : ����
{
	printf("===============\n");
	printf("1.�̸� : %s\n", P.name);
	printf("2.���� : %d\n", P.age);
	printf("3.Ű : %.2f\n", P.height);
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
		ShowPeople(P_List[i]);
}
