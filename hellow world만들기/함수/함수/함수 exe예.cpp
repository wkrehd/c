#include<stdio.h>
//Height, width ��  Height*2+1�̴�
void Diamake(int num)
{
	int num ;
	int height = num * 2 + 1;
	int width = num * 2 + 1;
	
	for (int num =0; num <= height; num++)//height�� ũ�⸦ �����ϴ°�
	{
		for (int num =0; num<= width; num++)//width�� ũ�⸦ �����ϴ°�
		{
			if (num !=num+1)//���� ó���� 1�� ������2���� �������� 1��
				printf("  ");//
			printf("��");
		}
		printf("\n");
	}
	

}
void main()
{
	int num ;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	Diamake(num);
}