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
//#define SEC 2000 2��

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
int sec = 2000;//2��

//y=helght-1 �϶��� x������ 10�̸� ������ŭ count++
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

//x��ǥ�� ���ϴ� �Լ� 
int RandRange(int min, int max)//max=8 min=1 
{
	return rand() % (max - min + 1) + min;
}

//�� �׸���
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
				printf("��");
			else if (map[y][x] == 10)
				printf("��");
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
//	if (i >= 0 && i < num)// num% Ȯ���� ���� ����.
//	{
//		return 1;//RandRange(1, 7);
//	}
//	return 0; 
//}

//���̵�ȭ��, ���̵� ���� : �������� �ӵ�, ���� ������ �������� ����
//void LevelSetting()
//{
//	Init();
//
//	int OldClock = 0;//�� �ʱ�ȭ �ϴ°�?
//	OldClock = clock();
//	while (1)
//	{
//		if (clock() - OldClock >= SEC)//�������� �ӵ� ����
//		{
//			
//		}
//	}
//}

//select�� �Ű��� ���̵�����(���� �����߰�) �ϴ� �Լ�
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

//���� ���� Ÿ��Ʋ
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
		printf("=======���̵� ����=======\n");
		printf("1.%s\n", levels[0]);
		printf("2.%s\n", levels[1]);
		printf("3.%s\n", levels[2]);
		printf("4.%s\n", levels[3]);
		printf("5.Return\n");
		printf("�Է� : ");
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
//���� ����߸��� �Լ�
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
//���� �����ϴ� �Լ� �ּ�2���ִ�6�� �ߺ����� �ݺ��ϵ��� ��������
void Make_Star()
{
	/*int arr[6]; �迭�� ���ִ� ������ ��ü�� Ȯ���ϴ� ����
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
		for (int i = 0; i < difficulty; i++)//���°��� �迭��ü���� Ȯ���ؾ���
		{
			x = RandRange(1, 8);
			//if (Arr[i] == x)//���� �ߺ��̸� break
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
	//	if (Arr[i] == Arr[i - 1])//��� �迭��ü���� �ߺ��� ���� ������?
	//	{
	//		i--;
	//		continue;
	//	}

	//	map[0][Arr[i]] = 10;

	//}
	//int k = 2;
	//int x1, x2 = 0;//�迭�� ��������
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
	//	map[0][x1] = 10;//�ʿ� �������� �� 10�� ������ �����
	//	map[0][x2] = 10;
		
		
	
	//for (int x = 0; x < WIDTH; x++)//0,x��ġ�� ���� �������� �׸�������
	//{
	//	if (map[0][x] == 0)
	//	{
	//		//int Num = RandRange(min, max);//x��ǥ
	//		map[0][x] = 10;//�ʿ� �������� �� 10�� ������ �����
	//	}
	//}
}

//���� ��ǥ�� ����� �Լ�
void Init()
{
	int Width = (WIDTH * 2) + 2;
	int Height = (HEIGHT)+3;
	char buf[256];
	sprintf(buf, "mode con: lines=%d cols=%d", Height, Width);
	system(buf);
	
	//ĳ������ ��ġ ���� ĳ������ y���� �׻� HEIGHT�������ϱ�
	for (int x = 0; x < WIDTH; x++)
	{
		if (map[HEIGHT - 1][x] == CHARACTER)
		{
			character[X] = x;
			character[Y] = HEIGHT - 1;
			break;
		}
	}
	
	//���� �����ϴ��Լ� 
		//for (int x = 0; x < WIDTH; x++)//0,x��ġ�� ���� �������� �׸�������
		//{
		//	if (map[0][x] == 0)
		//	{
		//		int Num = RandRange(min, max);//x��ǥ
		//		map[0][Num] = 10;//�ʿ� �������� �� 10�� ������ �����
		//		
		//		/*int k = map[y][x]; // 10�� �� ������ ���� k�� ������
		//		map[y][x] = 0;// ���� �ʱ�ȭ��

		//		if (HEIGHT > y + 1) 
		//			map[y + 1][x] = k;// k(10�̵� ���� �迭)�� �ʱ�ȭ�� ����y+1���� �����Ѵ�
		//		else score++;*/
		//	}
		//}
	//���� ����߸��� �Լ�
//���� ���� ��ǥ�� y+1�� �ϱ����� ����
	//10�� �� ���� k�� �����ϰ� ���� �ʱ�ȭ ��Ų�ڿ� y+1���� = k �� �����Ѵ�
	//for (int y = 0; y < HEIGHT; y++)
	//{
	//	for (int x = 0; x < WIDTH; x++)
	//	{
	//		int k = map[y][x];
	//		map[y][x] = 0;
	//		if (HEIGHT > y + 1)
	//			map[y + 1][x] = k;
	//		else if (k == 10) count++;//Score();//Score�� ���ǰ�����ŭ(x��ǥ�� ����ŭ) �������Ѿߵ�
	//		
	//	}
	//}
		
		
	
}
////x��ǥ�� ���� ����ϴ� �����? y=height �϶� x�� 10�� ������ Ȯ���ؾ���
////y�� height+1�� �Ǵ� ������ x==10�ΰ��� üũ�ؼ� �� ����ŭ count++�� �ؾ���
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

//���� ĳ���� y+1,x ��ǥ�� ������ 
int GameOver()
{
	int index = map[character[Y] - 1][character[X]];
	if (index == 10)
	{
		printf(" ���� ����\n");
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
//ĳ���Ͱ� �¿�� �����̰� ���̸� �������̵��� �����
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
	int OldClock = 0;//�� �ʱ�ȭ �ϴ°�?
	OldClock = clock();
	int draw = 1;
	Init();
	while (1)
	{

		if (Move())
		{
			draw = 1;
		}

		if (clock() - OldClock >= sec)//�������� �ӵ� ����
		{
			draw = 1;
		//if (Move())break;//�׻� ��ǥ�� �������ǰ� 
			Score();
			if(GameOver())break;
		Drop_Star();
		Make_Star();

		OldClock = clock();
		}

		if (draw)
		{
			draw = 0;
			MapDraw();//���� �׷�����
		}
	}
}
//�޴�ȭ��
void Title()
{
	int select;
	while (1)
	{
		system("cls");
		printf("=====���˺� ���ϱ�=====\n");
		printf("     1.���� ����\n");
		printf("     2.���̵� ����\n");
		printf("     3.����\n");
		printf("     �Է� :");
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