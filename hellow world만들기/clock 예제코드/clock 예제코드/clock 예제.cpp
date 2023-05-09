#include<stdio.h>
#include<Windows.h>
#include<time.h>
#define WIDTH 10
#define HEIGHT 10
#define STAR 1
#define NULL 0
#define SPEED 500

void Draw(int Map[HEIGHT][WIDTH])
{
	system("cls");
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			if (Map[y][x] == STAR)//[y][x]좌표에 ☆그림을 그린다
				printf("☆");
			else
				printf("  ");//그밖에 [x]에 ""을 그린다
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
				if (x == 0)//x가 0이면
					Map[y][WIDTH - 1] = STAR;//배열이 0일때-1이되서 끝배열에 별을 넣기위해 필요한 계산
				else
					Map[y][x - 1] = STAR;
			}
			break;
		}
	}
}

void main()
{
	int OldClock = clock();
	int Map[HEIGHT][WIDTH] = { NULL };//맵[HEIGHT][WIDTH] = 0으로 초기화
	for (int y = 0; y < HEIGHT; y++)
	{
		Map[y][WIDTH - 1] = STAR;
	}
	Draw(Map);
	while (1)
	{
		if (clock()-OldClock>=SPEED)
		{
			Update(Map);
			Draw(Map);
			OldClock = clock();
		}
	}
}