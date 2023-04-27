#include<stdio.h>
#define PLAYER1 1//플레이어 뒤에 숫자를 붙인 이유?
#define PLAYER2 2
#define DRAW 3
int Vs(int P1, int P2)
{
	if (P1 > P2)
		return PLAYER1;
	else if (P1 < P2)
		return PLAYER2;
	else
		return DRAW;
}
//int Sum(int x, int y)
//{
//	int answer;
//	answer = x + y;
//	return answer;
//}
//void AccrueSum()
//{
//	int num1,  sum = 0;
//	printf("정수를 입력하시오 : ");
//	scanf_s("%d", &num1);
//	for (int i = 1; i <= num1; i++)
//		sum += i;
//	printf("1~%d의 누적합계 : %d\n", num1, sum);
//}
//void AccrueSum(int num1)
//{
//	int sum = 0;
//	for (int i = 1; 1 <= num1; i++)
//		sum += i;
//	printf("1~%d의 누적합계 : %d\n", num1,sum);
//}
//int accruesum(int num1)
//{
//	int sum = 0;
//	for (int i = 1; i <= num1; i++)
//		sum += i;
//	return sum;
//}
//float Avg(int num1, int num2) 
//{
//	float Avg;
//	Avg = (float)(num1 + num2) / 2.0f;
//	return Avg;
//}
//void show_avg(int num1, int num2, float avg)//출력x 아닌가요?
//{
//	printf("%d와 %d의 평균은 %0.2f입니다.", num1,num2,avg);
//}

void main()
{
	/*int num1;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num1);
	AccrueSum(num1);*/
	/*int num1, num2;
	printf("더할 두 정수를 입력하시오");
	scanf_s("%d%d", &num1, &num2);
	int answer = Sum(num1, num2);
	printf("%d+%d = %d", num1, num2, answer);*/
	
	/*int num1, sum = 0;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num1);
	for (int i = 1; i <= num1; i++)
		sum += i;
	printf("1~%d의 누적합계 : %d\n", num1 ,sum);*/
	/*AccrueSum();*/
	/*int num1;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num1);
	printf("1~%d의 누적합계 : %d\n", num1 ,accruesum(num1));*/

	/*int num1, num2;
	float avg;
	printf("두 정수를 입력하시오 : ");
	scanf_s("%d%d", &num1,&num2);
	avg = Avg(num1, num2);
	show_avg(num1, num2, avg);*/

	int Player1, Player2;
	printf("Player1의 전투력 : ");
	scanf_s("%d", &Player1);
	printf("Player2의 전투력 : ");
	scanf_s("%d", &Player2);
	switch (Vs(Player1, Player2))
	{
	case PLAYER1:
	{
		printf("Player1 승리!!");
		break;
	}
	case PLAYER2:
	{
	printf("Player2 승리!!");
	break;
	}
	case DRAW:
	{
		printf("~무승부~");
		break;
	}
	}
}