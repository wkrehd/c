#include<stdio.h>
//Height, width ��  Height*2+1�̴�
int Diamake(int Height)
{
	int num = 0;
	int height = num * 2 + 1;
	//x�� �����ϸ鼭 (x��+1�� �� ,������ "  ")�� �ݺ��ǵ���
	for (num =0; num < height*2+1; num++)
	{
		printf("  ");
	}

}
void main()
{
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
}