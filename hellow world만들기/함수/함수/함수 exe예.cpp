#include<stdio.h>
#include<conio.h>

////���̸� �̿��ؼ� ���̾Ʊ׸��� ����� �Լ� 
//void Diamake(int num)
//{
//	/*int num = 0;*/ //int num = 0;�ٷξ�������  int num;
//	int height = num * 2 + 1;//Height, width ��  Height*2+1�̴�
//	int width = num * 2 + 1;
//	
//	for (int i = 0; i < height; i++)//height�� ũ�⸦ �����ϴ°�
//	{
//		for (int j = 1; num + j <= width + i; j++)//width�� ũ�⸦ �����ϴ°�
//		{
//			//int x = 0;//x�� ��ǥ
//			//if(x =num+j)//x�ڸ��� ���� ����ҷ�����(x
//			//	printf("��");	
//			//if(x != num + j)//x�ڸ� �ܿ� printf("  ")�� ����ҷ�����
//				printf("  ");
//		}
//		printf("��");
//		/*{
//			if (num + i > 0)
//				printf("��");
//			else
//				printf("  ");
//		}
//		for (int i = 1; num - 1 >= 1; i--)
//		{
//			if (num - 1 > 0)
//				printf("��");
//			else
//				printf("  ");
//		}*/
//		printf("\n");
//	}
//	
//
//}
//void main()
//{
//	int num ;
//	printf("���� �Է� : ");
//	scanf_s("%d", &num);
//	Diamake(num);
//}
//int Count(int num)
//{
//	int count = 0;
//	for (int i = 1; i <= num; i++)
//	{
//		//i�� 3�ǹ���̸� ����Ѵ�
//		if (i % 3 == 0)
//		{
//			//count�� 10�� ����̸� \n�Ѵ� 10���� ����� �Ǹ� ������
//			if (count % 10 == 0)
//				printf("\n");
//
//			printf("%d\t", i);
//			count++;
//		}
//	}
//
//	return count;
//}
//int main()
//{
//	/*int num = 0;*/
//	//3�ǹ���� ��µ� Ƚ�� 
//	/*int count = 0;*/
//
//	/*printf("���� �Է� : ");
//	scanf_s("%d", &num);*/
//	//�Էµ� ���ڱ��� �ݺ��Ѵ� ����
//	//for (int i=1; i<=num;i++)
//	//{
//	//	//i�� 3�ǹ���̸� ����Ѵ�
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d\t", i);
//	//		count++;
//
//	//		if(count %10==0)
//	//			printf("\n");
//	//	}
//	//	//else if (count %10==0 )//count�� 10�� ����̸� \n�Ѵ� 10���� ����� �Ǹ� ������
//	//	//	printf("\n");
//	//}
//	//printf("\n");
//	int num1 ;
//	printf("���� �Է� : ");
//	scanf_s("%d", &num1);
//	printf("\n");
//	printf("�� �ڼ� : %dȸ", Count(num1));
//}
 
//30�ϵ��� ������ �ݾ� 
int Money()
{
	printf("2������\n");
	int sum = 0;
	int money = 1;
	for (int i = 1; i < 30; i++)//29�� �ݺ��Ѵ�
	{
		money *= 2;
		sum += money;
	}
	printf("30�ϵ��� ������ �ݾ� : %d\n", sum + 1);
	return sum + 1;
}
//1~1000�������� 3�ǹ���� ���� 5�ǹ���� ���Ѱ��� ���ϴ� �Լ� 
int _3times()
{
	printf("3������\n");
	int sum1=0;

	for (int i = 1; i < 1001; i++)//i=1�̰�  i<1001 �϶� i++
	{
		if (i % 3 == 0 && i % 5!=0)//3�ǹ�� �̸鼭 5�ǹ���� �ƴѰ��� continue//21 24
			continue;

		sum1 += i;//sum1=i�� ���Ѱ��� �����Ѵ�
	}
	printf("1 ~ 1000������ �� : %d\n", sum1);
	printf("3�� ����� �����ϸ� 3�� 5�� ������� �������� �ʴ´�\n");
	return sum1;
}
//10000���� Ȧ������ ���Ѱ��� ������ Ȧ���� ���ϴ� �Լ�
void Oddsum9999()
{
	printf("4������\n");
	int sum2 = 0;
	//int num = 0;
	int i;
	for (i = 1; i < 300; i++)//����� �ݺ��� while(1)�� �ݺ���Ų�ڿ� �������� break�ϴ°��� �ո���
	{
		if (i % 2 != 0)//i�� Ȧ���̸�
		{
			if (sum2 + i > 9999)//sum+i���� 10000�� �Ѵ°��� üũ ����
			{
				/*num = num + 2;*///��num�� Ȧ������ ������ 10000�� ����
				break;
			}
			sum2 += i;//i���� sum2�� ���ϰ� �����Ѵ�
		}
	}
	printf("i : %d\t sum : %d\n", i, sum2);
}
//10������ Ȧ�� ��ŭ HELLOW��� �Լ�
void Oddhellow()
{
	printf("1������\n");
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			continue;
		printf("%d.Hello\n", i);
	}
}
//A~Z���� ��� �Լ�
void CharA_Z()
{
	printf("2������\n");
	for (char ch = 'A'; ch <= 'Z'; ch++)//ch'A'�϶� ����ch��'Z'���� �۰ų� ������ch++
	{
		printf("%c", ch);//ch�� ����Ѵ�
		if (ch == 'M')//ch�� 'M'�϶� \n �Ѵ�
		{
			printf("\n");
			continue;


		}
		if (ch == 'Z')//ch��'z'�̸� break;�ݺ����� ������ �ȳ�����? if�ȿ� ���� ���ǿ� �����ʾҾ���
			break;
		printf(",");
	}
}
//������ �Լ�
void TimesTable()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			if (i == 0)
			{
				printf("====%d��====\t", j);
			}
			else
			printf("%d * %d = %d\t", j,i,j*i);
		}
		printf("\n");
	}
}
//�ﰢ�� ����� �Լ�
void MakeTriangle()
{
	int hight;
	printf("���� �Է� : ");
	scanf_s("%d", &hight);
	for (int i = 0; i < hight; i++)
	{
		for (int j = 0; j < hight; j++)//i��ŭ ������Ѵ�=i��ŭ �ݺ��Ѵ� �׹ۿ� ("  ")
		{
			if (i >= j)
			{
				printf("��");
			}
			else
				printf("  ");
		}
		printf("\n");
	}
}
//�簢�� ����� �Լ�
void MakeSquare()
{
	int hight;
	int width;
	printf("���� ���� �Է� : ");
	scanf_s("%d %d", &hight, &width);
	for (int i = 1; i <= hight; i++)//���̸�ŭ i++�Ѵ�
	{
		for (int j = 1; j <= width; j++)//�ʺ�ŭ j++�Ѵ�  
		{
			if (i == 1 || i == hight)//i ==1 || i== hight�϶� printf("��")�� width��ŭ �ݺ��Ѵ�
			{
				printf("��");
				continue;
			}
			else if (j == 1 || j == width)//j==1 || j==width ���� printf("��")
			{
				printf("��");
				continue;
			}
			else//��������("  ")
				printf("  ");
		}
		printf("\n");
	}
}
//�Ƕ�̵� ����� �Լ�
void Pyramid()
{
	int hight;
	int width;
	printf("���� �Է� : ");
	scanf_s("%d", &hight);
	width = hight * 2 - 1;
	for (int i = hight; i > 0; i--)
	{
		for (int j = 1; j < width; j++)
		{
			//printf("  ");
			if (j == i)//
			{
				printf("��");
			}
			else
				printf("  ");

			//if (i<j)//
			//{
			//	
			//}
			/*else if(i>=j)
				printf("��");*/
		}
		//printf("��");

		printf("\n");
	}
	_getch();
}
void main()
{
	/*printf("1������\n");
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 ==0)
			continue;
		printf("%d.Hello\n", i);
	}*/
	//printf("2������\n");
	//for (char ch = 'A'; ch <= 'Z'; ch++)//ch'A'�϶� ����ch��'Z'���� �۰ų� ������ch++
	//{
	//	printf("%c", ch);//ch�� ����Ѵ�
	//	if (ch == 'M')//ch�� 'M'�϶� \n �Ѵ�
	//	{
	//		printf("\n");
	//		continue;


	//	}
	//    if (ch == 'Z')//ch��'z'�̸� break;�ݺ����� ������ �ȳ�����? if�ȿ� ���� ���ǿ� �����ʾҾ���
	//		break;
	//	printf(",");
	//}
	//printf("\n3������\n");
	//int sum = 0;
	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i== 3 || i == 6 ||i==9)//i�� 3�Ǵ� 6�Ǵ�9�϶� i+�� ����Ѵ�
	//	{
	//		printf("%d+",i);

	//		if (i == 9)//i�� 9�϶� \b=����Ѵ�
	//			printf("\b=");
	//		sum += i;
	//	}
	//}
	//printf("%d", sum);//�հ踦 ����Ѵ�
	//printf("2������\n");
	//int sum = 0;
	//int money = 1;

	//for (int i = 1; i<30;i++ )//29�� �ݺ��Ѵ�
	//{
	//	money *= 2;
	//	sum += money;
	//}
	//printf("30�ϵ��� ������ �ݾ� : %d\n", money +1);
	
	//printf("3������\n");
	//int sum1=0;

	//for (int i = 1; i < 1001; i++)//i=1�̰�  i<1001 �϶� i++
	//{
	//	if (i % 3 == 0 && i % 5!=0)//3�ǹ�� �̸鼭 5�ǹ���� �ƴѰ��� continue//21 24
	//		continue;

	//	sum1 += i;//sum1=i�� ���Ѱ��� �����Ѵ�
	//}
	//printf("1 ~ 1000������ �� : %d\n", sum1);
	//printf("3�� ����� �����ϸ� 3�� 5�� ������� �������� �ʴ´�\n");

	//printf("4������\n");
	//int sum2 = 0;
	//int num= 0;
	//for (int i = 1; i < 300; i++)//����� �ݺ��� while(1)�� �ݺ���Ų�ڿ� �������� break�ϴ°��� �ո���
	//{
	//	if (i % 2 != 0)//i�� Ȧ���̸�
	//	{
	//		if (sum2 + i > 9999)//sum+i���� 10000�� �Ѵ°��� üũ ����
	//		{
	//			num = i;
	//			num + 2;
	//			break;
	//		}
	//		sum2 += i;//i���� sum2�� ���ϰ� �����Ѵ�
	//		num = i;
	//	}
	//}
	//printf("i : %d\t sum : %d\n", num,sum2);
	/*Money();
	_3times();
	Oddsum9999();
	Oddhellow();
	CharA_Z();
	TimesTable();
	MakeTriangle();
	MakeSquare();*/
	Pyramid();
}

