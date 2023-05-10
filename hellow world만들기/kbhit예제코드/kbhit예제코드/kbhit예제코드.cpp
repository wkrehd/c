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
				printf("��");
			else if (Map[y][x] == STOP_STAR)
				printf("��");
			else
				printf("  ");
		}
		printf("\n");
	}
}

int Update(int Map[HEIGHT][WIDTH], int Stop_y, int num)//�����̴°��� ����� �Լ��� /���Լ��� �Ű������� �̿��ؼ� ��� ���� ��ȯ�ϱ����� ���Ǵ°�
//�Լ��� ���� ������ main�� ����� �ִ� ��ȯ������ �׻� 1��?
{
	for (int x = 0; x < WIDTH;x++)//x�� 0�϶�  x��10���� ������ x++
	{
		if (Map[0][x]== MOVE_STAR)//ó��x���� WIDTH=10 ?
		{
			for (int y =0; y<= Stop_y;y++)//y�� 0�϶� y�� <= Stop_y �� y++
			{
				Map[y][x] = NULL;//Map[y][x]�� null�� �ʱ�ȭ�Ѵ�
				if (x == 0)
					num = -1;
				else if( x == WIDTH-1)//WIDTH-1�� ����x���� �ȴ�
					num = 1;

				Map[y][x - num] = MOVE_STAR;
			}
			break;
		}
	}
	return  num; //�� num�� ��ȯ�ϴ°���?  �����̴°Ϳ� �������� ������ num �̶�?
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
	printf("���� ���ðڽ��ϱ�??\n");
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
		Stop_Y = Stop(Map, Stop_Y);//�� �̷��� �����°�?
		if (clock() - OldClock >= SPEED)
		{
			num = Update(Map, Stop_Y, num);//
			Draw(Map);
			OldClock = clock();

		}
	}
}