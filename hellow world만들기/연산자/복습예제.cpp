#include<stdio.h>

void main()
{
	/*int num1, num2;
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d",&num1,&num2);

	printf("%d + %d = %d\n", num1,num2,num1+num2);
	printf("%d - %d = %d\n", num1,num2,num1-num2);
	printf("%d * %d = %d\n", num1,num2,num1*num2);
	printf("%d / %d = %d\n", num1,num2,num1/num2);
	printf("%d %% %d = %d\n", num1,num2,num1%num2);

	num1 *= num2 - 3 * 2;
	printf("num1 = %d\nnum2 = %d\n", num1,num2);
	
	num2 = (num1++) * num2;
	printf("======��ġ======\n");
	printf("num1 = %d\nnum2 = %d\n", num1,num2);
	num2 = (++num1) * num2;
	printf("======��ġ======\n");
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

	//num1 % 2 == 0 ? printf("%d�� ¦��\n", num1) : printf("%d�� Ȧ��\n", num1);
	//num2 % 2 == 0 ? printf("%d�� ¦��\n", num2) : printf("%d�� Ȧ��\n", num2);

	/*int num1;
	scanf_s("%d", &num1);
	num1 % 5 == 0 ? printf("%d�� 5�� ����Դϴ�\n", num1) : printf("%d�� 5�� ����� �ƴմϴ�\n",num1);

	int kor, eng, math, sum, ave;
	printf("���� ���� ���� ������ �Է��Ͻÿ� : ");
	scanf_s(" %d %d %d", &kor, &eng, &math);
	sum = kor + eng + math;
	ave = sum / 3;
	ave >= 60 ? (printf("�հ�\n")) : printf("���հ�\n");*/

	/*int num1, num2;
	scanf_s("%d%d", &num1,&num2);
	num1 > num2 ? printf("%d�� �� ū��\n", num1) : printf("%d�� �� ū��\n", num2);

	int num3;
	scanf_s("%d", &num3);
	num3 % 3 == 0 && num3 % 2 == 0 ? printf("%d�� 3�� ����̸� ¦���̴�\n", num3) : printf("����� �ƴϴ�\n");*/

	/*int num4; 
	scanf_s("%d", &num4);
	num4 % 5 == 0 || num4 % 7 == 0 ? printf("%d�� 5�ǹ�� �ų� 7�ǹ���̴�", num4) : printf("%d�� 5�ǹ���ų� 7�ǹ���� �ƴϴ�");*/

	/*int  num = 11;
	if (num % 2 == 0)
	{
		printf("%d�� ¦���Դϴ�\n", num);
	}
	else
	{
		printf("%d�� Ȧ���Դϴ�\n", num);
	}
	
	if (num % 2 != 0)
	{
		printf("Ȧ�� �Դϴ�\n"), printf("%d", num);
		
	}*/
	/*int age;
	printf("���̸� �Է��Ͻÿ� : ");
	scanf_s("%d", &age);
	
	if (age > 20)
	{
		printf("���� �Դϴ�");
	}
	else
	{
		printf("�̼����� �Դϴ�");
	}*/
	/*int num;
	printf("���� �Է� ");
	scanf_s("%d", &num);
	if (num % 2 == 0 && num % 3 == 0)
	{
		printf("%d�� ¦���̸� 3�ǹ���Դϴ�", num);
	}*/
	/*if (num % 2 == 0)
	{
		printf("%d�� ¦���Դϴ�\n", num);
		if (num % 3 == 0)
		{
			printf("%¦���̸� 3�ǹ���Դϴ�");
		}
	}*/
	/*int num;
	printf("���� �Է� ");
	scanf_s("%d", &num);*/
	/*if (num % 3 == 0)
	{
		printf("%d�� 3�� ����Դϴ�", num);
	}*/
	/*if (num > 0)
	{
		printf("%d�� ���밪�� %d �Դϴ�", num, num);
	}
	else 
	{
		printf("%d�� ���밪�� %d�Դϴ�", num, -num);
	}*/
	/*if (num % 2 == 0)
	{
		printf("%d�� ¦�� �Դϴ�", num);
	}
	else
	{
		printf("%d�� Ȧ�� �Դϴ�", num);
	}*/
	int num1, num2;
	printf("���� �Է� :");
	scanf_s("%d%d", &num1,&num2);
	/*if (num1 > num2 && num1 > num3)
	{
		printf("���� ū���� %d�Դϴ�\n", num1);
	}
	if (num2 > num1 && num2 > num3)
	{
		printf("���� ū���� %d�Դϴ�\n", num2);
	}
	if (num3 > num1 && num3 > num2)
	{
		printf("���� ū���� %d�Դϴ�\n", num3);
	}*/
	if (num1 > num2 && num1 % 2 == 0)
	{
		printf("%d�� �� ũ�� ¦�� �Դϴ�", num1);
	}
	else if (num2 > num1 && num2 % 2 == 0)
	{
		printf("%d�� �� ũ�� ¦�� �Դϴ�", num2);
	}
	else
	{
		printf("���ǿ� �������� �ʽ��ϴ�");
	}
}
