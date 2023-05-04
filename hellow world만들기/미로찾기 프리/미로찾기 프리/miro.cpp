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
#define POTAL_MAX 18//Æ÷Å» °¹¼ö
#define ENTRY_START 10
#define EXIT_START 30
#define DOOR 50
#define DOOR_MAX 6 
#define SWITCH 60
#define SWITCH_MAX 6
#define ESCAPE 2
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define WIDTH 20
#define HEIGHT 20
int map[HEIGHT][WIDTH] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 2, 1, 0, 0, 0, 1, 0, 0, 0, 1, 10, 50, 0, 0, 0, 51, 11, 1, 0},
	{1, 0, 1, 12, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1},
	{1, 0, 1, 1, 1, 1, 1, 1, 1, 30, 1, 0, 0, 0, 31, 32, 0, 0, 0, 1},
	{1, 0, 0, 13, 1, 14, 0, 0, 33, 0, 1, 0, 0, 0, 34, 35, 0, 0, 0, 1},
	{1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1},
	{1, 0, 0, 36, 1, 0, 1, 0, 1, 37, 1, 0, 0, 0, 0, 0, 0, 1, 15, 1},
	{1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 1, 16, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 17, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 18, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 38, 0, 0, 52, 0, 70},
	{1, 1, 1, 1, 1, 0, 0, 0, 0, 39, 0, 40, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 19, 0, 0, 0, 0, 0, 0, 1, 41, 1, 1, 1, 42, 0, 0, 53, 0, 60, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 20, 1, 1, 1, 1, 1, 1, 21, 1},
	{1, 1, 1, 1, 1, 22, 61, 0, 54, 0, 1, 0, 1, 43, 1, 23, 0, 1, 1, 1},
	{1, 0, 0, 0, 1, 1, 1, 1, 1, 62, 1, 63, 1, 0, 1, 1, 44, 1, 64, 1},
	{1, 0, 0, 24, 1, 0, 0, 0, 1, 1, 1, 0, 55, 0, 1, 25, 0, 1, 0, 1},
	{1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 45, 1},
	{1, 0, 0, 0, 0, 0, 1, 46, 1, 47, 0, 0, 0, 65, 0, 0, 26, 1, 27, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1} };
int Entry_Potal[POTAL_MAX][2];
int Exit_Potal[POTAL_MAX][2];
int Door_Potal[DOOR_MAX][1];
int SWITCH_Potal[SWITCH_MAX][2];
int LastObjectIndex = NULL;

void Init()
{
		int Width = (WIDTH * 3) + 2;
		int Height = (HEIGHT * 3) + 3;
		char buf[256];
		sprintf(buf, "mode con: lines=%d cols=%d", Height, Width);//mode con?
		system(buf);
		for (int y = 0; y < HEIGHT; y++)
		{
			for (int x = 0; x < WIDTH; x++)
			{
				if(map[y][x] == CHARACTER)
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
				{
					Door_Potal[map[y][x] - 
				}
			}
		}
}