#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#define WIDTH 10
#define HEIGHT 10
#define STAR 1
#define NULL 0
#define SPEED 500
#define LOTTO_NUM 6

void Draw(int Map[HEIGHT][WIDTH])
{
	system("cls");
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			if (Map[y][x] == STAR)//[y][x]��ǥ�� �ٱ׸��� �׸���
				printf("��");
			else
				printf("  ");//�׹ۿ� [x]�� ""�� �׸���
		}
		printf("\n");
	}
}

void Update(int Map[HEIGHT][WIDTH])
{
	for(int x = 0; x<WIDTH; x++)
	{
		if (Map[0][x]==STAR)
		{
			for (int y =0; y<HEIGHT; y++)
			{
				Map[y][x] = NULL;
				if (x == 0)//x�� 0�̸�
					Map[y][WIDTH - 1] = STAR;//�迭�� 0�϶�-1�̵Ǽ� ���迭�� ���� �ֱ����� �ʿ��� ���
				else
					Map[y][x - 1] = STAR;
			}
			break;
		}
	}
}

void main()
{
	//int OldClock = clock();
	//int Map[HEIGHT][WIDTH] = { NULL };//��[HEIGHT][WIDTH] = 0���� �ʱ�ȭ
	//for (int y = 0; y < HEIGHT; y++)
	//{
	//	Map[y][WIDTH - 1] = STAR;
	//}
	//Draw(Map);
	//while (1)
	//{
	//	if (clock()-OldClock>=SPEED)
	//	{
	//		Update(Map);
	//		Draw(Map);
	//		OldClock = clock();
	//	}
	//}

	/*int RNum;
	while (1)
	{
		system("cls");
		for (int i = 1; i <= 6; i++)
		{
			RNum = rand();
			printf("%d. %d\n", i , RNum );
		}
		system("pause");
	}*/

	//int RNum;
	//srand(time(NULL));//��ǻ�� �ð��� ����
	//while (1)
	//{
	//	system("cls");
	//	for (int i = 1; i <= 6; i++)
	//	{
	//		RNum = rand();
	//		printf("%d.%d\n", i,RNum);
	//	}
	//	system("pause");
	//}

	//int RNum;
	//while (1)
	//{
	//	system("cls");
	//	srand(time(NULL));//��� �ʱ�ȭ�Ѵ�?
	//	for (int i = 1; i <= 6; i++)
	//	{
	//		RNum = rand();
	//		printf("%d.%d\n", i, RNum);
	//	}
	//	system("pause");
	//}

	int RNum;
	int Lotto[LOTTO_NUM] = { 0 };
	srand(time(NULL));
	while (1)
	{
		system("cls");
		for (int i = 0; i < LOTTO_NUM; i++)
		{
			RNum = (rand() % 45) + 1;
			Lotto[i] = RNum;
		}
		for (int i = 0; i < LOTTO_NUM; i++)
			printf("%d,", Lotto[i]);
		printf("\n\b\b ");
		system("pause");
	}

}