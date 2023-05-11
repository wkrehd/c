#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>
#define WIDTH 10
#define HEIGHT 10
#define MOVE_STAR 1
#define NULL 0
#define SPEED 300 
//printf("별을 보시겠습니까??"); kbhit,getch를 사용할수있음

void Draw(int Map[HEIGHT][WIDTH])
{
	system("cls");
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			if (Map[y][x] == MOVE_STAR)
				printf("☆");
			else
				printf("  ");
		}
		printf("\n");
	}
}

// directional : 움직이는 방향(left:1, right:-1)
// return : 갱신되어 현재 움진이는 방향
int  Update(int Map[HEIGHT][WIDTH], int Stop_y, int directional)//갱신하는것
{
	for (int x = 0; x < WIDTH; x++)
	{
		if (Map[0][x] == MOVE_STAR)
		{
			for (int y = 0; y <= Stop_y; y++)
			{
				Map[y][x] = NULL;//Map[y][x]를 null로 초기화한다
				if (x == 0)
					directional = -1;
				else if (x == WIDTH - 1)//WIDTH-1이 다음x값이 된다
					directional = 1;

				Map[y][x - directional] = MOVE_STAR;
			}
			break;
		}
	}
	return directional;
}


int Stop(int Map[HEIGHT][WIDTH], int y)
{
	if (kbhit())
	{
		char ch = getch();
		if (ch == 'd' || ch == 'D')
		{
			for (int x = 0; x < WIDTH; x++)
			{
				if (Map[y][x] == MOVE_STAR)
				{
					break;
				}
			}
			y--;
		}
	}
	return y;
}

void main()
{
	printf("별을 보시겠습니까??\n");
	if (kbhit())
		char ch = getch();
	system("pause");

	int OldClock = clock();
	int Stop_Y = HEIGHT - 1;
	int num = 0;
	int Map[HEIGHT][WIDTH] = { NULL };//맵의 모든부분을 null로 초기화를 했음
	for (int y = 0; y < HEIGHT; y++)//스타트 지점을 그려주는 계산식
	{
		Map[y][WIDTH - 1] = MOVE_STAR;
	}
	while (1)
	{
		Stop_Y = Stop(Map, Stop_Y);
		if (clock() - OldClock >= SPEED)
		{
			num = Update(Map, Stop_Y,num);

			Draw(Map);
			OldClock = clock();

		}
	}
}