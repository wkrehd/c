#include<stdio.h>

void main()
{ 
	char ch;

	printf("���α׷����� ���? y , n�� �Է��Ͻÿ�\n");
	scanf_s("%c", &ch);
	ch = 'y';
	(ch == 1) ? printf("�ϰ� �� �˾�!\n", ch) : printf("�� �Ƴ�!\n", ch);
	
	/*int Num1, Num2, Num3;
	float result;


	printf("1.������ �Է��Ͻÿ� : ");
	scanf_s("%d", &Num1);
	(Num1 % 5 == 0) ? printf("%d�� 5�ǹ���Դϴ�\n", Num1) : printf("%d�� 5�ǹ���� �ƴմϴ�\n", Num1);
	
	printf("2.�� ������ ������ �Է��Ͻÿ�\n");
	printf("���� ���� : ");
	scanf_s("%d", &Num1);
	printf("���� ���� : ");
	scanf_s("%d", &Num2);
	printf("���� ���� : ");
	scanf_s("%d", &Num3);

	result = (Num1 + Num2 + Num3) / 3.0f;
	(result >= 60) ? printf("��� %.2f�հ�\n", result) : printf("��� %.2f���հ�\n", result);

	printf("3.�� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &Num1, &Num2);
	(Num1 > Num2 == 1) ? printf("ū �� : %d\n", Num1) : printf("ū �� : %d\n", Num2);

	printf("4.������ �Է��Ͻÿ� : ");
	scanf_s("%d", &Num1);

	result = (Num1 % 3 == 0) && (Num1 % 2 == 0);
	result ? printf("%d�� ¦���̸� 3�ǹ�� �Դϴ�.\n", Num1) : printf("���� ����\n");

	printf("5.������ �Է��Ͻÿ� :");
	scanf_s("%d", &Num1);

	result = (Num1 % 5 == 0) || (Num1 % 7 == 0);
	result ? printf("%d�� 5�ǹ�� �̰ų� 7�ǹ�� �Դϴ�.\n",Num1 ) : printf("���� ����\n");*/

	/*int Num1 = 10, Num2 = 5;

	(Num1 % 2 == 0) ? printf("%d�� ¦��\n", Num1) : printf("%d�� Ȧ��\n", Num1);
	(Num2 % 2 == 0) ? printf("%d�� ¦��\n", Num2) : printf("%d�� Ȧ��\n", Num2);*/
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
	//printf("�� ������ �Է��Ͻÿ� :");
	//scanf_s("%d%d", &Num1, &Num2);

	//Num2 = (Num1++) * Num2;
	//printf("=====��ġ=====\n");
	//printf("Num1 = %d\nNum2 = %d\n\n", Num1, Num2);
	//Num2 = (++Num1) * Num2;
	//printf("=====��ġ=====\n");
	//printf("Num1 = %d\nNum2 = %d\n", Num1, Num2);
	///*int Num1, Num2;*/
	//printf("�� ������ �Է��Ͻÿ� :");
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
	//printf("���� A���� �Է��Ͻÿ� : ");
	//scanf_s("%d", &num1);
	////printf("%d\n", num1 << 1);


	//printf("���� B���� �Է��Ͻÿ� : ");
	//scanf_s("%d", &num2);

	//num1 = num2++;
	//printf("A + B : %d", num1);


	/*int num1, num2, num3;
	float Fnum;
	printf("���������� �Է��Ͻÿ� : ");
	scanf_s("%d", &num1);
	printf("���������� �Է��Ͻÿ� : ");
	scanf_s("%d", &num2);
	printf("���������� �Է��Ͻÿ� : ");
	scanf_s("%d", &num3);*/
	/*printf("�������� : %d\n", num1);
	printf("�������� : %d\n", num2);
	printf("�������� : %d\n", num3);
	printf("�հ����� : %d\t", num1 + num2 + num3 );
	printf("������� : %.2f", (float)(num1 + num2 + num3)/3);*/
	/*float Fnum;
	printf("�Ҽ������� �Է��Ͻÿ� : ");
	scanf_s("%f", &Fnum);
	printf("�Ҽ����� : %.2f", Fnum);*/

	//int num;
	//char ch;
	//printf("���Ϲ��ڸ� �Է��Ͻÿ� :");
	//scanf_s("%c", &ch);
	////printf("������ �Է��Ͻÿ� :");
	////scanf_s("%d", &num );
	//printf("%c", ch + 1);
	/*int num1, num2;
	float Fnum;
	printf("�Ǽ� �Է� :");
	scanf_s("%f", &Fnum);
	printf("���� �ΰ� �Է� :");
	scanf_s("%d %d", &num1, &num2);
	printf("num1 = %d\nnum2 = %d\nFnum=%f\n", num1, num2, Fnum);*/
	/*int num1, num2, sum;
	printf("�� ������ �Է��Ͻÿ� :");
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
	/*printf("���� ���̴� %d�� �Դϴ�. \n", age);
	printf("���� �����Դ� %.1f(kg)�Դϴ�. \n", weight);
	printf("���� Ű�� %.2f(cm)�Դϴ�. \n", height);*/


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

	printf("�Ǽ��� ��� : %f\n", 10.5);
	printf("������ ��� : %d\n", 10.5);
	printf("�Ǽ��� ��� : %f\n\n", 10);
	printf("�Ǽ��� ��� : %.2f\n\n", 10.5);
	printf("���� %c �� ASCII�ڵ� ���� %d �� ���ڴ� %d �̴�.\n", 'a', 'a');
	printf("ASCII�ڵ� ���� %d �� ���ڴ� %c dlek.\n", 66, 66);
	printf("%c = %d(?)\n\n", '0', '0');
	printf("%d + %d = %d\n", 1, 1, 1 + 1);
	printf("%c + %c = %c\n", '1', '1', '1' + '1');
	printf("%s\n", "This is a String");*/

	/*printf("[�ȳ�]\n");
	printf("���ͳ� �����ϼ���\n");
	printf("��Ż� �������\n\\����\\ �� 40����+ \n���� 37%% !!\b\n\n");
	printf("<�� / ��> \"2õ ~ 9õ\"����\n");
	printf("��ȭ��ư(��) �����ּ���~");*/
}