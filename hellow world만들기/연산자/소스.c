#include <stdio.h>
void main()
{
	/*int num;
	printf("1.정수를 입력하시오 : ");
	scanf_s("%d", &num);
	if (num % 3 == 0)
	{
		printf("%d는 3의배수 입니다.\n", num);
	}
	else
	{
		printf("%d는 3의배수가 아닙니다.\n", num);
	}

	int num1;
	printf("2.정수를 입력하시오 : ");
	scanf_s("%d", &num1);
	(num1 >= 0) ? printf("%d의 절대값은 %d입니다.\n", num1, num1)
		: printf("%d의 절대값은 %d입니다\n",num1, -num1 );
	
	int num2;
	printf("3.정수를 입력하시오 : ");
	scanf_s("%d", &num2);
	if (num2 % 2 == 0)
	{
		printf("%d는 짝수 입니다.\n", num2);
	}
	else
	{
		printf("%d는 홀수 입니다.\n", num2);
	}

	int num3, num4;
	printf("정수 두개를 입력하시오 : ");
	scanf_s("%d%d",&num3,&num4);
	if (num3 >= num4)
	{
		printf("Max = %d\n", num3);
	}
	else
	{
		printf("Max = %d\n", num4);
	}*/
	int num5, num6, num7;
	printf("5. 정수 세개를 입력하시오 : ");
	scanf_s("%d%d%d", &num5, &num6, &num7);
	int ret = (num5 + num6 + num7)/3 ;
	if (ret <= num5)
	{
		printf("Max = %d\n", num5);
	}
	(ret <= num6) ? printf("Max = %d\n", num6) : printf("Max = %d\n", num7);
}