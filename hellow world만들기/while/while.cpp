#include<stdio.h>
#include<conio.h>
#define esc 27
#define true 1

void main()
{
	//int num = 1;
	//while (num <= 5)
	//{
	//	printf("hello~~\n");
	//	num++;
	//}
	//char ch;
	//while (1)
	//{
	//	ch = _getch();//�Է��̵Ǹ�
	//	if (ch == esc)
	//		break;
	//	else if (ch >= 'a' && ch <= 'z')// �ȵǴºκ� ������ ������ �ּ�ó���ϱ�
	//		ch -= 32;

	//	_putch(ch);// ���ǿ� �°� ���
	//	printf("\n");
	//}
	//int i = 0, j = 1, sum = 0;
	//while (true)
	//{
	//	printf("1~100 ���� �� �Է� : ");
	//	scanf_s("%d", &i);
	//	if (i >= 1 && i <= 100)
	//	break;// ������ �ִ°��� ����� �ƴҰ�� ǰ���ִ� ���� �����
	//	printf("�߸� �ٽ� �Է�\n");
	//}
	//while (j <= i)
	//{
	//	sum += j;
	//	j++;
	//}
	//printf("1~%d �����հ� : %d", i, sum);
	/*int i = 0, j = 1, sum = 0;
	while (true)
	{
		printf("10~20������ ���� �Է��Ͻÿ� : ");
		scanf_s("%d", &i);
		if (i >= 10 && i <= 20)
			break;
		printf("�߸� �ٽ� �Է�");
	}
	while (j <= i)
	{
		sum += j;

		j++;

	}
		printf("%d�� ���� �հ�� %d �̴�\n", i, sum);*/
	/*int num1=0, num2=5;
	while (num1 < num2)
	{
		printf("Hellow\n");
		num1++;
	}
	int num1 = 1,sum = 0;
	
	while (true)
	{
		printf("���� �Է� : ");
		scanf_s("%d", &num1);
		sum += num1;
		if (num1 == 0)
			break;
	}
	printf("��� ������ ���� %d�̴�", sum);*/

	//int num2, num, check = 1;
	//printf("4.���ڸ� �Է��Ͻÿ� : ");
	//scanf_s("%d", &num2);
	//num = num2 - 1;
	//while (1 < num)
	//{
	//	if (0 == num2 % num)//����,�и�
	//	{
	//		check = 0;
	//		break;
	//	}

	//	--num;
	//}
	//if (check)
	//{
	//	printf("%d�� �Ҽ� �Դϴ�.\n", num2);
	//}
	//else
	//{
	//	printf("%d�� �Ҽ��� �ƴմϴ�.\n", num2);
	//}
	
	int num3;
	printf("5.���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &num3);
	while(num3)
	{
		/*num4 = num3 % 10;*/
		printf("%d", num3 % 10); // ������ ���� ���, ������ ��:����(num3)�� ���� ���ڸ� ��.	
		num3 /= 10;//���� ���ڸ� ���� ������ ���� ����
	}

	int num5,num6,sum=0 ;
	printf("\n6.���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &num5);
	while (num5)
	{
		num6 = num5 % 10;//num5 % 10���� ���ڸ����� ���ϰ� �װ��� num6�� ����
		sum += num6;
		num5 /= 10;
	}
	printf("�����հ� : %d", sum);
}
