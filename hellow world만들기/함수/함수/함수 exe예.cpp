#include<stdio.h>

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
//	int num = 0;
//	int count = 0;
//	printf("���� �Է� : ");
//	scanf_s("%d", &num);
//	for (int i = 1; i <= num; i++)
//	{
//		//i�� 3�ǹ���̸� ����Ѵ�
//		if (i % 3 == 0)
//		{
//			printf("%d\t", i);
//			count++;
//
//			if (count % 10 == 0)
//				printf("\n");
//		}
//		//else if (count %10==0 )//count�� 10�� ����̸� \n�Ѵ� 10���� ����� �Ǹ� ������
//		//	printf("\n");
//	}
//	printf("\n");
//	printf("�� �ڼ� : %dȸ", count);
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
//	Count(num1);
//
//}
void main()
{
	//printf("1������\n");
	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i % 2 ==0)
	//		continue;
	//	printf("%d.Hello\n", i);
	//}
	//printf("2������\n");
	//for (char ch = 'A'; ch <= 'Z'; ch++)//ch'A'�϶� ����ch��'Z'���� �۰ų� ������ch++
	//{
	//	printf("%c", ch);//ch�� ����Ѵ�
	//	if (ch == 'M')//ch�� 'M'�϶� \n �Ѵ�
	//	{
	//		printf("\n");
	//		continue;
	//		if(ch == 'Z')//ch��'z'�̸� break;�ݺ����� ������ �ȳ�����?
	//			break;

	//	}
	//	/*else if (ch == 'Z')
	//		break;*/
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
	printf("2������\n");
	int sum = 0;
	int x = 1;

	for (int i = 1; i<30;i++ )//29�� �ݺ��Ѵ�
	{
		x *= 2;
		sum += x;
	}
	printf("30�ϵ��� ������ �ݾ� : %d\n", sum+1);
	
	printf("3������\n");
	int sum1=0;

	for (int i = 1; i < 1001; i++)//i=1�̰�  i<1001 �϶� i++
	{
		if (i % 3 == 0 && i % 5!=0)//3�ǹ�� �̸鼭 5�ǹ���� �ƴѰ��� ����
			continue;
		sum1 += i;//sum1=i�� ���Ѱ��� �����Ѵ�
	}
	printf("1 ~ 1000������ �� : %d\n", sum1);
	printf("3�� ����� �����ϸ� 3�� 5�� ������� �������� �ʴ´�\n");
}
