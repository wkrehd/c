#include<stdio.h>

void main()
{
	/*int i, sum = 0;
	for (i = 1; i <= 10; i++)
		sum += i;
	printf("sum : %d", sum);*/

	/*int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		sum += i;
	}
	printf("sum : %d", sum);*/

	/*int oddsum = 0, evensum = 0;
	for (int num1 = 1, num2 = 2;
		num1 <= 100 && num2 <= 100;
		num1 += 2, num2 += 2)
	{
		oddsum += num1;
		evensum += num2;
	}
	printf("Ȧ���� �� : %d\n", oddsum);
	printf("¦���� �� : %d\n", evensum);*/

	/*for (int i = 0; i < 100; i++)
	{
		if (i < 10)
			continue;

		printf("%d\n",i);

		if (i >= 30)
			break;
	}*/
	/*int num;

	for (num = 1; num <= 5; num++)
	{
		printf("num=%d\n", num);

		if (num == 3)
			break;
	}
	printf("�ݺ��� ���� �� num= %d\n",num);*/

	/*int num;
	for (num = 1; num <= 5; num++)
	{
		if (num == 3)
			continue;

		printf("num = %d\n",num);
	}*/
	
	/*for ( int i = 1; i <= 5; i++)
	{
		printf("=======================\n");
		for (int j = 1; j <= 5; j++)
			printf("i =%d\tj =%d\n",i,j);
		printf("=======================\n");
	}*/

	/*for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
			printf("��");

		printf("\n");
	}*/

	/*for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if(j==i)
				printf("��");

			else
				printf(" ");
		}

		printf("\n");
	}*/

	//printf("1������\n");

	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i%2==0)
	//		continue;

	//	printf("%d.Hello\n", i);
	//}
	//printf("2������\n");

	//for (char ch = 'A'; ch <= 'Z'; ch++)
	//{
	//	printf("%c", ch);

	//	if (ch == 'M')
	//	{
	//		printf("\n");
	//		continue;
	//	}
	//	else if (ch == 'Z')
	//		break;
	//	printf(",");
	//}

	//printf("\n3������\n");

	//int sum = 0;

	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i %3 ==0 && i<9)
	//	{
	//		printf("%d+",i);//3.6�� ��µ�
	//		sum += i;
	//	}
	//	else if (i == 9)
	//	{
	//		printf("%d=", i);
	//		sum += i;
	//	}
	//	
	//}
	//printf("%d", sum);

	/*int sum1 = 0; 2������

	for (int i = 1; i <= 30; i++)
	{
		i *= 2;
		sum += i;
	}
	printf("30�ϵ��� ������ �ݾ� : %d", sum);*/

//int sum2 =0;
//
//for (int i = 1; i <= 1000; i++)
//{
//	if (i % 15 == 0 || i % 3 != 0)
//	{
//		sum2 += i;
//	}
//	else if (i % 3 == 0)
//		continue;
//}
//printf("1 ~ 1000������ �� : %d\n", sum2);
//printf("(3�� ����� �����ϸ� 3�� 5�� ������� �������� �ʴ´�)\n");

int i=0,sum3 = 0;
printf("3������. 10000 �� �ѱ� ������ ��\n");
for (int i = 1; i < 10000; i++)
{
	if (i % 2 != 0)
	{
		sum3 += i;//Ȧ���� ��	
	}
	if (sum3 > 10000)
			break;
}
	printf("i : %d\tSum : %d", i, sum3);



}