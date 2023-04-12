#include<stdio.h>

void main()
{ 
	char ch;

	printf("프로그래밍은 쉬운가? y , n을 입력하시오\n");
	scanf_s("%c", &ch);
	ch = 'y';
	(ch == 1) ? printf("니가 뭘 알아!\n", ch) : printf("잘 아네!\n", ch);
	
	/*int Num1, Num2, Num3;
	float result;


	printf("1.정수를 입력하시오 : ");
	scanf_s("%d", &Num1);
	(Num1 % 5 == 0) ? printf("%d는 5의배수입니다\n", Num1) : printf("%d는 5의배수가 아닙니다\n", Num1);
	
	printf("2.세 과목의 점수를 입력하시오\n");
	printf("국어 점수 : ");
	scanf_s("%d", &Num1);
	printf("수학 점수 : ");
	scanf_s("%d", &Num2);
	printf("영어 점수 : ");
	scanf_s("%d", &Num3);

	result = (Num1 + Num2 + Num3) / 3.0f;
	(result >= 60) ? printf("평균 %.2f합격\n", result) : printf("평균 %.2f불합격\n", result);

	printf("3.두 정수를 입력하시오 : ");
	scanf_s("%d %d", &Num1, &Num2);
	(Num1 > Num2 == 1) ? printf("큰 수 : %d\n", Num1) : printf("큰 수 : %d\n", Num2);

	printf("4.정수를 입력하시오 : ");
	scanf_s("%d", &Num1);

	result = (Num1 % 3 == 0) && (Num1 % 2 == 0);
	result ? printf("%d는 짝수이며 3의배수 입니다.\n", Num1) : printf("조건 실패\n");

	printf("5.정수를 입력하시오 :");
	scanf_s("%d", &Num1);

	result = (Num1 % 5 == 0) || (Num1 % 7 == 0);
	result ? printf("%d는 5의배수 이거나 7의배수 입니다.\n",Num1 ) : printf("조건 실패\n");*/

	/*int Num1 = 10, Num2 = 5;

	(Num1 % 2 == 0) ? printf("%d는 짝수\n", Num1) : printf("%d는 홀수\n", Num1);
	(Num2 % 2 == 0) ? printf("%d는 짝수\n", Num2) : printf("%d는 홀수\n", Num2);*/
	/*int Num1 = 10, Num2 = 1;

	printf("(Num1 > 5) && (num2) = %d\n", Num1 >5 && (Num2++)); 
	printf("Num2= %d\n", Num2);
	printf("(Num1 < 5) && (Num2) = %d\n", Num1 <5 && (Num2++));
	printf("Num2= %d\n", Num2);
	printf("(Num1 > 5) || (Num2) = %d\n", Num1 >5 || (Num2++));
	printf("Num2 = %d\n", Num2);
	printf("(Num1 < 5) || (Num2) = %d\n", Num1 <5 || (Num2++));
	printf("Num2 = %d\n", Num2);*/
	/*int Num1 = 10, Num2 = 5;
	
	printf("(Num1 > Num2) && (Num1 ==10) = %d\n", Num1 > Num2 && Num1 ==10);
	printf("(Num1 > Num2) && (Num1 !=10) = %d\n", Num1 > Num2 && Num1 != 10);

	printf("(Num1 > Num2) || (Num1 !=10) = %d\n", Num1 > Num2 || Num1 != 10);
	printf("(Num1 < Num2) || (Num1 !=10) = %d\n", Num1 < Num2 || Num1 != 10);
	
	printf("!(Num1 < Num2) = %d\n", !(Num1 < Num2));
	printf("!Num1 = %d\n", !Num1); */

	/*float Fnum1 = 10.1, Fnum2 = 10.2;

	printf("Fnum1 >= Fnum2 = %d\n", Fnum1 >= Fnum2);
	printf("Fnum1 <= Fnum2 = %d\n", Fnum1 <= Fnum2);
	printf("Fnum1 == Fnum2 = %d\n", Fnum1 == Fnum2);
	printf("Fnum1 != Fnum2 = %d\n", Fnum1 != Fnum2);*/
	/*int Num1 = 5, Num2 = 10, Num3 = 15;
	char ch = 'a';

	Num1++;
	Num2 *= --Num3 - Num1--;
	Num2 += Num1 * 2;
	Num2 /= ++Num3;
	Num1 += Num2--;
	ch += Num2++;
	printf("Num1 = %d Num2 = %d Num3 = %d ch = %c", Num1, Num2, Num3, ch);*/
	//int Num1, Num2;
	//printf("두 정수를 입력하시오 :");
	//scanf_s("%d%d", &Num1, &Num2);

	//Num2 = (Num1++) * Num2;
	//printf("=====후치=====\n");
	//printf("Num1 = %d\nNum2 = %d\n\n", Num1, Num2);
	//Num2 = (++Num1) * Num2;
	//printf("=====전치=====\n");
	//printf("Num1 = %d\nNum2 = %d\n", Num1, Num2);
	///*int Num1, Num2;*/
	//printf("두 정수를 입력하시오 :");
	//scanf_s("%d%d", &Num1, &Num2);

	//Num1 *= Num2 - 3 * 2;
	//printf("Num1 = %d\nNum2 = %d\n", Num1, Num2);
	//printf("%d + %d = %d\n", Num1, Num2, Num1 + Num2);
	//printf("%d - %d = %d\n", Num1, Num2, Num1 - Num2);
	//printf("%d * %d = %d\n", Num1, Num2, Num1 * Num2);
	//printf("%d / %d = %d\n", Num1, Num2, Num1 / Num2);
	//printf("%d %% %d = %d\n", Num1, Num2, Num1 % Num2);


	//int num1 , num2;
	//
	//
	//printf("정수 A값을 입력하시오 : ");
	//scanf_s("%d", &num1);
	////printf("%d\n", num1 << 1);


	//printf("정수 B값을 입력하시오 : ");
	//scanf_s("%d", &num2);

	//num1 = num2++;
	//printf("A + B : %d", num1);


	/*int num1, num2, num3;
	float Fnum;
	printf("국어점수를 입력하시오 : ");
	scanf_s("%d", &num1);
	printf("수학점수를 입력하시오 : ");
	scanf_s("%d", &num2);
	printf("영어점수를 입력하시오 : ");
	scanf_s("%d", &num3);*/
	/*printf("국어점수 : %d\n", num1);
	printf("수학점수 : %d\n", num2);
	printf("영어점수 : %d\n", num3);
	printf("합계점수 : %d\t", num1 + num2 + num3 );
	printf("평균점수 : %.2f", (float)(num1 + num2 + num3)/3);*/
	/*float Fnum;
	printf("소숫점수를 입력하시오 : ");
	scanf_s("%f", &Fnum);
	printf("소숫점수 : %.2f", Fnum);*/

	//int num;
	//char ch;
	//printf("단일문자를 입력하시오 :");
	//scanf_s("%c", &ch);
	////printf("정수를 입력하시오 :");
	////scanf_s("%d", &num );
	//printf("%c", ch + 1);
	/*int num1, num2;
	float Fnum;
	printf("실수 입력 :");
	scanf_s("%f", &Fnum);
	printf("정수 두개 입력 :");
	scanf_s("%d %d", &num1, &num2);
	printf("num1 = %d\nnum2 = %d\nFnum=%f\n", num1, num2, Fnum);*/
	/*int num1, num2, sum;
	printf("두 정수를 입력하시오 :");
	scanf_s("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf_s("%d + %d = %d", num1, num2, sum);*/
	/*int a = 0, b = 0;
	scanf_s("%d %d", &a, &b);
	printf_s("%d + %d = %d\n", a, b, a+b);

	getchar();*/
	/*int Num = 10;
	float Fnum = 10.5;
	double Dnum = 10.1;
	char ch = 'a';

	int result = Num + Fnum;
	double d_result;
	printf("%d + %.2f = %d\n", Num, Fnum , result);
	result = Fnum + Dnum;
	printf("%.2f + %.2f = %d\n", Fnum, Dnum, result);
	d_result = ch + Num;
	printf("%c + %d = %.2lf", ch, Num, d_result);*/
	/*int num;
	float Fnum = 1.5f;

	num = Fnum;
	printf("%d\n", num);
	Fnum = num;
	printf("%f\n", Fnum );

	printf("%f\n", Fnum +num);
	printf("%d\n", (int)Fnum+num);*/

	/*int num = 5, ret;
	char ch = 'A';

	ret = num + 'A';
	printf("ret = %d\n", ret);
	printf("ret= %c\n", ret);*/

	/*int age = 29;
	float weight = 68.7, height = 169.52;
	int num = 100;
	char ch = 'A'; 

	num = num + 1;
	ch = 'B';
	
	printf("num= %d\n", num);
	printf("ch= %c\n", ch);*/
	/*printf("나의 나이는 %d세 입니다. \n", age);
	printf("나의 몸무게는 %.1f(kg)입니다. \n", weight);
	printf("나의 키는 %.2f(cm)입니다. \n", height);*/


	/*int a, b = 8;

	printf("Decimal : %d\n", 173);
	printf("Decimal : %d\n", 0255);
	printf("Decimal : %d\n\n", 0xAD);
 
	printf("Octal : %o\n", 173);
	printf("Octal : %o\n", 0255);
	printf("Octal : %o\n\n", 0xad);

	printf("HexaDecimal : %x\n", 173);
	printf("HexaDecimal : %x\n", 0255);
	printf("HexaDecimal : %x\n", 0xad);*/

	/*printf("%s %s\n", "Hello,",  "World");
	printf("375 X 543 = %d\n", 375 * 543);
	printf("%.4f\n", 3.14159264);
	printf("%c %s\n", 'C', "Language");*/

	/*printf("%d + %d = %d\n", 5, 10, 5+10);
	printf("%d + %d = \n", 5, 10, 5 + 10);
	printf("%d + %d = %d\n\n", 5, 10);

	printf("실수형 상수 : %f\n", 10.5);
	printf("정수형 상수 : %d\n", 10.5);
	printf("실수형 상수 : %f\n\n", 10);
	printf("실수형 상수 : %.2f\n\n", 10.5);
	printf("문자 %c 의 ASCII코드 값은 %d 인 문자는 %d 이다.\n", 'a', 'a');
	printf("ASCII코드 값이 %d 인 문자는 %c dlek.\n", 66, 66);
	printf("%c = %d(?)\n\n", '0', '0');
	printf("%d + %d = %d\n", 1, 1, 1 + 1);
	printf("%c + %c = %c\n", '1', '1', '1' + '1');
	printf("%s\n", "This is a String");*/

	/*printf("[안내]\n");
	printf("인터넷 변경하세요\n");
	printf("통신사 관계없이\n\\현금\\ 등 40만원+ \n할인 37%% !!\b\n\n");
	printf("<최 / 대> \"2천 ~ 9천\"가능\n");
	printf("통화버튼(☎) 눌러주세요~");*/
}