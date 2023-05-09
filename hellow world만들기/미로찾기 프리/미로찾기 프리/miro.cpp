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
#define GOLD SetConsoleTextAttribute( col,0x0006 );			
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
#define POTAL_MAX 18
#define ENTRY_START 10
#define EXIT_START 30
#define DOOR 50
#define DOOR_MAX 7 
#define SWITCH 60
#define SWITCH_MAX 7
#define ESCAPE 70
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define WIDTH 20
#define HEIGHT 20
int map[HEIGHT][WIDTH] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 2, 1, 0, 0, 0, 1, 0, 0, 0, 1, 22, 52, 0, 0, 0, 0, 54, 24, 1},
	{1, 0, 1, 12, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
	{1, 0, 1, 1, 1, 1, 1, 1, 1, 30, 1, 0, 0, 0, 45, 43, 0, 0, 0, 1},
	{1, 0, 0, 10, 1, 11, 0, 0, 33, 0, 1, 0, 0, 0, 36, 41, 0, 0, 0, 1},
	{1, 0, 1, 1, 1, 0, 1, 50, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1},
	{1, 0, 0, 31, 1, 0, 1, 0, 1, 46, 1, 0, 0, 0, 0, 0, 0, 1, 17, 1},
	{1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 1, 14, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 27, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 15, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 47, 0, 0, 56, 0, 70},
	{1, 1, 1, 1, 1, 0, 0, 0, 0, 37, 0, 34, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 18, 0, 0, 0, 0, 0, 0, 1, 40, 1, 1, 1, 42, 0, 0, 53, 0, 64, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 25, 1, 1, 1, 1, 1, 1, 23, 1},
	{1, 1, 1, 1, 1, 26, 66, 0, 55, 0, 1, 0, 1, 44, 1, 20, 0, 1, 1, 1},
	{1, 0, 0, 60, 1, 1, 1, 1, 1, 61, 1, 65, 1, 0, 1, 1, 39, 1, 62, 1},
	{1, 0, 0, 13, 1, 0, 0, 0, 1, 1, 1, 0, 51, 0, 1, 21, 0, 1, 0, 1},
	{1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 38, 1},
	{1, 0, 0, 0, 0, 0, 1, 32, 1, 35, 0, 0, 0, 63, 0, 0, 16, 1, 19, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1} };
int character[2];
int Entry_Potal[POTAL_MAX][2];
int Exit_Potal[POTAL_MAX][2];
int Door_Potal[DOOR_MAX][2];
int Switch_Potal[SWITCH_MAX][2];
int LastObjectIndex = NULL;
int eacape[2];

void Init()
{
	int Width = (WIDTH * 2) + 2;
	int Height = (HEIGHT) + 3;
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
			else if (map[y][x] >= ENTRY_START && map[y][x] < ENTRY_START + POTAL_MAX)
			{
				Entry_Potal[map[y][x] - ENTRY_START][X] = x;
				Entry_Potal[map[y][x] - ENTRY_START][Y] = y;
			}
			else if (map[y][x] >= EXIT_START && map[y][x] < EXIT_START + POTAL_MAX)
			{
				Exit_Potal[map[y][x] - EXIT_START][X] = x;
				Exit_Potal[map[y][x] - EXIT_START][Y] = y;
			}
			else if (map[y][x] >= DOOR && map[y][x] < DOOR + DOOR_MAX)
				//{0}
				//{0}
				//{0}
				//{0}
				//{0}
				//{0}
			{
				Door_Potal[map[y][x] - DOOR][X] = x;
				Door_Potal[map[y][x] - DOOR][Y] = y;
			}
			else if (map[y][x] >= SWITCH && map[y][x] < SWITCH + SWITCH_MAX)
			{
				Switch_Potal[map[y][x] - SWITCH][X] = x;
				Switch_Potal[map[y][x] - SWITCH][Y] = y;
			}
			else if (map[y][x] == ESCAPE)
			{
				eacape[X] = x;
				eacape[Y] = y;
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
						printf("♥");
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
				else if (map[y][x] >= DOOR && map[y][x] < DOOR + DOOR_MAX)
				{
					GOLD
						printf("▒");
					ORIGINAL
				}
				else if (map[y][x] >= SWITCH && map[y][x] < SWITCH + SWITCH_MAX)
				{
					PUPPLE
						printf("⊙");
					ORIGINAL
				}
				else if (map[y][x] == ESCAPE)
				{
					RED
					printf(">>");
					ORIGINAL
				}
				else if (map[y][x] == NULL)
					printf("  ");
			}
			printf("\n");
		}

		BLUE printf("입구 : ◎\t"); YELLOW printf("출구 : ●\n");
		GOLD printf("문 : ▒\t\t"); PLUM printf("스위치 : ⊙");
		ORIGINAL
}
int MoveCheck()
{
	int index = map[character[Y]][character[X]];
	if (index >= ENTRY_START && index < ENTRY_START + POTAL_MAX)
	{
		character[X] = Exit_Potal[index - ENTRY_START][X];
		character[Y] = Exit_Potal[index - ENTRY_START][Y];
	}
	/*else if (index >= SWITCH && index < SWITCH + SWITCH_MAX)
	{
		int x = Switch_Potal[index - SWITCH][X];
		int y = Switch_Potal[index - SWITCH][Y];
		map[y][x] = NULL;
	}*/
	else if (index >= SWITCH && index < SWITCH + SWITCH_MAX)
	{
		int x = Door_Potal[index - SWITCH][X];
		int y = Door_Potal[index - SWITCH][Y];
		map[y][x] = NULL;

		x = Switch_Potal[index - SWITCH][X];
		y = Switch_Potal[index - SWITCH][Y];
		map[y][x] = NULL;
	}

	if (index == ESCAPE)//탈출 성공 조건
	{
		return 1;
	}

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
		if (WALL != tile &&	!(tile >= DOOR && tile < DOOR + DOOR_MAX))//케릭터가 x-1이동했을때 벽이아니고 50<=tile<57 이 아니면 이동이 되야함
			character[X]--;
	}
		break;

	case RIGHT:
	{
		int tile = map[character[Y]][character[X] + 1];
		if (WALL != tile && !(tile >= DOOR && tile < DOOR + DOOR_MAX))
			character[X]++;
	}
		break;
	case UP:
	{
		int tile = map[character[Y] -1][character[X]];
		if (WALL != tile && !(tile >= DOOR && tile < DOOR + DOOR_MAX))
			character[Y]--;
	}
		//if (map[character[Y] - 1][character[X]] != WALL && DOOR)
			//character[Y]--;
		break;
	case DOWN:
	{
		int tile = map[character[Y] + 1][character[X]];
		if (WALL != tile && !(tile >= DOOR && tile < DOOR + DOOR_MAX))
			character[Y]++;
	}
		break;
	}
	
	int isExit = MoveCheck();
	LastObjectIndex = map[character[Y]][character[X]];
	map[character[Y]][character[X]] = CHARACTER;

	return isExit;
}
void main()
{
	Init();
	while (1)
	{
		MapDraw();
		if (Move())break;
	}
}