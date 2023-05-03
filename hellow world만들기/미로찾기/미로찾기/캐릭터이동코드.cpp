#include<stdio.h>
#include<conio.h>
#include<Windows.h>

#define col GetStdHandle(STD_OUTPUT_HANDLE) 
#define BLACK SetConsoleTextAttribute( col,0x0000 );
#define DARK_BLUE SetConsoleTextAttribute( col,0x0001 );
#define GREEN SetConsoleTextAttribute( col,0x0002 );
#define BLUE_GREEN SetConsoleTextAttribute( col,0x0003 );
#define BLOOD SetConsoleTextAttribute( col,0x0004 );
#define PUPPLE SetConsoleTextAttribute( col,0x0005 );
#define GOLD SetConsoleTextAttribute( col,0x0006 );			//색상 지정
#define ORIGINAL SetConsoleTextAttribute( col,0x0007 );
#define GRAY SetConsoleTextAttribute( col,0x0008 );
#define BLUE SetConsoleTextAttribute( col,0x0009 );
#define HIGH_GREEN SetConsoleTextAttribute( col,0x000a );
#define SKY_BLUE SetConsoleTextAttribute( col,0x000b );
#define RED SetConsoleTextAttribute( col,0x000c );
#define PLUM SetConsoleTextAttribute( col,0x000d );
#define YELLOW SetConsoleTextAttribute( col,0x000e );

#define WALL 1
#define NULL 0
#define Y 0
#define X 1
#define CHARACTER 2
#define ENTRY_POTAL 10
#define EXIT_POTAL 20
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define WIDTH 10
#define HEIGHT 10
int map[HEIGHT][WIDTH] = {
	{1, 1, 1, 1 ,1 ,1 ,1 ,1 ,1 ,1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0 ,0 ,0, 0, 1},
	{1, 0, 0, 0, 0, 0 ,0 ,0, 0, 1},
	{1, 0, 0, 0, 0, 0 ,0 ,0, 0, 1},
	{1, 0, 0, 0, 0, 0 ,0 ,0, 0, 1},
	{1, 0, 2, 0, 0, 0, 0 ,0 ,0 ,1},
	{1, 0, 10, 0, 0, 0 ,0, 20, 0, 1},
	{1, 0, 0, 0, 0, 0 ,0 ,0, 0, 1},
	{1, 1, 1, 1 ,1 ,1 ,1 ,1 ,1 ,1}, };
int character[2];
int Entry_Pota[2];
int Exit_Pota[2];
int LastObjectlndex = NULL;
void Init()//생성하는것
{
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			if (map[y][x] == CHARACTER)
			{
				character[X] = x;
				character[Y] = y;
			}
			else if (map[y][x] == ENTRY_POTAL)
			{
				Entry_Pota[X] = x;
				Entry_Pota[Y] = y;
			}
			else if (map[y][x] == EXIT_POTAL)
			{
				Exit_Pota[X] = x;
				Exit_Pota[Y] = y;
			}
		}
	}
}
void MapDraw()//맵을그리는것
{
	system("cls");//콘솔화면 전체를 지우는것
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			if (map[y][x] == WALL)//맵전체를 벽으로 채움
				printf("▩");
			else if (map[y][x] == CHARACTER)//케릭터위치는 ♧ 지정
			{
				RED
					printf("♧");
				ORIGINAL
			}
			else if (map[y][x] == ENTRY_POTAL)//포탈입구위치를 ◎ 바꿈
			{
				BLUE
					printf("◎");
				ORIGINAL
			}
			else if (map[y][x] == EXIT_POTAL)//포탈탈출위치를 ● 바꿈
			{
				YELLOW
					printf("●");
				ORIGINAL
			}
			else if (map[y][x] == NULL)//NULL에는 빈공간을 채우겠다
				printf("  ");
		}
		printf("\n");
	}
}
void MoveCheck()
{
	if (map[character[Y]][character[X]] == ENTRY_POTAL)
	{
		character[X] = Exit_Potal[X];
		character[Y] = Exit_Potal[Y];
	} 
}
void Move()
{
	char ch;
	ch = getch();
	if (ch == -32)
		ch == getch();
	map[character[Y]][character[X]] = LastObjectlndex;
	switch (ch)
	{
	case LEFT : 
		if (map[character[Y]][character[X] - 1] != WALL) 
			character[X]--;
		break;
	case RIGHT:
		if (map[character[Y]][character[X] + 1] != WALL)
			character[X]++;
		break;
	case UP:
		if (map[character[Y]-1][character[X]] != WALL)
			character[Y]--;
		break;
	case DOWN:
		if (map[character[Y+1]][character[X]] != WALL)
			character[Y]++;
		break;
	}
	MoveCheck();
	LastObjectlndex = map[character[Y]][character[X]];
	map[character[Y]][character[X]] = CHARACTER;
}
void main()
{
	Init();
	while (1)
	{
		MapDraw();
		Move();
	}
}




