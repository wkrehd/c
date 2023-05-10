#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>
#define WIDTH 10
#define HEIGHT 10
#define MOVE_STAR 1
#define STOP_STAR 2
#define NULL 0
#define SPEED 100

void Draw(int Map [HEIGHT][WIDTH])
{
	system("cls");
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x =0; x< WIDTH;x++)
		{
			if (Map[y][x] == MOVE_STAR)
				printf("☆");
			else if (Map[y][x] == STOP_STAR)
				printf("★");
			else
				printf("  ");
		}
		printf("\n");
	}
}

int Update(int Map[HEIGHT][WIDTH], int Stop_y, int num)
{
	for (int x = 0; x < WIDTH;x++)
	{
		if (Map[0][x]== MOVE_STAR)
		{
			for (int y =0; y<= Stop_y;y++)
			{
				
				Map[y][x] = NULL;//x가 0,9일때 방향을바꾼다=부호를 바꾼다
				if (x == 0)//num -1 || 1
					num = -1;
				else if( x == WIDTH-1)
					num = 1;

				Map[y][x - num] = MOVE_STAR;
			}
			break;
		}
	}
	return  num; 
}

int Stop(int Map[HEIGHT][WIDTH], int y)
{
	if (kbhit())
	{
		char ch = getch();
		if (ch == 'd' || ch=='D')
		{
			for (int x = 0; x< WIDTH; x++)
			{
				if (Map[y][x] == MOVE_STAR)
				{
					Map[y][x] = STOP_STAR;
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
		if(kbhit())
			char ch = getch();
		system("pause");


	int OldClock = clock();
	int Stop_Y = HEIGHT - 1;
	int num = 0;
	int Map[HEIGHT][WIDTH] = { NULL };
	for (int y = 0 ; y < HEIGHT; y++)
	{
		Map[y][WIDTH - 1] = MOVE_STAR;
	}
	while (1)
	{
		Stop_Y = Stop(Map, Stop_Y);//왜 이렇게 쓰였는가?
		if (clock() - OldClock >= SPEED)
		{
			num = Update(Map, Stop_Y, num);//
			Draw(Map);
			OldClock = clock();

		}
	}
}