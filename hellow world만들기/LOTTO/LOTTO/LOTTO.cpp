#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#define LOTTO_NUM 6
void Lotto()
{
	int RNum;
	int Lotto[LOTTO_NUM] = { 0 };

	srand(time(NULL));
	while (1)
	{
		system("cls");
		for (int i = 0; i < LOTTO_NUM; i++)
		{
			RNum = rand() % 45 + 1;//0~44까지 나오는 나머지수에서 +1을 하면 1~45까지 나오는 값이 됨
			Lotto[i] = RNum;
			//반복문으로 앞의값들의 전체를 비교하기
			for (int j=i-1;j>=0; j--)//Lotto[i]값을 Lotto[j]값과 비교하되 j가 i-1의값부터 0까지 반복한다
			{
				if (Lotto[i] == Lotto[j])
					i--;		
			}
		}
		for (int i = 0; i < LOTTO_NUM; i++)
			printf("%d.%d\n", i+1,Lotto[i]);
		system("pause");
	}

}

void main()
{
	Lotto();
}