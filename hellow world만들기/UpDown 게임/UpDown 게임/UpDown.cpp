#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
int min = 1;
int max = 100;
int turn = 10;

// �ּ�(min)���� �ִ�(max) ������ ���� �����ϰ� ���Ѵ�.
int RandRange(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

void ScopeSetting()
{
	int select, min1, max1,turn1;
	while(1)
	{ 
	system("cls");
	printf("=======���� ����=======\n");
	printf(" 1.�ִ�,�ּҹ��� ����\n");//�Լ���
	printf(" 2.�ִ� Turn�� ����\n");//�Լ���
	printf(" 3.���ư���\n");
	printf("�Է� : ");
	scanf("%d", &select);
	system("cls");
		switch (select)
		{
		case 1:

			min1 = min;
			printf("<���� : %d>�ּ� �� ���� : ", min);
			scanf("%d", &min);
			max1 = max;
			printf("<���� : %d>�ִ� �� ���� : ", max);//�ִ밪�� �ּҰ����� Ŀ����
			scanf("%d", &max);
			if (max <= min)
			{
				printf("���� : �ּҰ��� �ִ밪 ���� Ů�ϴ� �ٽ� �Է��ϼ���.\n");
				system("pause");
				min = min1;
				max = max1;
				system("cls");//case1�� �ٽ� �����ؾ���
			}

			break;
		case 2:
			turn1 = turn;
			printf("<���� : %d>�ִ� Turn �� ���� : ", turn);
			scanf("%d", &turn);
			if (turn<=0)
			{
				printf("���� : �ִ� �ϼ��� 0���� �۰ų� �����ϴ� �ٽ��Է��ϼ���.\n");
				system("pause");
				turn = turn1;
				system("cls");
			}
			break;
		case 3:
			return;
		}
	}
}

void GameStart()
{
	int num, rnum;
	int updown = RandRange(min, max);
	//rnum = rand() % (max - min + 1) + min;//�Լ��� �ٲٱ�
	//updown = rnum;
		for (int i = 0; i < turn; i++)
		{
			system("cls");
			printf("���� : %d~%d\n", min, max);
			printf("���� Turn : %d\n", turn);
			printf("========%d��=========\n", i + 1);
			printf("�Է� : ");
			scanf("%d", &num);
			if (updown == num)
			{
				system("cls");
				printf("����!!  �ϼ� : %d\n", i);
				system("pause");
				break;

			}
			else if (updown > num)
			{
				printf("up!!\n");
				system("pause");
				system("cls");
				continue;

			}
			else if (updown < num)
			{
				printf("Down!!\n");
				system("pause");
				system("cls");
				continue;

			}
		}		
}

void Title()
{
	int select;
	while (1)
	{
		system("cls");
		printf("=========UpDown=========\n");
		printf("\t1.���ӽ���\n");//case1 �Լ���
		printf("\t2.��������\n");//case2 �Լ���
		printf("\t3.����\n");
		printf("�Է� : ");
		scanf("%d", &select);
		system("cls");
		switch (select)
		{
		case 1:
			GameStart();
			break;
		case 2:
			ScopeSetting();
			break;
		case 3:
			return;
		}

	}
}
void main()
{
	srand(time(0));
	Title();
}