#include<stdio.h>

int VS(int x, int y)
{
	if (x > y)
		return x;
	else if (y > x)
		return y;
	else
		return	x=y;
	

}
int Oddeven(int x)
{
	if (x % 2 == 0)
		return 1;
	return 0;
}
int Absolute(int x)
{
	if (x >= 0)
		return x;
	return -x;
}
int Reverse(int num)
{
	int reverse = 0;
	while (num)
	{
		/*num %= 10;
		reverse = num;
		reverse *= 10;
		num /= 10;*/
		reverse *= 10;
		reverse += num % 10;
		num /= 10;
	}
	return reverse;
}
//int Sum(int x, int y)
//{
//	int Answer;
//	Answer = x + y;
//	return Answer;
//}
//void AccrueSum()
//{
//	int Num1, Sum = 0;
//	printf("정수를 입력하시오 : ");
//	scanf_s("%d", &Num1);
//	for (int i = 1; i <= Num1; i++)
//		Sum += i;
//	printf("1~%d의 누적합계 : %d\n", Num1, Sum);
//}

//void AccrueSum(int Num1)
//{
//	int Sum = 0;
//	for (int i = 1; i <= Num1; i++)
//		Sum += i;
//	printf("1~%d의 누적합계2 : %d\n", Num1,Sum);
//}
//int AccrueSum(int Num1)
//{
//	int Sum = 0;
//	for (int i = 1; i <= Num1; i++)
//		Sum += i;
//	return Sum;
//}
//float Avg(int Num1, int Num2)
//{
//	float avg;
//	avg = (float)(Num1 + Num2) / 2.0f;
//	return avg;
//}
//void Show_avg(int Num1, int Num2, float avg)
//{
//	printf("%d와 %d의 평균은 %0.2f입니다.", Num1, Num2, avg);
//}
void main()
{
	/*int Num1, Num2;
	printf("더할 두 정수를 입력하시오 : ");
	scanf_s("%d%d", &Num1, &Num2);
	int Answer = Sum(Num1, Num2);
	printf("%d + %d = %d", Num1, Num2, Answer);*/

	/*int Num1, Sum = 0;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &Num1);
	for (int i = 1; i <= Num1; i++)
		Sum += i;
	printf("1~%d의 누적합계 : %d\n", Num1,Sum );*/

	/*AccrueSum();
	int Num1;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &Num1);
	AccrueSum(Num1);*/

	/*int Num1;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &Num1);
	printf("1~%d의 누적합계 : %d\n", Num1, AccrueSum(Num1));*/

	/*int Num1, Num2;
	float avg;
	printf("두 정수를 입력하시오 : ");
	scanf_s("%d%d", &Num1,&Num2);
	avg = Avg(Num1, Num2);
	Show_avg(Num1, Num2, avg);*/
	/*int num1, num2;
	printf("두 수를 입력 하시오 : ");
	scanf_s("%d%d", &num1,&num2);
	printf("더 큰수는 %d이다\n", VS(num1,num2));*/

	/*int num3;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num3);
	printf("%d는 %d이고 1이면 짝수 0이면 홀수다", num3, Oddeven(num3));*/

	/*int num4;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num4);
	printf("%d의 절대값은 %d이다", num4 , Absolute(num4));*/

	int num5;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num5);
	printf("%d의 거꾸로 수 : %d",num5,Reverse(num5));
}