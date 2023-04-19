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


	int num1 = 10, num2 = 5;
	
	printf("num1>num2 && (num1==10) = %d\n", num1>num2 && num1==10);//1
	printf("num1>num2 && (num1 !=10) = %d\n", num1>num2 && num1!=10);//0
	printf("num1>num2 || (num1 !=10) = %d\n", num1>num2 || num1 !=10);//1
	printf("num1<num2 || (num1 !=10) = %d\n", num1<num2 || num1 !=10);//0

	printf("!(num1<num2) = %d\n", !(num1<num2));//1
	printf("!num1 = %d\n", !num1);//0


}
