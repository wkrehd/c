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
	int num1, num2;
	printf("두 수를 입력 하시오 : ");
	scanf_s("%d%d", &num1,&num2);
	printf("더 큰수는 %d이다", VS(num1,num2));

}