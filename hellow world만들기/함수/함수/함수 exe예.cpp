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
//int Count(int num)
//{
//	int count = 0;
//	for (int i = 1; i <= num; i++)
//	{
//		//i가 3의배수이면 출력한다
//		if (i % 3 == 0)
//		{
//			//count가 10의 배수이면 \n한다 10번이 출력이 되면 다음줄
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
//	//3의배수가 출력된 횟수 
//	/*int count = 0;*/
//
//	/*printf("정수 입력 : ");
//	scanf_s("%d", &num);*/
//	//입력된 숫자까지 반복한다 조건
//	//for (int i=1; i<=num;i++)
//	//{
//	//	//i가 3의배수이면 출력한다
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d\t", i);
//	//		count++;
//
//	//		if(count %10==0)
//	//			printf("\n");
//	//	}
//	//	//else if (count %10==0 )//count가 10의 배수이면 \n한다 10번이 출력이 되면 다음줄
//	//	//	printf("\n");
//	//}
//	//printf("\n");
//	int num1 ;
//	printf("정수 입력 : ");
//	scanf_s("%d", &num1);
//	printf("\n");
//	printf("총 박수 : %d회", Count(num1));
//}
int Money()//30일동안 저축한 금액 
{
	printf("2번문제\n");
	int sum = 0;
	int money = 1;
	for (int i = 1; i < 30; i++)//29번 반복한다
	{
		money *= 2;
		sum += money;
	}
	printf("30일동안 저축한 금액 : %d\n", sum + 1);
	return sum + 1;
}
int _3times()
{
	printf("3번문제\n");
	int sum1=0;

	for (int i = 1; i < 1001; i++)//i=1이고  i<1001 일때 i++
	{
		if (i % 3 == 0 && i % 5!=0)//3의배수 이면서 5의배수가 아닌것을 continue//21 24
			continue;

		sum1 += i;//sum1=i를 더한값을 대입한다
	}
	printf("1 ~ 1000사이의 합 : %d\n", sum1);
	printf("3의 배수는 제외하며 3과 5의 공배수는 제외하지 않는다\n");
	return sum1;
}
void Oddsum9999()
{
	printf("4번문제\n");
	int sum2 = 0;
	//int num = 0;
	int i;
	for (i = 1; i < 300; i++)//어림짐작 반복은 while(1)로 반복시킨뒤에 조건으로 break하는것이 합리적
	{
		if (i % 2 != 0)//i가 홀수이면
		{
			if (sum2 + i > 9999)//sum+i값이 10000을 넘는가를 체크 먼저
			{
				/*num = num + 2;*///이num의 홀수값을 넣으면 10000이 넘음
				break;
			}
			sum2 += i;//i값을 sum2에 더하고 대입한다
		}
	}
	printf("i : %d\t sum : %d\n", i, sum2);
}
void main()
{
	/*printf("1번문제\n");
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 ==0)
			continue;
		printf("%d.Hello\n", i);
	}*/
	printf("2번문제\n");
	for (char ch = 'A'; ch <= 'Z'; ch++)//ch'A'일때 실행ch가'Z'보다 작거나 같으면ch++
	{
		printf("%c", ch);//ch를 출력한다
		if (ch == 'M')//ch가 'M'일때 \n 한다
		{
			printf("\n");
			continue;


		}
	
			if (ch == 'Z')//ch가'z'이면 break;반복문을 끝낸다 안끝나내?
				break;
		/*else if (ch == 'Z')
			break;*/
		printf(",");
	}
	//printf("\n3번문제\n");
	//int sum = 0;
	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i== 3 || i == 6 ||i==9)//i가 3또는 6또는9일때 i+를 출력한다
	//	{
	//		printf("%d+",i);

	//		if (i == 9)//i가 9일때 \b=출력한다
	//			printf("\b=");
	//		sum += i;
	//	}
	//}
	//printf("%d", sum);//합계를 출력한다
	//printf("2번문제\n");
	//int sum = 0;
	//int money = 1;

	//for (int i = 1; i<30;i++ )//29번 반복한다
	//{
	//	money *= 2;
	//	sum += money;
	//}
	//printf("30일동안 저축한 금액 : %d\n", money +1);
	
	//printf("3번문제\n");
	//int sum1=0;

	//for (int i = 1; i < 1001; i++)//i=1이고  i<1001 일때 i++
	//{
	//	if (i % 3 == 0 && i % 5!=0)//3의배수 이면서 5의배수가 아닌것을 continue//21 24
	//		continue;

	//	sum1 += i;//sum1=i를 더한값을 대입한다
	//}
	//printf("1 ~ 1000사이의 합 : %d\n", sum1);
	//printf("3의 배수는 제외하며 3과 5의 공배수는 제외하지 않는다\n");

	//printf("4번문제\n");
	//int sum2 = 0;
	//int num= 0;
	//for (int i = 1; i < 300; i++)//어림짐작 반복은 while(1)로 반복시킨뒤에 조건으로 break하는것이 합리적
	//{
	//	if (i % 2 != 0)//i가 홀수이면
	//	{
	//		if (sum2 + i > 9999)//sum+i값이 10000을 넘는가를 체크 먼저
	//		{
	//			num = i;
	//			num + 2;
	//			break;
	//		}
	//		sum2 += i;//i값을 sum2에 더하고 대입한다
	//		num = i;
	//	}
	//}
	//printf("i : %d\t sum : %d\n", num,sum2);
	/*Money();
	_3times();
	Oddsum9999();*/
}

