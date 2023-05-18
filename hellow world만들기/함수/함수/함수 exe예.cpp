#include<stdio.h>
#include<conio.h>

////다이아그림을 만드는 함수 
void Diamake()
{
	int hight;
	int width;
	int k=0;
	printf("세로 입력 : ");
	scanf_s("%d", &hight);
	k = hight;
	hight = hight*2 + 1;
	width = hight;
	for (int i = 0; i < hight; i++)//i=0이고 i<hight*2+1때 i++
	{
		for (int j = 0; j < width; j++)//j==0이고 j<width때 j++
		{
			if (i>0 && j == k - i)
			{
				printf("▩");
			}
			else if(i>0 && j == k+i)
				printf("▩");
			else if(i==0 && j==k)
				printf("▩");
			else
				printf("  ");
			if (i==k+1)
			{

			}
			else if(i==hight && j==k)
				printf("▩");
			else
				printf("  ");
			/*else if(i==0 && j==k+1)
				printf("▩");
			else if(i==hight && j==k+1)
				printf("▩");*/
			
		}
		printf("\n");
	}
}
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
 
//30일동안 저축한 금액 
int Money()
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
//1~1000사이합중 3의배수는 빼고 5의배수는 더한값을 구하는 함수 
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
//10000전의 홀수값을 합한값과 직전의 홀수값 구하는 함수
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
//10전까지 홀수 만큼 HELLOW출력 함수
void Oddhellow()
{
	printf("1번문제\n");
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			continue;
		printf("%d.Hello\n", i);
	}
}
//A~Z까지 출력 함수
void CharA_Z()
{
	printf("2번문제\n");
	for (char ch = 'A'; ch <= 'Z'; ch++)//ch'A'일때 실행ch가'Z'보다 작거나 같으면ch++
	{
		printf("%c", ch);//ch를 출력한다
		if (ch == 'M')//ch가 'M'일때 \n 한다
		{
			printf("\n");
			continue;


		}
		if (ch == 'Z')//ch가'z'이면 break;반복문을 끝낸다 안끝나내? if안에 들어가서 조건에 맞지않았었음
			break;
		printf(",");
	}
}
//구구단 함수
void TimesTable()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			if (i == 0)
			{
				printf("====%d단====\t", j);
			}
			else
			printf("%d * %d = %d\t", j,i,j*i);
		}
		printf("\n");
	}
}
//삼각형 만들기 함수
void MakeTriangle()
{
	int hight;
	printf("높이 입력 : ");
	scanf_s("%d", &hight);
	for (int i = 0; i < hight; i++)
	{
		for (int j = 0; j < hight; j++)//i만큼 ▩출력한다=i만큼 반복한다 그밖에 ("  ")
		{
			if (i >= j)
			{
				printf("▩");
			}
			else
				printf("  ");
		}
		printf("\n");
	}
}
//사각형 만드는 함수
void MakeSquare()
{
	int hight;
	int width;
	printf("가로 세로 입력 : ");
	scanf_s("%d %d", &hight, &width);
	for (int i = 1; i <= hight; i++)//높이만큼 i++한다
	{
		for (int j = 1; j <= width; j++)//너비만큼 j++한다  
		{
			if (i == 1 || i == hight)//i ==1 || i== hight일때 printf("▩")를 width만큼 반복한다
			{
				printf("▩");
				continue;
			}
			else if (j == 1 || j == width)//j==1 || j==width 때만 printf("▩")
			{
				printf("▩");
				continue;
			}
			else//나머지는("  ")
				printf("  ");
		}
		printf("\n");
	}
}
//피라미드 만드는 함수
void Pyramid()
{
	int hight;
	int width;
	printf("세로 입력 : ");
	scanf_s("%d", &hight);
	width = hight * 2 - 1;
	for (int i = hight; i > 0; i--)
	{
		for (int j = 1; j < width; j++)
		{
			//printf("  ");
			if (j == i)//
			{
				printf("▩");
			}
			else
				printf("  ");

			//if (i<j)//
			//{
			//	
			//}
			/*else if(i>=j)
				printf("▩");*/
		}
		//printf("▩");

		printf("\n");
	}
	_getch();
}
//역피라미드 만드는 함수
void ReversePyramid()
{
	int hight;
	int width;
	/*int k;*/
	printf("세로 입력 : ");
	scanf_s("%d", &hight);
	width = hight * 2 - 1;
	for (int i = 0; i < hight; i++)
	{
		for (int j = 0; j < width; j++)
		{
			/*k = hight;*/
			if (i > j || j >= width - i)//
				printf("  ");
			else
				printf("▩");
		}
		printf("\n");
	}
}
//테두리와 삼각형 만들기 함수 1
void BorderPyramid_1()
{
	int hight;
	int width;
	int k;
	printf("세로 입력 :");
	scanf_s("%d", &hight);
	width = hight * 2 ;
	for (int i = 0; i <= hight+1; i++)
	{
		for (int j = 0; j <= width; j++)
		{
			k = hight;
			if (i == 0 || j==0 || j==width || i==hight+1 )//테두리 먼저
			{
				printf("▩");
			}
			else if (i>0 && j==k+1-i || j==k-1+i || i == hight)
			{
				printf("♧");
			}
			else
				printf("  ");
		}
		printf("\n");
	}
}
//테두리와 삼각형 만들기 함수 2
void BorderPyramid_2()
{
	int hight;
	int width;
	int k;
	printf("세로 입력 :");
	scanf_s("%d", &hight);
	width = hight * 2+1;
	for (int i = 0; i < hight + 3; i++)
	{
		k = hight;
		for (int j = 0; j < width; j++)
		{
			if (i>1 && i<k+2 && j>k+1-i && j<width-k-2+i)//빈곳의 범위를 조건으로 정하기
			{
				printf("  ");
			}
			else
				printf("†");//테두리
		}
		printf("\n");
	}
}
//테두리와 삼각형 만들기 함수 3
void BorderPyramid_3()
{
	int hight;
	int width;
	int k;
	printf("세로 입력 :");
	scanf_s("%d", &hight);
	width = hight * 2 + 1;
	for (int i = 0; i < hight + 3; i++)
	{
		k = hight;
		for (int j = 0; j < width; j++)
		{
			if(i>1 && i<k + 2 && j>k+1-i && j< width - k - 2 + i)//별을 그려야할 범위
			{
				printf("★");
			}
			else if(i==0 || j==0 || j==width-1 || i==hight+2)//테두리
				printf("▩");
			else 
				printf("  ");
		}
		printf("\n");
	}
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
	//printf("2번문제\n");
	//for (char ch = 'A'; ch <= 'Z'; ch++)//ch'A'일때 실행ch가'Z'보다 작거나 같으면ch++
	//{
	//	printf("%c", ch);//ch를 출력한다
	//	if (ch == 'M')//ch가 'M'일때 \n 한다
	//	{
	//		printf("\n");
	//		continue;


	//	}
	//    if (ch == 'Z')//ch가'z'이면 break;반복문을 끝낸다 안끝나내? if안에 들어가서 조건에 맞지않았었음
	//		break;
	//	printf(",");
	//}
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
	Oddsum9999();
	Oddhellow();
	CharA_Z();
	TimesTable();
	MakeTriangle();
	MakeSquare();*/
	/*Pyramid();*/
	/*ReversePyramid();*/
	//Diamake();//
	BorderPyramid_1();
	BorderPyramid_2();
	BorderPyramid_3();
}

