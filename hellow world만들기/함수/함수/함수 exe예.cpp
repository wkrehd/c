#include<stdio.h>
//Height, width 는  Height*2+1이다
void Diamake(int num)
{
	int num ;
	int height = num * 2 + 1;
	int width = num * 2 + 1;
	
	for (int num =0; num <= height; num++)//height의 크기를 설정하는것
	{
		for (int num =0; num<= width; num++)//width의 크기를 설정하는것
		{
			if (num !=num+1)//별이 처음엔 1개 다음엔2개씩 마지막엔 1개
				printf("  ");//
			printf("★");
		}
		printf("\n");
	}
	

}
void main()
{
	int num ;
	printf("세로 입력 : ");
	scanf_s("%d", &num);
	Diamake(num);
}