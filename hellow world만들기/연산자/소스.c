#include <stdio.h>
void main()
{
	int num;
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
	}
	/*int num5, num6, num7;
	printf("5. ���� ������ �Է��Ͻÿ� : ");
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
	printf("5. ���� ������ �Է��Ͻÿ� : ");
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
	printf("6.���� �ΰ��� �Է��Ͻÿ� : ");
	scanf_s("%d%d", &num8, &num9);
	if ((num8 >= num9) && (num8 % 2 == 0))
	{
		printf("ū���� %d�̸� ¦���Դϴ�\n", num8);
	}
	else if ((num8 >= num9) )
	{
		printf("ū���� %d�̸� Ȧ���Դϴ�.\n", num8);
	}
	else if ((num8 <= num9) && (num9 % 2 == 0))
	{
		printf("ū���� %d�̸� ¦���Դϴ�.\n", num9);
	}
	else
	{
		printf("ū���� %d�̸� Ȧ���Դϴ�.\n", num9);
	}
	int num10, num11;
	printf("7. ���� �ΰ��� �Է��Ͻÿ� : ");
	scanf_s("%d%d", &num10,&num11);
	int sum = num10 + num11;
	if ((sum % 2 != 0) && (sum %  3 == 0))
	{
		printf("%d �� %d���� : %d\nȦ���̸� 3�ǹ��", num10, num11, sum);
	}
	else
	{
		printf("�ش������ �����ϴ�.\n");
	}
}