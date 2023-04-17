#include <stdio.h>
void main()
{
	/*int num;
	printf("1.정수를 입력하시오 : ");
	scanf_s("%d", &num);
	if (num % 3 == 0)
	{
		printf("%d는 3의배수 입니다.\n", num);
	}
	else
	{
		printf("%d는 3의배수가 아닙니다.\n", num);
	}

	int num1;
	printf("2.정수를 입력하시오 : ");
	scanf_s("%d", &num1);
	(num1 >= 0) ? printf("%d의 절대값은 %d입니다.\n", num1, num1)
		: printf("%d의 절대값은 %d입니다\n",num1, -num1 );*/
		/*int r = (num1 >= 0) ? num1 : -num1;
		printf("%d의 절대값은 %d입니다\n", num1, r);*/

		/*int num2;
		printf("3.정수를 입력하시오 : ");
		scanf_s("%d", &num2);
		if (num2 % 2 == 0)
		{
			printf("%d는 짝수 입니다.\n", num2);
		}
		else
		{
			printf("%d는 홀수 입니다.\n", num2);
		}

		int num3, num4;
		printf("정수 두개를 입력하시오 : ");
		scanf_s("%d%d",&num3,&num4);*/
		//printf("Max = %d\n", (num3 >= num4) ? num3 : num4);
		/*if (num3 >= num4)
		{
			printf("Max = %d\n", num3);
		}
		else
		{
			printf("Max = %d\n", num4);
		}*/
		/*int num5, num6, num7;

		num5, num6, num7
		int r1 = (num5 > num7) ? num5 : num7;
		int r2 = (num6 > num7) ? num6 : num7;
		int result = (r1 > r2) ? r1 : r2;

		printf("5. 정수 세개를 입력하시오 : ");
		scanf_s("%d%d%d", &num5, &num6, &num7);
		if ((num5 > num6) && (num5 > num7))
		{
			printf("Max = %d\n", num5);
		}
		else if ((num6 > num5) && (num6 > num7))
		{
			printf("Max = %d\n", num6);
		}
		else
		{
			printf("Max = %d\n", num7);
			(ret <= num6) ? printf("Max = %d\n", num6) : printf("Max = %d\n", num7);
		}*/
		/*int num5, num6, num7;
		printf("5. 정수 세개를 입력하시오 : ");
		scanf_s("%d%d%d", &num5, &num6, &num7);
		if (num5 > num6)
		{
			if (num5 > num7)
			{
				printf("Max = %d\n", num5);
			}
			else
			{
				printf("Max = %d\n", num7);
			}
		}
		else if (num6 > num7)
		{
			printf("Max = %d\n", num6);
		}
		else
		{
			printf("Max = %d\n", num7);
		}*/
		/*int ret = (num5 + num6 + num7)/3 ;
		if (ret <= num5)
		{
			printf("Max = %d\n", num5);
		}
		else if (ret <= num6)
		{
			printf("Max = %d\n", num6);
		}
		else
		{
			printf("Max = %d\n", num7);
		}*/
		/*int num8, num9;
		printf("6.정수 두개를 입력하시오 : ");
		scanf_s("%d%d", &num8, &num9);
		int max = (num8 > num9) ? num8 : num9;
		if (max % 2 == 0)
		{
			printf("큰수는 %d이며 짝수입니다\n", max);
		}
		else
		{
			printf("큰수는 %d이며 홀수입니다\n", max);
		}*/
		/*if (num8 > num9)
		{
			if (num8 % 2 == 0)
			{
				printf("큰수는 %d이며 짝수입니다\n", num8);
			}
			else
			{
				printf("큰수는 %d이며 홀수입니다\n", num8);
			}

		}
		else
		{
			if (num9 % 2 == 0)
			{
				printf("큰수는 %d이며 짝수입니다\n", num9);
			}
			else
			{
				printf("큰수는 %d이며 홀수입니다\n", num9);
			}
		}*/
		/*if ((num8 >= num9) && (num8 % 2 == 0))
		{
			printf("큰수는 %d이며 짝수입니다\n", num8);
		}
		else if ((num8 >= num9) )
		{
			printf("큰수는 %d이며 홀수입니다.\n", num8);
		}
		else if ((num8 <= num9) && (num9 % 2 == 0))
		{
			printf("큰수는 %d이며 짝수입니다.\n", num9);
		}
		else
		{
			printf("큰수는 %d이며 홀수입니다.\n", num9);
		}*/
		/*int num10, num11;
		printf("7. 정수 두개를 입력하시오 : ");
		scanf_s("%d%d", &num10,&num11);
		int sum = num10 + num11;
		if ((sum % 2 != 0) && (sum %  3 == 0))
		{
			printf("%d 와 %d의합 : %d\n홀수이며 3의배수", num10, num11, sum);
		}
		else
		{
			printf("해당사항이 없습니다.\n");
		}*/
	/*int num1, num2, num3;
	printf("1.번문제\n세과목의 점수를 입력하시오\n");
	printf("국어 점수 : ");
	scanf_s("%d", &num1);
	printf("수학 점수 : ");
	scanf_s("%d", &num2);
	printf("영어 점수 : ");
	scanf_s("%d", &num3);
	int sum = num1 + num2 + num3;
	float avg = sum / 3.0f;
	int ch;
	if (avg >= 90)
	{
		ch = 'A';
	}
	else if (avg >= 80)
	{
		ch = 'B';
	}
	else if (avg >= 70)
	{
		ch = 'C';
	}
	else if (avg >= 60)
	{
		ch = 'D';
	}
	else
	{
		ch = 'F';
	}
	printf("국어점수 : %d 수학점수 : %d 영어점수 : %d\n", num1, num2, num3);
	printf("총합점수 : %d 평균점수 : %.2f 등급 : %c", sum, avg, ch);*/
int unsigned time;
int price;
printf("승마 이용시간을 입력하시오 : ");
scanf_s("%d", &time);
int def = (30 > time) ? 30 : time;
int dev = (def - 30) / 10;
dev += ((def - 30) % 10) ? 1 : 0;/* dev 뒤에 +=이 붙는 이유?*/
price = 3000 + dev * 500;
printf("%d분 탑승요금 : %d원", time, price); /*time에 양수값만 입력하도록 하는방법은 없을가?*/
//if (time <= 30)
//{
//	printf("%d분 탑승요금 : %d원", time, price);
//}
//else 
//{
//	printf("%d분 탑승요금 : %d원", time, price);
//}

}
