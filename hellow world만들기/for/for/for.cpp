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

	/*printf("1������\n");

	for (int i = 1; i <= 10; i++)
	{
		if (i%2==0)
			continue;

		printf("%d.Hello\n", i);
	}

	printf("2������\n");

	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		printf("%c", ch);

		if(ch == 'M'|| ch=='Z')
		{
			printf("\n");

			if(ch=='Z') break;
			else continue;
		}

		printf(",");
	}*/

	//printf("3������\n");

	//int sum = 0;

	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i % 3 ==0)
	//	{
	//		printf("%d",i);
	//		sum += i;
	//	
	//		if (i == 9)	printf("=");
	//		else printf("+");
	//	}
	//}
	//printf("%d", sum);

	/*int sum1 = 0; //2������

	for (int i = 0, money = 1; i < 30; i++)
	{
		sum1 += money;//��� ������ ���ϴ°� ���ٰ� �����ϴ���?
		money *= 2;
	}
	printf("30�ϵ��� ������ �ݾ� : %d", sum1);

	int sum2 =0;
	
	//for (int i = 1; i <= 1000; i++)
	//{
	//	if (i % 15 == 0 || i % 3 != 0)
	//	{
	//		sum2 += i;
	//	}
	//	else if (i % 3 == 0)
	//		continue;
	//}
	for (int i = 1; i <= 1000; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			continue;

		sum2 += i;
	}
	printf("\n1 ~ 1000������ �� : %d\n", sum2);
printf("(3�� ����� �����ϸ� 3�� 5�� ������� �������� �ʴ´�)\n");*/

	//int i=0,sum3 = 0;
	//printf("3������. 10000 �� �ѱ� ������ ��\n");
	//for (int i = 1; i < 10000; i++)
	//{
	//	if (i % 2 != 0)
	//	{
	//		sum3 += i;//Ȧ���� ��	
	//	}
	//	if (sum3 > 9999)
	//			break;
	//}
	//	printf("i : %d\tSum : %d", i, sum3);


			//for (int i = 2; i <= 9; i++) 
			//{
			//	printf("====%d��====\n", i); //0�϶� �ܼ��� ������

			//	for (int j = 1; j <= 9; j++) //1�ϴ� ���ϱⰡ ������
			//	{
			//		printf("%d x %d = %d\n", i, j, i * j);
			//	}
			//}
		
	

	//int i = 0, sum3 = 0;
	//printf("3������. 10000 �� �ѱ� ������ ��\n");
	//for (i = 1; i < 10000; i++)
	//{
	//	if (i % 2 != 0)
	//	{
	//		if ((sum3 + i) >= 10000)
	//			break;

	//		sum3 += i;//Ȧ���� ��
	//	}
	//}
	//printf("i : %d\tSum : %d", i, sum3);

			//for (int i = 0; i <= 9; i++)
			//{
			//	for (int j = 2; j <= 9; j++)
			//	{
			//		if(i==0)
			//			printf("====%d��====\t", j);
			//		if (i != 0)//else 
			//			printf("%d x %d = %d\t", j,i,j*i);
			//	}
			//	printf("\n");
			//}

//int length;
//printf("���� �Է� : ");
//scanf_s("%d", &length);
//for (int num= 1;  num<=length ; num++)
//{
//	for (int i = 1; i<=num  ; i++)//�����Ѱ��� �־��
//	{
//			printf("��");
//	}
//	printf("\n");
//}

	// n = 1, l = 3
	// i = 1
	// n = 2
	// i = 1 => i = 2
	// n = 3
	// i = 1, i = 2, i = 3
	// n = 4//

int length, width;
printf("���� �Է� : ");
scanf_s("%d", &length);
printf("���� �Է� : ");
scanf_s("%d", &width);
for (int i = 1; i <= length; i++)
{
	for (int num = 1; num <= width; num++)
	{
		printf("��");
	}
	printf("\n");
}








}
