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
//	printf("������ �Է��Ͻÿ� : ");
//	scanf_s("%d", &Num1);
//	for (int i = 1; i <= Num1; i++)
//		Sum += i;
//	printf("1~%d�� �����հ� : %d\n", Num1, Sum);
//}

//void AccrueSum(int Num1)
//{
//	int Sum = 0;
//	for (int i = 1; i <= Num1; i++)
//		Sum += i;
//	printf("1~%d�� �����հ�2 : %d\n", Num1,Sum);
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
//	printf("%d�� %d�� ����� %0.2f�Դϴ�.", Num1, Num2, avg);
//}
void main()
{
	/*int Num1, Num2;
	printf("���� �� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d", &Num1, &Num2);
	int Answer = Sum(Num1, Num2);
	printf("%d + %d = %d", Num1, Num2, Answer);*/

	/*int Num1, Sum = 0;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &Num1);
	for (int i = 1; i <= Num1; i++)
		Sum += i;
	printf("1~%d�� �����հ� : %d\n", Num1,Sum );*/

	/*AccrueSum();
	int Num1;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &Num1);
	AccrueSum(Num1);*/

	/*int Num1;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &Num1);
	printf("1~%d�� �����հ� : %d\n", Num1, AccrueSum(Num1));*/

	/*int Num1, Num2;
	float avg;
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d", &Num1,&Num2);
	avg = Avg(Num1, Num2);
	Show_avg(Num1, Num2, avg);*/
	int num1, num2;
	printf("�� ���� �Է� �Ͻÿ� : ");
	scanf_s("%d%d", &num1,&num2);
	printf("�� ū���� %d�̴�", VS(num1,num2));

}