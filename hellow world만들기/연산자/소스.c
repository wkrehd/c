#include <stdio.h>
void main()
{
	/*int num;
	printf("1.������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);
	if (num % 3 == 0)
	{
		printf("%d�� 3�ǹ�� �Դϴ�.\n", num);
	}
	else
	{
		printf("%d�� 3�ǹ���� �ƴմϴ�.\n", num);
	}

	int num1;
	printf("2.������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num1);
	(num1 >= 0) ? printf("%d�� ���밪�� %d�Դϴ�.\n", num1, num1)
		: printf("%d�� ���밪�� %d�Դϴ�\n",num1, -num1 );
	
	int num2;
	printf("3.������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num2);
	if (num2 % 2 == 0)
	{
		printf("%d�� ¦�� �Դϴ�.\n", num2);
	}
	else
	{
		printf("%d�� Ȧ�� �Դϴ�.\n", num2);
	}

	int num3, num4;
	printf("���� �ΰ��� �Է��Ͻÿ� : ");
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
	printf("5. ���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d%d", &num5, &num6, &num7);
	int ret = (num5 + num6 + num7)/3 ;
	if (ret <= num5)
	{
		printf("Max = %d\n", num5);
	}
	(ret <= num6) ? printf("Max = %d\n", num6) : printf("Max = %d\n", num7);
}