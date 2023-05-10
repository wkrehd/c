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

int Update(int Map[HEIGHT][WIDTH], int Stop_y, int num)//움직이는것을 만드는 함수식 /이함수는 매개변수를 이용해서 어떠한 값을 반환하기위해 사용되는것
//함수를 먼저 만들어야 main을 만들수 있다 반환변수는 항상 1개?
{
	for (int x = 0; x < WIDTH;x++)//x가 0일때  x가10보다 작으면 x++
	{
		if (Map[0][x]== MOVE_STAR)//처음x값은 WIDTH=10 ?
		{
			for (int y =0; y<= Stop_y;y++)//y가 0일때 y가 <= Stop_y 면 y++
			{
				Map[y][x] = NULL;//Map[y][x]를 null로 초기화한다
				if (x == 0)
					num = -1;
				else if( x == WIDTH-1)//WIDTH-1이 다음x값이 된다
					num = 1;

				Map[y][x - num] = MOVE_STAR;
			}
			break;
		}
	}
	return  num; //왜 num을 반환하는거지?  움직이는것에 직접적인 영향이 num 이라서?
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