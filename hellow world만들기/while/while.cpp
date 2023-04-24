#include<stdio.h>
#include<conio.h>
#define esc 27
#define true 1

void main()
{
	//int num = 1;
	//while (num <= 5)
	//{
	//	printf("hello~~\n");
	//	num++;
	//}
	//char ch;
	//while (1)
	//{
	//	ch = _getch();//입력이되면
	//	if (ch == esc)
	//		break;
	//	else if (ch >= 'a' && ch <= 'z')// 안되는부분 없을때 있을때 주석처리하기
	//		ch -= 32;

	//	_putch(ch);// 조건에 맞게 출력
	//	printf("\n");
	//}
	//int i = 0, j = 1, sum = 0;
	//while (true)
	//{
	//	printf("1~100 사이 수 입력 : ");
	//	scanf_s("%d", &i);
	//	if (i >= 1 && i <= 100)
	//	break;// 영향을 주는곳에 멈춘다 아닐경우 품고있는 곳에 멈춘다
	//	printf("잘못 다시 입력\n");
	//}
	//while (j <= i)
	//{
	//	sum += j;
	//	j++;
	//}
	//printf("1~%d 누적합계 : %d", i, sum);
	/*int i = 0, j = 1, sum = 0;
	while (true)
	{
		printf("10~20사이의 수를 입력하시오 : ");
		scanf_s("%d", &i);
		if (i >= 10 && i <= 20)
			break;
		printf("잘못 다시 입력");
	}
	while (j <= i)
	{
		sum += j;

		j++;

	}
		printf("%d의 누적 합계는 %d 이다\n", i, sum);*/
	/*int num1=0, num2=5;
	while (num1 < num2)
	{
		printf("Hellow\n");
		num1++;
	}
	int num1 = 1,sum = 0;
	
	while (true)
	{
		printf("정수 입력 : ");
		scanf_s("%d", &num1);
		sum += num1;
		if (num1 == 0)
			break;
	}
	printf("모든 정수의 값은 %d이다", sum);*/

	//int num2, num, check = 1;
	//printf("4.숫자를 입력하시오 : ");
	//scanf_s("%d", &num2);
	//num = num2 - 1;
	//while (1 < num)
	//{
	//	if (0 == num2 % num)//분자,분모
	//	{
	//		check = 0;
	//		break;
	//	}

	//	--num;
	//}
	//if (check)
	//{
	//	printf("%d는 소수 입니다.\n", num2);
	//}
	//else
	//{
	//	printf("%d는 소수가 아닙니다.\n", num2);
	//}
	
	int num3;
	printf("5.숫자를 입력하시오 : ");
	scanf_s("%d", &num3);
	while(num3)
	{
		/*num4 = num3 % 10;*/
		printf("%d", num3 % 10); // 나머지 값을 출력, 나머지 값:숫자(num3)의 가장 뒷자리 수.	
		num3 /= 10;//가장 뒷자리 수를 제외한 수로 갱신
	}

	int num5,num6,sum=0 ;
	printf("\n6.숫자를 입력하시오 : ");
	scanf_s("%d", &num5);
	while (num5)
	{
		num6 = num5 % 10;//num5 % 10으로 각자릿수를 구하고 그것을 num6에 보관
		sum += num6;
		num5 /= 10;
	}
	printf("최종합계 : %d", sum);
}
