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

	int Arr[10];
	int Max=0, Sum=0;
	float Avg = 0;
	/*int i = 0;*/
	for (int i = 0; i < 10; i++)
	{
		printf("[%d]번째 정수 입력 : ", i+1);
		scanf_s("%d", &Arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (Arr[i] > Max)
		{
			Max = Arr[i];
			Sum += Arr[i];
			Avg = Sum / 10;
		}
		else if (Arr[i] < Max)
		{
			Max = Arr[i];//i의값이 음수일때 0일때는 문제 없는대 i값이 1부터는 0이크다면 max=Arr[0]이 되야함
			Sum += Arr[i];
			Avg = Sum / 10;
		}
	}

	printf("최대값 = %d 총합 = %d 평균 = %.3f", Max, Sum, Avg);
	/*for(int i=0 ,int j= 0; i<10,j<9; j++)
	{
		if (Arr[i] > Arr[j + 1])
			continue;
		else
			i++;
	}
	Max = Arr[i];*/
		
	
}