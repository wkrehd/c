#include <stdio.h>
void main()
{
	int num;
	printf("1.정수를 입력하시오 : \n");
	scanf_s("%d", &num);
	if (num % 3 == 0)
	{
		printf("%d는 3의배수 입니다.", num);
	}
	else
	{
		printf("%d는 3의배수가 아닙니다.", num);
	}
}