#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
#define UpDown_Num 1
int Min = 1;
int Max = 100;

void Title()
{
	int RNum;
	int select,num;
	int UpDown[UpDown_Num] = { 0 };
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
		case 1://���� ���̱� ������ �Լ���
			RNum = rand() % (Max - Min + 1) + Min;//1~100����
			UpDown[UpDown_Num] = RNum;
			while (1)
			{
				for (int i = 0; i < 10; i++)
				{
					system("cls");
					printf("���� : %d~%d\n", Min, Max);
					printf("���� Turn : 10\n");
					printf("========%d��=========\n", i + 1);
					printf("�Է� : ");
					scanf("%d", &num);
					if (UpDown[UpDown_Num] == num)
					{
						system("cls");
						printf("����!!  �ϼ� : %d\n", i);
						system("pause");
						break;
						
					}
					else if(UpDown[UpDown_Num] > num)
					{ 
						printf("up!!\n");
						system("pause");
						system("cls");
						continue;
						
					}
					else if (UpDown[UpDown_Num] < num)
					{
						printf("Down!!\n");
						system("pause");
						system("cls");
						continue;
						
					}
						
				}
				break;
			}
		}

	}
}
void main()
{
	srand(time(0));
	Title();
}