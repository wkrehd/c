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
		printf("\t1.게임시작\n");//case1 함수로
		printf("\t2.범위설정\n");//case2 함수로
		printf("\t3.종료\n");
		printf("입력 : ");
		scanf("%d", &select);
		system("cls");
		switch (select)
		{
		case 1://자주 쓰이기 때문에 함수로
			RNum = rand() % (Max - Min + 1) + Min;//1~100범위
			UpDown[UpDown_Num] = RNum;
			while (1)
			{
				for (int i = 0; i < 10; i++)
				{
					system("cls");
					printf("범위 : %d~%d\n", Min, Max);
					printf("제한 Turn : 10\n");
					printf("========%d턴=========\n", i + 1);
					printf("입력 : ");
					scanf("%d", &num);
					if (UpDown[UpDown_Num] == num)
					{
						system("cls");
						printf("정답!!  턴수 : %d\n", i);
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