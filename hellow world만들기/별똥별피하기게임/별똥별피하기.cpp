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
#define HEIGHT 18
#define CHARACTER 2
#define STAR 10
//#define STAR_MAX 18
//#define SEC 2000 2초

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
//int star[STAR_MAX][8] = { 0 };
int min = 1;
int max = 8;
int count = 0;
int difficulty = 2;
int _select = 1;
int sec = 2000;//2초

//y=helght-1 일때의 x값들이 10이면 갯수만큼 count++
void Score()
{
	int y = HEIGHT - 1;
	for (int x = 0; x < WIDTH-1; x++)
	{
		int c = map[y][x];
		if (c == 10)
		{
			count++;
		}
	}
}

//x좌표를 구하는 함수 
int RandRange(int min, int max)//max=8 min=1 
{
	return rand() % (max - min + 1) + min;
}

//맵 그리기
void MapDraw()
{
	system("cls");
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
	printf("Score : %d", count);
}

//int ManyStar()
//{
//	int num = 30;
//	int i = rand() % 100;
//	if (i >= 0 && i < num)// num% 확률로 별을 생성.
//	{
//		return 1;//RandRange(1, 7);
//	}
//	return 0; 
//}

//난이도화면, 난이도 조절 : 떨어지는 속도, 별의 개수가 많아지는 조건
//void LevelSetting()
//{
//	Init();
//
//	int OldClock = 0;//왜 초기화 하는가?
//	OldClock = clock();
//	while (1)
//	{
//		if (clock() - OldClock >= SEC)//떨어지는 속도 조건
//		{
//			
//		}
//	}
//}

//select를 매개로 난이도조절(별의 갯수추가) 하는 함수
void ScopeSetting(int select)
{
	switch (select)
	{
	case 1:
		difficulty = 2;
		sec = 2000;
		break;
	case 2:
		difficulty = 3;
		sec = 2000;
		break;
	case 3:
		difficulty = 4;
		sec = 1500;
		break;
	case 4:
		difficulty = 6;
		sec = 2000;
		break;
	}
}

//범위 설정 타이틀
void ScopeSetting_Title()
{
	int select = 1;
	char levels[4][10] =
	{
		"Easy",
		"Normal",
		"Hard",
		"Hell"
	};

	/*char level1[10] = "Easy";
	char level2[10] = "Normal";
	char level3[10] = "Hard";
	char level4[10] = "Hell";*/
	/*char changelevel[10] = "Easy";*/
	int prevselect= select;
	while (1)
	{
		system("cls");
		printf("====%s====\n", levels[select - 1]);
		printf("=======난이도 조절=======\n");
		printf("1.%s\n", levels[0]);
		printf("2.%s\n", levels[1]);
		printf("3.%s\n", levels[2]);
		printf("4.%s\n", levels[3]);
		printf("5.Return\n");
		printf("입력 : ");
		scanf("%d", &select);
		system("cls");
		switch (select)
		{
		case 1:
			difficulty = 2;
			sec = 2000;
			break;
		case 2:
			difficulty = 3;
			sec = 2000;
			break;
		case 3:
			difficulty = 4;
			sec = 1500;
			break;
		case 4:
			difficulty = 6;
			sec = 700;
			break;
		case 5:
			return;
		default:
			select = prevselect;

			continue;
		}

		prevselect = select;
	}
}
//별을 떨어뜨리는 함수
void Drop_Star()
{
	for (int y = HEIGHT - 1; y >= 0; y--)
	{
		for (int x = 1; x < WIDTH - 1; x++)
		{
			int k = map[y][x];
			if (k == 10)
			{
				map[y][x] = 0;
				if (HEIGHT > y + 1)
					map[y + 1][x] = k;
				
			}
		}
	}
}
//별을 생성하는 함수 최소2번최대6번 중복없이 반복하도록 만들어야함
void Make_Star()
{
	/*int arr[6]; 배열에 들어가있는 값들을 전체를 확인하는 루프
	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j < 6; j++)
		{

		}
	}*/


	int Arr[8] = {0};
	/*int check = 0;*/
	int x = 0;

	while (1)
	{
		/*check = 0;*/
		for (int i = 0; i < difficulty; i++)//나온값을 배열전체에서 확인해야함
		{
			x = RandRange(1, 8);
			//if (Arr[i] == x)//값이 중복이면 break
			//{
			//	check = 1;
			//	break;
			//}
			Arr[i] = x;
			map[0][Arr[i]] = 10;
		}

		 /*if(check ==0)*/
			 break;
	}


	//for (int i = 0; i < 2; i++)
	//{
	//	Arr[i] = RandRange(1, 8);
	//	if (Arr[i] == Arr[i - 1])//어떻게 배열전체값이 중복값 없이 담을까?
	//	{
	//		i--;
	//		continue;
	//	}

	//	map[0][Arr[i]] = 10;

	//}
	//int k = 2;
	//int x1, x2 = 0;//배열로 만들어야함
	//for (int i=0; i<k; i++)
	//{
	//	if (i == 0)
	//	{
	//		x1 = RandRange(1, 8);
	//		continue;
	//	}
	//	else if (i == 1)
	//	{
	//		x2 = RandRange(1, 8);
	//	}

	//	if (x1 == x2)
	//	{
	//		i--;
	//		continue;
	//	}
	//	map[0][x1] = 10;//맵에 랜덤으로 들어간 10의 값들이 저장됨
	//	map[0][x2] = 10;
		
		
	
	//for (int x = 0; x < WIDTH; x++)//0,x위치에 별을 랜덤으로 그릴려고함
	//{
	//	if (map[0][x] == 0)
	//	{
	//		//int Num = RandRange(min, max);//x좌표
	//		map[0][x] = 10;//맵에 랜덤으로 들어간 10의 값들이 저장됨
	//	}
	//}
}

//맵의 좌표를 만드는 함수
void Init()
{
	int Width = (WIDTH * 2) + 2;
	int Height = (HEIGHT)+3;
	char buf[256];
	sprintf(buf, "mode con: lines=%d cols=%d", Height, Width);
	system(buf);
	
	//캐릭터의 위치 생성 캐릭터의 y값은 항상 HEIGHT에있으니깐
	for (int x = 0; x < WIDTH; x++)
	{
		if (map[HEIGHT - 1][x] == CHARACTER)
		{
			character[X] = x;
			character[Y] = HEIGHT - 1;
			break;
		}
	}
	
	//별을 생성하는함수 
		//for (int x = 0; x < WIDTH; x++)//0,x위치에 별을 랜덤으로 그릴려고함
		//{
		//	if (map[0][x] == 0)
		//	{
		//		int Num = RandRange(min, max);//x좌표
		//		map[0][Num] = 10;//맵에 랜덤으로 들어간 10의 값들이 저장됨
		//		
		//		/*int k = map[y][x]; // 10이 들어간 값들의 맵을 k에 저장함
		//		map[y][x] = 0;// 맵을 초기화함

		//		if (HEIGHT > y + 1) 
		//			map[y + 1][x] = k;// k(10이들어간 맵의 배열)을 초기화한 맵의y+1값에 대입한다
		//		else score++;*/
		//	}
		//}
	//별을 떨어뜨리는 함수
//맵의 별의 좌표를 y+1을 하기위한 과정
	//10이 들어간 맵을 k로 대입하고 맵을 초기화 시킨뒤에 y+1값에 = k 를 대입한다
	//for (int y = 0; y < HEIGHT; y++)
	//{
	//	for (int x = 0; x < WIDTH; x++)
	//	{
	//		int k = map[y][x];
	//		map[y][x] = 0;
	//		if (HEIGHT > y + 1)
	//			map[y + 1][x] = k;
	//		else if (k == 10) count++;//Score();//Score는 별의개수만큼(x좌표의 수만큼) 증가시켜야됨
	//		
	//	}
	//}
		
		
	
}
////x좌표의 수를 계산하는 방법은? y=height 일때 x가 10인 갯수를 확인해야함
////y가 height+1이 되는 순간에 x==10인것을 체크해서 그 수만큼 count++을 해야함
//int Score()
//{ 
//		for (int x = 0; x < WIDTH; x++)
//		{
//			if (map[HEIGHT - 1][x] == 10)
//			{
//				map[HEIGHT - 1][x] = 0;
//				count++;
//			}
//		}
//	return count;
//	//for (int y = HEIGHT, int x = 0; x < WIDTH; x++)
//	//{
//	//	if (x == 10)
//	//	{
//	//		count++;
//	//		/*printf("Score = :%d", i);*/
//	//	}
//	//}
//	//return count;
//}

//별이 캐릭터 y+1,x 좌표를 가질때 
int GameOver()
{
	int index = map[character[Y] - 1][character[X]];
	if (index == 10)
	{
		printf(" 게임 종료\n");
		system("pause");
		return 1;
	}
	return 0;
}

int MoveCheck()
{
	int index = map[character[Y]][character[X]];
	if (index == STAR)
	{
		return 1;
	}
	return 0;
}
//캐릭터가 좌우로 움직이고 벽이면 못움직이도록 만들기
int Move()
{
	if (_kbhit())
	{
		char ch;
		ch = getch();
		if (ch == -32)
			ch = getch();

		map[character[Y]][character[X]] = 0;
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

		//int gameover = GameOver();
		//LastObjectIndex = map[character[Y]][character[X]];
		map[character[Y]][character[X]] = CHARACTER;

		return 1;
	}
	/*int gameover = MoveCheck();
	return gameover;*/
	return 0;
}

void GameStart()
{
	int OldClock = 0;//왜 초기화 하는가?
	OldClock = clock();
	int draw = 1;
	Init();
	while (1)
	{

		if (Move())
		{
			draw = 1;
		}

		if (clock() - OldClock >= sec)//떨어지는 속도 조건
		{
			draw = 1;
		//if (Move())break;//항상 좌표가 먼저계산되고 
			Score();
			if(GameOver())break;
		Drop_Star();
		Make_Star();

		OldClock = clock();
		}

		if (draw)
		{
			draw = 0;
			MapDraw();//맵을 그려야함
		}
	}
}
//메뉴화면
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
			ScopeSetting_Title();
			break;
		case 3:
			return;

		}
	}
}
void main()
{
	/*srand(time(0));
	Title();*/
	/*Make_Star();*/
	GameStart();
}