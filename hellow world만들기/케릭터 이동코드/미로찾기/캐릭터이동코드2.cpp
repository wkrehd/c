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
#define POTAL_MAX 4//포탈 갯수
#define ENTRY_START 10
#define EXIT_START 20
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define WIDTH 10
#define HEIGHT 10
int map[HEIGHT][WIDTH] = {
  { 1,	1,	1,	1,	1,	1,	1,	1,	1,	1 },
  { 1,	0,	0,	0,	0,	0,	0,	0,	0,	1 },
  { 1,	0,	10,	0,	12,	0,	0,	11,	0,	1 },
  { 1,	23,	0,	0,	0,	0,	0,	0,	0,	1 },
  { 1,	0,	0,	0,	0,	2,	0,	0,	0,	1 },
  { 1,	22,	0,	0,	0,	0,	0,	13,	0,	1 },
  { 1,	0,	0,	0,	0,	0,	0,	0,	0,	1 },
  { 1,	0,	21,	0,	0,	0,	0,	20,	0,	1 },
  { 1,	0,	0,	0,	0,	0,	0,	0,	0,	1 },
  { 1,	1,	1,	1,	1,	1,	1,	1,	1,	1 } };
int character[2];
int Entry_Potal[POTAL_MAX][2];//포탈 배열의 값이 위치값
//{
//	{2, 2}, 0 = 10 - ENTRY_START(10)
//	{2, 7},	1 = 11 - ENTRY_START(10)
//	{2, 4},	2 = 12 - ENTRY_START(10)
//	{0, 0}	3 = 13 - ENTRY_START(10)
//}
int Exit_Potal[POTAL_MAX][2];
int LastObjectIndex = NULL;
void Init()//여기는 모르겠음
	{
	int Width = (WIDTH * 4) + 1;
	int Height = (HEIGHT * 2)+ 1;
	char buf[256];
	sprintf(buf,"mode con: lines=%d cols=%d", Height, Width);//mode con?
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
			else if (map[y][x] >= ENTRY_START && map[y][x] < ENTRY_START + POTAL_MAX)
			{
				int entryIndex = map[y][x] - ENTRY_START;
				Entry_Potal[entryIndex][X] = x;
				Entry_Potal[entryIndex][Y] = y;
			}
			else if (map[y][x] >= EXIT_START && map[y][x] < EXIT_START + POTAL_MAX)
			{
				Exit_Potal[map[y][x] - EXIT_START][X] = x;
				Exit_Potal[map[y][x] - EXIT_START][Y] = y;
			}
		}
	}
	}
void MapDraw()
{
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			if (map[y][x] == WALL)
				printf("▩");
			else if (map[y][x] == CHARACTER)
			{
				RED
					printf("♧");
				ORIGINAL
			}
			else if (map[y][x] >= ENTRY_START && map[y][x] < ENTRY_START + POTAL_MAX)
			{
				BLUE
					printf("◎");
				ORIGINAL
			}
			else if (map[y][x] >= EXIT_START && map[y][x] < EXIT_START + POTAL_MAX)
			{
				YELLOW
					printf("●");
				ORIGINAL
			}
			else if (map[y][x] == NULL)
				printf("  ");
		}
		printf("\n");
	}
}
void MoveCheck()
{
	int index = map[character[Y]][character[X]];//케릭터 위치 변수값
	if (index >= ENTRY_START && index < ENTRY_START + POTAL_MAX)
	{
		character[X] = Exit_Potal[index - ENTRY_START][X];//케릭터가 포탈에 들어왔을때를 계산? 왜 빼기를 하는가? 
		character[Y] = Exit_Potal[index - ENTRY_START][Y];//결과가 Exit_Potal[0~4]의 변수값을 구한는건가?
	}
}

void Move()
{
	char ch;
	ch = getch();
	if (ch == -32)
		ch = getch();
	system("cls");//콘솔화면 전체를 지우는것
	map[character[Y]][character[X]] = LastObjectIndex;
	switch (ch)
	{
	case LEFT:
		if (map[character[Y]][character[X] - 1] != WALL)
			character[X]--;
		break;
	case RIGHT:
		if (map[character[Y]][character[X] + 1] != WALL)
			character[X]++;
		break;
	case UP:
		if (map[character[Y] - 1][character[X]] != WALL)
			character[Y]--;
		break;
	case DOWN:
		if (map[character[Y] + 1][character[X]] != WALL)
			character[Y]++;
		break;
	}
	MoveCheck();
	LastObjectIndex = map[character[Y]][character[X]];
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