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
 


//0~4������ ������ �����ϴ� �Լ�
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

//����ü ���� �ٲ��ִ� �Լ�
void Swap(People*p1, People* p2)//ù��° p�� �ι�° p���� �Ű��� �ؾ���
{
	People p3;
	p3 = *p1;
	*p1 = *p2;
	*p2 = p3;
}

//P_List[i]�� �̸�,����,Ű ���� ���� �Լ�
void SetPeople(People* p)
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
	
	strcpy_s(p->name, 10, name[y]);//P-> �̰��� �����?
	y = RandRange();
	p->age = 20 + y;
	
	p->height = 150+ (rand()%(30-1)+1) + (float)rand() / RAND_MAX;//0~1������ �Ҽ��� 150+(29����)+�Ҽ���
	
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

void ShowPeople(People p)
{
	printf("�̸� : %s ���� : %d\tŰ : %.2f\n", p.name,p.age,p.height);
}

//���� Ű�� ������������ �����ϴ� �Լ�
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
	while (1)
	{
		People p_List[5];
		printf("���� �� ����\n");
		for (int i = 0; i < 5; i++)
		{
			SetPeople(&p_List[i]);//�ּ�����
			// &p_List[i] : 0x00001
			//void SetPeople(People* p = 0x00001)
			// p->name : p_List[i].name
			// p->name = "asd";
			// p_List[i].name = "asd";


			ShowPeople(p_List[i]);//�ּ�����?
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
