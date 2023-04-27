#include<stdio.h>
int Sum(int x, int y)
{
	int answer;
	answer = x + y;
	return answer;
}
void AccrueSum()
{
	int num1,  sum = 0;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num1);
	for (int i = 1; i <= num1; i++)
		sum += i;
	printf("1~%d의 누적합계 : %d\n", num1, sum);
}
void AccrueSum(int num1)
{
	int sum = 0;
	for (int i = 1; 1 <= num1; i++)
		sum += i;
	printf("1~%d의 누적합계 : %d\n", num1,sum);
}

void main()
{
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
	AccrueSum();
	int num1;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num1);
	AccrueSum(num1);

}