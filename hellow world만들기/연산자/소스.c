#include <stdio.h>
void main()
{
	int num;
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
	}
	/*int num5, num6, num7;
	printf("5. 정수 세개를 입력하시오 : ");
	scanf_s("%d%d%d", &num5, &num6, &num7);
	if ((num5 > num6) && (num5 > num7))
	{
		printf("Max = %d\n", num5);
	}
	else if ((num6 > num5) && (num6 > num7))
	{
		printf("Max = %d\n", num6);
	}
	else
	{
		printf("Max = %d\n", num7);
		(ret <= num6) ? printf("Max = %d\n", num6) : printf("Max = %d\n", num7);
	}*/
	int num5, num6, num7;
	printf("5. 정수 세개를 입력하시오 : ");
	scanf_s("%d%d%d", &num5, &num6, &num7);
	int ret = (num5 + num6 + num7)/3 ;
	if (ret <= num5)
	{
		printf("Max = %d\n", num5);
	}
	else if (ret <= num6)
	{
		printf("Max = %d\n", num6);
	}
	else 
	{
		printf("Max = %d\n", num7);
	}
	int num8, num9;
	printf("6.정수 두개를 입력하시오 : ");
	scanf_s("%d%d", &num8, &num9);
	if ((num8 >= num9) && (num8 % 2 == 0))
	{
		printf("큰수는 %d이며 짝수입니다\n", num8);
	}
	else if ((num8 >= num9) )
	{
		printf("큰수는 %d이며 홀수입니다.\n", num8);
	}
	else if ((num8 <= num9) && (num9 % 2 == 0))
	{
		printf("큰수는 %d이며 짝수입니다.\n", num9);
	}
	else
	{
		printf("큰수는 %d이며 홀수입니다.\n", num9);
	}
	int num10, num11;
	printf("7. 정수 두개를 입력하시오 : ");
	scanf_s("%d%d", &num10,&num11);
	int sum = num10 + num11;
	if ((sum % 2 != 0) && (sum %  3 == 0))
	{
		printf("%d 와 %d의합 : %d\n홀수이며 3의배수", num10, num11, sum);
	}
	else
	{
		printf("해당사항이 없습니다.\n");
	}
}