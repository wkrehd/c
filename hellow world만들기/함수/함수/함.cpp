#include<stdio.h>
#define PLAYER1 1
#define PLAYER2 2
#define DRAW 3
#define odd 1
#define even 2

int Max(int num1, int num2)
{	
	if (num1 > num2)
		return num1;

		return num2;
}
int Oddeven(int num)
{
	if (num % 2 == 0)
		return even;

		return odd;
}
int Abs(int num) //num4�� ���� ���縦 �Ѱ�
{
	/*if (num >= 0)
		return num;
	else
		return -num;*/
	if (num < 0)
		num = -num;

	return num;
}

int ReversNum(int num)
{
	int reversnum=0;
	while (num)
	{
		/*printf("%d", num % 10);*/
		reversnum *= 10;
		reversnum += num % 10;
		num /= 10;
	}

	return reversnum;
	/*while (x)
		
		x % 10 ,x /= 10;		*/
}
//int Vs(int P1, int P2)
//{
//	if (P1 > P2)
//		return PLAYER1;
//	else if (P1 < P2)
//		return PLAYER2;
//	else
//		return DRAW;
// 
//}
//int Sum(int x, int y)
//{
//	int answer;
//	answer = x + y;
//	return answer;
//}
//void AccrueSum()
//{
//	int num1,  sum = 0;
//	printf("������ �Է��Ͻÿ� : ");
//	scanf_s("%d", &num1);
//	for (int i = 1; i <= num1; i++)
//		sum += i;
//	printf("1~%d�� �����հ� : %d\n", num1, sum);
//}
//void AccrueSum(int num1)
//{
//	int sum = 0;
//	for (int i = 1; 1 <= num1; i++)
//		sum += i;
//	printf("1~%d�� �����հ� : %d\n", num1,sum);
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
//void show_avg(int num1, int num2, float avg)//���x �ƴѰ���?
//{
//	printf("%d�� %d�� ����� %0.2f�Դϴ�.", num1,num2,avg);
//}

void main()
{
	/*int num1;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num1);
	AccrueSum(num1);*/
	/*int num1, num2;
	printf("���� �� ������ �Է��Ͻÿ�");
	scanf_s("%d%d", &num1, &num2);
	int answer = Sum(num1, num2);
	printf("%d+%d = %d", num1, num2, answer);*/

	/*int num1, sum = 0;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num1);
	for (int i = 1; i <= num1; i++)
		sum += i;
	printf("1~%d�� �����հ� : %d\n", num1 ,sum);*/
	/*AccrueSum();*/
	/*int num1;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num1);
	printf("1~%d�� �����հ� : %d\n", num1 ,accruesum(num1));*/

	/*int num1, num2;
	float avg;
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d", &num1,&num2);
	avg = Avg(num1, num2);
	show_avg(num1, num2, avg);*/

	/*int Player1, Player2;
	printf("Player1�� ������ : ");
	scanf_s("%d", &Player1);
	printf("Player2�� ������ : ");
	scanf_s("%d", &Player2);
	switch (Vs(Player1, Player2))
	{
	case PLAYER1:
	{
		printf("Player1 �¸�!!");
		break;
	}
	case PLAYER2:
	{
	printf("Player2 �¸�!!");
	break;
	}
	case DRAW:
	{
		printf("~���º�~");
		break;
	}*/
	int num1, num2;
	printf("1. �� ���� �Է��Ͻÿ� : ");
	scanf_s("%d%d", &num1, &num2);
	printf("%d�� %d�� �� ū ���� %d�Դϴ�.\n", num1, num2, Max(num1, num2));


	int num3;
	printf("2. ���� �ϳ��� �Է��Ͻÿ� : ");
	scanf_s("%d",&num3);
	switch (Oddeven(num3))
	{
	case odd:
		printf("%d�� Ȧ�� �Դϴ�.\n",num3);
		break;
	case even:
			printf("%d�� ¦�� �Դϴ�.\n",num3);
			break;
	}
	
	int num4;
	printf("3. ���� �ϳ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &num4);
	printf("%d�� ���밪 : %d\n", num4, Abs(num4));

	int num5;
	printf("4. ���� �ϳ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &num5);
	printf("%d�� �Ųٷ� �� : %d\n", num5, ReversNum(num5));
}
