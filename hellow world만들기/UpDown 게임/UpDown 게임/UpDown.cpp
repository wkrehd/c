#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
int min = 1;
int max = 100;
int turn = 10;

//턴 범위 설정
void TurnSetting()
{
	while (1)
	{
		int turn1;
		turn1 = turn;
		printf("<현재 : %d>최대 Turn 값 변경 : ", turn);
		scanf("%d", &turn);
		if (turn <= 0)
		{
			printf("오류 : 최대 턴수가 0보다 작거나 같습니다 다시입력하세요.\n");
			system("pause");
			turn = turn1;
			system("cls");
			continue;
		}
		break;
	}

}

//min,max범위 설정
void MinMaxSetting()
{
	while (1)
	{
		int min1, max1;
		min1 = min;
		printf("<현재 : %d>최소 값 변경 : ", min);
		scanf("%d", &min);
		max1 = max;
		printf("<현재 : %d>최대 값 변경 : ", max);//최대값이 최소값보다 커야함
		scanf("%d", &max);
		if (max <= min)
		{
			printf("오류 : 최소값이 최대값 보다 큽니다 다시 입력하세요.\n");
			system("pause");
			min = min1;
			max = max1;
			system("cls");//case1을 다시 실행해야함
			continue;
		}
		break;
	}

}
// 최소(min)에서 최대(max) 범위의 값을 랜덤하게 구한다.
int RandRange(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

//범위 설정 타이틀
void ScopeSetting()
{
	int select;
	while(1)
	{ 
	system("cls");
	printf("=======게임 설정=======\n");
	printf(" 1.최대,최소범위 설정\n");//함수로
	printf(" 2.최대 Turn수 설정\n");//함수로
	printf(" 3.돌아가기\n");
	printf("입력 : ");
	scanf("%d", &select);
	system("cls");
		switch (select)
		{
		case 1:
			MinMaxSetting();
			break;
		case 2:
			TurnSetting();
			break;
		case 3:
			return;
		}
	}
}
//게임 시작시 사용되는 함수
void GameStart()
{
	int num, rnum;
	int updown = RandRange(min, max);
	//rnum = rand() % (max - min + 1) + min;//함수로 바꾸기
	//updown = rnum;
		for (int i = 0; i < turn; i++)
		{
			system("cls");
			printf("범위 : %d~%d\n", min, max);
			printf("제한 Turn : %d\n", turn);
			printf("========%d턴=========\n", i + 1);
			printf("입력 : ");
			scanf("%d", &num);
			if (updown == num)
			{
				system("cls");
				printf("정답!!  턴수 : %d\n", i+1);
				system("pause");
				break;

			}
			else if (updown > num)
			{
				printf("up!!\n");
				system("pause");
				system("cls");
				continue;

			}
			else if (updown < num)
			{
				printf("Down!!\n");
				system("pause");
				system("cls");
				continue;

			}
		}		
}
//게임 첫 화면
void Title()
{
	int select;
	while (1)
	{
		system("cls");
		printf("=========UpDown=========\n");
		printf("\t1.게임시작\n");//case1 함수로
		printf("\t2.범위설정\n");//case2 함수로
		printf("\t3.종료\n");
		printf("입력 : ");
		scanf("%d", &select);
		system("cls");
		switch (select)
		{
		case 1:
			GameStart();
			break;
		case 2:
			ScopeSetting();
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