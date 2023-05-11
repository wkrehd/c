#include<stdio.h>
//Height, width 는  Height*2+1이다
int Diamake(int Height)
{
	int num = 0;
	int height = num * 2 + 1;
	//x가 증가하면서 (x값+1에 별 ,나머지 "  ")이 반복되도록
	for (num =0; num < height*2+1; num++)
	{
		printf("  ");
	}

}
void main()
{
	int num;
	printf("세로 입력 : ");
	scanf_s("%d", &num);
}