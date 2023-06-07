#include<stdio.h>
#include<Windows.h>
#include<time.h>

#define SIZE 10
#define SEC 1000
#define MAX_COUNT 3


void Arr_1()
{
	int Arr[5];
	Arr[0] = 10;
	Arr[1] = 20;
	Arr[2] = 33;
	Arr[3] = 40;
	Arr[4] = 50;

	printf("%d %d %d %d %d\n", Arr[0], Arr[1], Arr[2], Arr[3], Arr[4]);
}
void Arr_2()
{
	int Arr[5];
	for (int i = 0; i < 5; i++)
		Arr[i] = i + 1;
	
	for (int i = 0; i < 5; i++)
		printf("%d\n", Arr[i]);
}
void Arr_3()
{
	int Arr[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 원소 값 : ", i+1);
		scanf("%d", &Arr[i]);
	}
	for (int i = 0; i < 5; i++)
		printf("%d\n", Arr[i]);
}
void Str_1()
{
	char str[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 원소 값 : ", i+1);
		scanf("%c", &str[i]);
		scanf("%*c");// \n을 무시하는 명령어
	}
	for (int i = 0; i < 5; i++)
		printf("%c ", str[i]);
}

void Name()
{
	char Name[SIZE];
	scanf("%s", &Name);

	for (int i = 0; i < SIZE; i++)
	{
		printf("%c",Name[i]);
	}
	printf("\n\n%s\n", Name);
}
void Arr_Max_Sum_Avg()
{
	float avg = 0;
	int max = -2147483648 , sum = 0;
	int Arr[10];

	for (int i = 0; i < 10; i++)
	{
		printf("%d번째 정수 입력 : ", i + 1);
		scanf("%d", &Arr[i]);
		sum += Arr[i];//Arr[i]의 모든값이 여기서 더해지는게 아닌가?
		if (Arr[i] > max)//최대값이 왜 마지막값으로만 출력되는지 모르겠음
			max = Arr[i];
		else if (max > Arr[i])
		{
			max = max;
		}
	
	}
	avg = sum / 10;
	printf("최대값 = %d\t총합 = %d\t평균 = %.3f", max,sum,avg);
	
	
}

void main()
{
	/*int Arr[5];
	Arr[0] = 1;
	Arr[1] = 2;
	Arr[2] = 3;
	Arr[3] = 4;
	Arr[4] = 5;

	printf("%d %d %d %d %d", Arr[0], Arr[1], Arr[2], Arr[3], Arr[4]);*/
		
	/*int Arr[5];
	for (int i = 0; i < 5; i++)
		Arr[i] = i + 1;

	for (int i = 0; i < 5; i++)
		printf("%d", Arr[i]);*/

	/*int Arr[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 원소 값 : ", i + 1);
		scanf_s("%d", &Arr[i]);
	}
	for (int i = 0; i < 5; i++)
		printf("%d", Arr[i]);*/

	//int Arr[10];
	//int Max= -2147483648, Sum=0;
	//float Avg = 0;
	///*int i = 0;*/
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("[%d]번째 정수 입력 : ", i+1);
	//	scanf_s("%d", &Arr[i]);
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	Sum += Arr[i];
	//	if (Arr[i] > Max)
	//	{
	//		Max = Arr[i];
	//	}
	//	else if (Arr[i] < Max)
	//	{
	//		Max = Arr[i];//i의값이 음수일때 0일때는 문제 없는대 i값이 1부터는 0이크다면 max=Arr[0]이 되야함
	//		Sum += Arr[i];
	//		Avg = Sum / 10;
	//	}
	//}
	//Avg = Sum / 10;

	//printf("최대값 = %d 총합 = %d 평균 = %.3f", Max, Sum, Avg);
	
	/*int arr[6][3] =
	{
		{1, 1, 0},
		{0, 1, 0},
		{0, 1, 0},
		{0, 0, 0},
		{0, 0, 1},
		{1, 1, 1},
	};*/

	//int arr[5][5] = { 0 };// 배열에 전부 0으로 초기화 한다
	//arr[2][2] = 1;//3째줄 3번째 칸에 1을 넣는다
	////for (int y = 0; y < 5; y++)
	////{
	////	for (int x = 0; x < 5; x++)//한개의 y줄의 x값들을 출력한다
	////		printf("%d", arr[y][x]);
	////	printf("\n");
	////}
	//arr[2][-1] = 1;
	//for (int y = 0; y < 5; y++)
	//{
	//	for (int x = 0; x < 5; x++)
	//		printf("%d", arr[y][x]);
	//	printf("\n");
	//}

	char buf[40];
	int age = 20;
	char Name[10] = "최정호";
	sprintf(buf, " % s님의 나이는 % d살 입니다.", Name, age);
	printf("%s",buf);

	/*printf("전화 거는중 ☏");
	for (int i = 0; i < 3; i++)
	{
		printf(".");
	}*/

	/*printf("전화 거는중☏");
	int OldClock = clock();
	int count = 1;
	while (count <= 3)
	{
		if (clock() - OldClock >= SEC)
		{
			count++;
			printf(".");
			OldClock = clock();
		}
	}*/

//printf("전화 거는중☏");
//int OldClock = clock();
//int count = 0; 
//while (1)
//{
//	if (clock() - OldClock >= SEC)
//	{
//		count++;
//		if (count > MAX_COUNT)
//		{
//			count = 0;
//			system("cls");
//			printf("전화 거는중☏");
//		}
//		else
//			printf(".");
//		OldClock = clock();
//	}
//}

//int Arr[5];
//Arr[0] = 10;
//Arr[1] = 20;
//Arr[2] = 33;
//Arr[3] = 40;
//Arr[4] = 50;
//
//printf("%d %d %d %d %d", Arr[0],Arr[1],Arr[2],Arr[3],Arr[4]);

//int Arr[5];
//for (int i = 0; i < 5; i++)
//	Arr[i] = i + 1;
//
//for (int i = 0; i < 5; i++)
//	printf("%d", Arr[i]);

//int Arr[5];
//for (int i = 0; i < 5; i++)
//{
//	printf("%d번째 원소 값 : ", i+1);
//	scanf("%d", &Arr[i]);
//}
//for (int i = 0; i < 5; i++)
//	printf("%d\n", Arr[i]);
//Arr_1();
//Arr_2();
//Arr_3();
//Str_1();
//Name();
Arr_Max_Sum_Avg();
}