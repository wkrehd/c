#include<stdio.h>
//Height, width ��  Height*2+1�̴�
void Diamake(int num)
{
	/*int num = 0;*/
	int height = num * 2 + 1;
	int width = num * 2 + 1;
	
	for (int i =1; i <= height; i++)//height�� ũ�⸦ �����ϴ°�
	{
		for (int j = 1; num + j <= width; j++)//width�� ũ�⸦ �����ϴ°�
		{
			int x = 0;//x�� ��ǥ
			if(x =num+j)
				printf("��");	
			else
				printf("  ");
		}
		/*{
			if (num + i > 0)
				printf("��");
			else
				printf("  ");
		}
		for (int i = 1; num - 1 >= 1; i--)
		{
			if (num - 1 > 0)
				printf("��");
			else
				printf("  ");
		}*/
		printf("\n");
	}
	

}
void main()
{
	int num =0;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	Diamake(num);
}