#include<stdio.h>

////높이를 이용해서 다이아그림을 만드는 함수 
//void Diamake(int num)
//{
//	/*int num = 0;*/ //int num = 0;바로쓰기위해  int num;
//	int height = num * 2 + 1;//Height, width 는  Height*2+1이다
//	int width = num * 2 + 1;
//	
//	for (int i = 0; i < height; i++)//height의 크기를 설정하는것
//	{
//		for (int j = 1; num + j <= width + i; j++)//width의 크기를 설정하는것
//		{
//			//int x = 0;//x의 좌표
//			//if(x =num+j)//x자리에 별을 출력할려고함(x
//			//	printf("★");	
//			//if(x != num + j)//x자리 외에 printf("  ")을 출력할려고함
//				printf("  ");
//		}
//		printf("★");
//		/*{
//			if (num + i > 0)
//				printf("★");
//			else
//				printf("  ");
//		}
//		for (int i = 1; num - 1 >= 1; i--)
//		{
//			if (num - 1 > 0)
//				printf("★");
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
//	printf("세로 입력 : ");
//	scanf_s("%d", &num);
//	Diamake(num);
//}
void main()
{
	int num = 0;
	//3의배수가 출력된 횟수 
	int count = 0;

	printf("정수 입력 : ");
	scanf_s("%d", &num);
	//입력된 숫자까지 반복한다 조건
	for (int i=1; i<=num;i++)
	{
		//i가 3의배수이면 출력한다
		if (i % 3 == 0)
		{
			printf("%d\t", i);
			count++;

			if(count %10==0)
				printf("\n");
		}
		//else if (count %10==0 )//count가 10의 배수이면 \n한다 10번이 출력이 되면 다음줄
		//	printf("\n");
	}
	printf("\n");
	printf("총 박수 : %d회", count);

}