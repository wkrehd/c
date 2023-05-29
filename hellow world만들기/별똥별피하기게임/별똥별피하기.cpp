#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

#define WALL 1
#define NULL 0
#define Y 0
#define X 1
#define LEFT 75
#define RIGHT 77
#define WIDTH 10
#define HEIGHT 20
#define CHARACTER 2
#define STAR 10//직전위치를 저장해줄곳
#define STAR_MAX 18
int map[HEIGHT][WIDTH] = {
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,2,0,0,0,1} };
int character[2];
int LastObjectIndex = NULL;

void MapDraw()
{
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			if (map[y][x] == WALL)
				printf("|");
			else if (map[y][x] == 2)
				printf("읏");
			else if (map[y][x] == 10)
				printf("☆");
			else if (map[y][x] == NULL)
				printf("  ");
		}
		printf("\n");
	}
}
void LevelSetting()
{

}

void Init()
{
	int level = 50;
	int Width = (WIDTH * 2) + 2;
	int Height = (HEIGHT)+3;
	char buf[256];
	sprintf(buf, "mode con: lines=%d cols=%d", Height, Width);
	system(buf);
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			if (map[y][x] == CHARACTER)
			{
				character[X] = x;
				character[Y] = y;
			}
		}
	}
//맵전체를 읽어서 아래에서 부터 별의 위치를 알게된 후에 별을 발견하면 아래로 떨어뜨린다 

		for (int x = 0; x < WIDTH; x++)//0,x위치에 별을 랜덤으로 그릴려고함
		{
			if (map[0][x] == 0)
			{
				int Num = rand() % level;
				if (Num >= 0 && Num < 25)
					printf("☆");
			}
		}
		
	
}
int MoveCheck();
{
	int index = map[character[Y]][character[X]];
	return 0;
}
int Move()
{
	char ch;
	ch = getch();
	if (ch == -32)
		ch = getch();
	system("cls");
	map[character[Y]][character[X]] = LastObjectIndex;
	switch (ch)
	{
	case LEFT:
	{
		int tile = map[character[Y]][character[X] - 1];
		if (WALL != tile)
			character[X]--;
	}
	break;

	case RIGHT:
	{
		int tile = map[character[Y]][character[X] + 1];
		if (WALL != tile)
			character[X]++;
	}
	break;
	}
	int isExit = MoveCheck();
	LastObjectIndex = map[character[Y]][character[X]];
	map[character[Y]][character[X]] = CHARACTER;

	return isExit;
}

void GameStart()
{
	Init();
	while (1)
	{
		MapDraw();
		if (Move())break;
	}
}

void Title()
{
	int select;
	while (1)
	{
		system("cls");
		printf("=====별똥별 피하기=====\n");
		printf("     1.게임 시작\n");
		printf("     2.난이도 조절\n");
		printf("     3.종료\n");
		printf("     입력 :");
		scanf("%d", &select);
		system("cls");
		switch (select)
		{
		case 1:
			GameStart();
			break;
		case 2:
			LevelSetting();
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