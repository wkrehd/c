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
		: printf("%d�� ���밪�� %d�Դϴ�\n",num1, -num1 );*/
		/*int r = (num1 >= 0) ? num1 : -num1;
		printf("%d�� ���밪�� %d�Դϴ�\n", num1, r);*/

		/*int num2;
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
		scanf_s("%d%d",&num3,&num4);*/
		//printf("Max = %d\n", (num3 >= num4) ? num3 : num4);
		/*if (num3 >= num4)
		{
			printf("Max = %d\n", num3);
		}
		else
		{
			printf("Max = %d\n", num4);
		}*/
		/*int num5, num6, num7;

		num5, num6, num7
		int r1 = (num5 > num7) ? num5 : num7;
		int r2 = (num6 > num7) ? num6 : num7;
		int result = (r1 > r2) ? r1 : r2;

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
		/*int num5, num6, num7;
		printf("5. ���� ������ �Է��Ͻÿ� : ");
		scanf_s("%d%d%d", &num5, &num6, &num7);
		if (num5 > num6)
		{
			if (num5 > num7)
			{
				printf("Max = %d\n", num5);
			}
			else
			{
				printf("Max = %d\n", num7);
			}
		}
		else if (num6 > num7)
		{
			printf("Max = %d\n", num6);
		}
		else
		{
			printf("Max = %d\n", num7);
		}*/
		/*int ret = (num5 + num6 + num7)/3 ;
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
		}*/
		/*int num8, num9;
		printf("6.���� �ΰ��� �Է��Ͻÿ� : ");
		scanf_s("%d%d", &num8, &num9);
		int max = (num8 > num9) ? num8 : num9;
		if (max % 2 == 0)
		{
			printf("ū���� %d�̸� ¦���Դϴ�\n", max);
		}
		else
		{
			printf("ū���� %d�̸� Ȧ���Դϴ�\n", max);
		}*/
		/*if (num8 > num9)
		{
			if (num8 % 2 == 0)
			{
				printf("ū���� %d�̸� ¦���Դϴ�\n", num8);
			}
			else
			{
				printf("ū���� %d�̸� Ȧ���Դϴ�\n", num8);
			}

		}
		else
		{
			if (num9 % 2 == 0)
			{
				printf("ū���� %d�̸� ¦���Դϴ�\n", num9);
			}
			else
			{
				printf("ū���� %d�̸� Ȧ���Դϴ�\n", num9);
			}
		}*/
		/*if ((num8 >= num9) && (num8 % 2 == 0))
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
		}*/
		/*int num10, num11;
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
		}*/
	/*int num1, num2, num3;
	printf("1.������\n�������� ������ �Է��Ͻÿ�\n");
	printf("���� ���� : ");
	scanf_s("%d", &num1);
	printf("���� ���� : ");
	scanf_s("%d", &num2);
	printf("���� ���� : ");
	scanf_s("%d", &num3);
	int sum = num1 + num2 + num3;
	float avg = sum / 3.0f;
	int ch;
	if (avg >= 90)
	{
		ch = 'A';
	}
	else if (avg >= 80)
	{
		ch = 'B';
	}
	else if (avg >= 70)
	{
		ch = 'C';
	}
	else if (avg >= 60)
	{
		ch = 'D';
	}
	else
	{
		ch = 'F';
	}
	printf("�������� : %d �������� : %d �������� : %d\n", num1, num2, num3);
	printf("�������� : %d ������� : %.2f ��� : %c", sum, avg, ch);*/
int unsigned time;
int price;
printf("�¸� �̿�ð��� �Է��Ͻÿ� : ");
scanf_s("%d", &time);
int def = (30 > time) ? 30 : time;
int dev = (def - 30) / 10;
dev += ((def - 30) % 10) ? 1 : 0;/* dev �ڿ� +=�� �ٴ� ����?*/
price = 3000 + dev * 500;
printf("%d�� ž�¿�� : %d��", time, price); /*time�� ������� �Է��ϵ��� �ϴ¹���� ������?*/
//if (time <= 30)
//{
//	printf("%d�� ž�¿�� : %d��", time, price);
//}
//else 
//{
//	printf("%d�� ž�¿�� : %d��", time, price);
//}

}
