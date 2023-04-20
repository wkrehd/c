#include<stdio.h>

void main()
{
	/*int num1, num2;
	printf("두 정수를 입력하시오 : ");
	scanf_s("%d%d",&num1,&num2);

	printf("%d + %d = %d\n", num1,num2,num1+num2);
	printf("%d - %d = %d\n", num1,num2,num1-num2);
	printf("%d * %d = %d\n", num1,num2,num1*num2);
	printf("%d / %d = %d\n", num1,num2,num1/num2);
	printf("%d %% %d = %d\n", num1,num2,num1%num2);

	num1 *= num2 - 3 * 2;
	printf("num1 = %d\nnum2 = %d\n", num1,num2);
	
	num2 = (num1++) * num2;
	printf("======후치======\n");
	printf("num1 = %d\nnum2 = %d\n", num1,num2);
	num2 = (++num1) * num2;
	printf("======전치======\n");
	printf("num1 = %d\nnum2 = %d\n", num1, num2);*/

	/*float fnum1 = 10.1, fnum2 = 10.2;
	printf("fnum1 >=fnum2 = %d\n", fnum1 >=fnum2);
	printf("fnum1 <=fnum2 = %d\n", fnum1 <= fnum2);
	printf("fnum1 ==fnum2 = %d\n", fnum1 == fnum2);
	printf("fnum1 !=fnum2 = %d\n", fnum1 != fnum2);*/


	//int num1 = 10, num2 = 5;
	//
	//printf("num1>num2 && (num1==10) = %d\n", num1>num2 && num1==10);//1
	//printf("num1>num2 && (num1 !=10) = %d\n", num1>num2 && num1!=10);//0
	//printf("num1>num2 || (num1 !=10) = %d\n", num1>num2 || num1 !=10);//1
	//printf("num1<num2 || (num1 !=10) = %d\n", num1<num2 || num1 !=10);//0

	//printf("!(num1<num2) = %d\n", !(num1<num2));//1
	//printf("!num1 = %d\n", !num1);//0

	//num1 % 2 == 0 ? printf("%d는 짝수\n", num1) : printf("%d는 홀수\n", num1);
	//num2 % 2 == 0 ? printf("%d는 짝수\n", num2) : printf("%d는 홀수\n", num2);

	/*int num1;
	scanf_s("%d", &num1);
	num1 % 5 == 0 ? printf("%d는 5의 배수입니다\n", num1) : printf("%d는 5의 배수가 아닙니다\n",num1);

	int kor, eng, math, sum, ave;
	printf("국어 영어 수학 점수를 입력하시오 : ");
	scanf_s(" %d %d %d", &kor, &eng, &math);
	sum = kor + eng + math;
	ave = sum / 3;
	ave >= 60 ? (printf("합격\n")) : printf("불합격\n");*/

	/*int num1, num2;
	scanf_s("%d%d", &num1,&num2);
	num1 > num2 ? printf("%d가 더 큰수\n", num1) : printf("%d가 더 큰수\n", num2);

	int num3;
	scanf_s("%d", &num3);
	num3 % 3 == 0 && num3 % 2 == 0 ? printf("%d는 3의 배수이며 짝수이다\n", num3) : printf("대상이 아니다\n");*/

	/*int num4; 
	scanf_s("%d", &num4);
	num4 % 5 == 0 || num4 % 7 == 0 ? printf("%d는 5의배수 거나 7의배수이다", num4) : printf("%d는 5의배수거나 7의배수가 아니다");*/

	/*int  num = 11;
	if (num % 2 == 0)
	{
		printf("%d는 짝수입니다\n", num);
	}
	else
	{
		printf("%d는 홀수입니다\n", num);
	}
	
	if (num % 2 != 0)
	{
		printf("홀수 입니다\n"), printf("%d", num);
		
	}*/
	/*int age;
	printf("나이를 입력하시오 : ");
	scanf_s("%d", &age);
	
	if (age > 20)
	{
		printf("성인 입니다");
	}
	else
	{
		printf("미성년자 입니다");
	}*/
	/*int num;
	printf("정수 입력 ");
	scanf_s("%d", &num);
	if (num % 2 == 0 && num % 3 == 0)
	{
		printf("%d는 짝수이며 3의배수입니다", num);
	}*/
	/*if (num % 2 == 0)
	{
		printf("%d는 짝수입니다\n", num);
		if (num % 3 == 0)
		{
			printf("%짝수이며 3의배수입니다");
		}
	}*/
	/*int num;
	printf("정수 입력 ");
	scanf_s("%d", &num);*/
	/*if (num % 3 == 0)
	{
		printf("%d는 3의 배수입니다", num);
	}*/
	/*if (num > 0)
	{
		printf("%d의 절대값은 %d 입니다", num, num);
	}
	else 
	{
		printf("%d의 절대값은 %d입니다", num, -num);
	}*/
	/*if (num % 2 == 0)
	{
		printf("%d는 짝수 입니다", num);
	}
	else
	{
		printf("%d는 홀수 입니다", num);
	}*/
	int num1, num2;
	printf("정수 입력 :");
	scanf_s("%d%d", &num1,&num2);
	/*if (num1 > num2 && num1 > num3)
	{
		printf("가장 큰수는 %d입니다\n", num1);
	}
	if (num2 > num1 && num2 > num3)
	{
		printf("가장 큰수는 %d입니다\n", num2);
	}
	if (num3 > num1 && num3 > num2)
	{
		printf("가장 큰수는 %d입니다\n", num3);
	}*/
	if (num1 > num2 && num1 % 2 == 0)
	{
		printf("%d가 더 크고 짝수 입니다", num1);
	}
	else if (num2 > num1 && num2 % 2 == 0)
	{
		printf("%d가 더 크고 짝수 입니다", num2);
	}
	else
	{
		printf("조건에 만족하지 않습니다");
	}
}
