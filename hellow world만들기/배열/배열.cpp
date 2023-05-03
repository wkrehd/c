#include<stdio.h>

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
	//	//else if (Arr[i] < Max)
	//	//{
	//	//	Max = Arr[i];//i의값이 음수일때 0일때는 문제 없는대 i값이 1부터는 0이크다면 max=Arr[0]이 되야함
	//	//	Sum += Arr[i];
	//	//	Avg = Sum / 10;
	//	//}
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
}