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
void main()
{
	int num = 0;
	//3�ǹ���� ��µ� Ƚ�� 
	int count = 0;

	printf("���� �Է� : ");
	scanf_s("%d", &num);
	//�Էµ� ���ڱ��� �ݺ��Ѵ� ����
	for (int i=1; i<=num;i++)
	{
		//i�� 3�ǹ���̸� ����Ѵ�
		if (i % 3 == 0)
		{
			printf("%d\t", i);
			count++;

			if(count %10==0)
				printf("\n");
		}
		//else if (count %10==0 )//count�� 10�� ����̸� \n�Ѵ� 10���� ����� �Ǹ� ������
		//	printf("\n");
	}
	printf("\n");
	printf("�� �ڼ� : %dȸ", count);

}