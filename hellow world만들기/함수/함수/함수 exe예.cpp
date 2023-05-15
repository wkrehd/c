#include<stdio.h>
//Height, width 는  Height*2+1이다
void Diamake(int num)
{
	/*int num = 0;*/
	int height = num * 2 + 1;
	int width = num * 2 + 1;
	
	for (int i =1; i <= height; i++)//height의 크기를 설정하는것
	{
		for (int j = 1; num + j <= width; j++)//width의 크기를 설정하는것
		{
			int x = 0;//x의 좌표
			if(x =num+j)
				printf("★");	
			else
				printf("  ");
		}
		/*{
			if (num + i > 0)
				printf("★");
			else
				printf("  ");
		}
		for (int i = 1; num - 1 >= 1; i--)
		{
			if (num - 1 > 0)
				printf("★");
			else
				printf("  ");
		}*/
		printf("\n");
	}
	

}
void main()
{
	int num =0;
	printf("세로 입력 : ");
	scanf_s("%d", &num);
	Diamake(num);
}