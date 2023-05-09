#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>
#define WIDTH 10
#define HEIGHT 10
#define MOVE_STAR 1
#define NULL 0
#define SPEED 300

void Draw(int Map[HEIGHT][WIDTH])
{
	system("cls");
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			if (Map[y][x] == MOVE_STAR)
				printf("��");
			else
				printf("  ");
		}
		printf("\n");
	}
}

void  Update(int Map[HEIGHT][WIDTH], int Stop_y)
{
	for (int x = 0; x < WIDTH; x++)
	{
		if (Map[0][x] == MOVE_STAR)
		{
			for (int y = 0; y <= Stop_y; y++)
			{
				Map[y][x] = NULL;
				if (x == 0)
					Map[y][WIDTH - 1] = MOVE_STAR;
				else
					Map[y][x - 1] = MOVE_STAR;
			}
			break;
		}
	}
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
	int OldClock = clock();
	int Stop_Y = HEIGHT - 1;
	int Map[HEIGHT][WIDTH] = { NULL };
	for (int y = 0; y < HEIGHT; y++)
	{
		Map[y][WIDTH - 1] = MOVE_STAR;
	}
	while (1)
	{
		Stop_Y = Stop(Map, Stop_Y);
		if (clock() - OldClock >= SPEED)
		{
			Update(Map, Stop_Y);
			Draw(Map);
			OldClock = clock();

		}
	}
}