#include <stdio.h>

void While(int n)
{
	printf("%d\n",n);
	if (n <= 0)
		return;
	else
		While(n - 1);
	printf("%d\n",n);
}

//void B(int n)
//{
//	printf("%d\n", n);
//}
//void A(int n = 8)
//{
//	printf("%d\n", n);
//	B(n - 1);
//	printf("%d\n", n);
//}

int Sum(int num)//��ȯ�� ������ ������ //���ϵ��� ������� �Ű����� 1���� ���ʿ���
{
	if (num == 0)
	{
		return num;
	}

	else
	{
		return Sum(num - 1) + num;
	}
}
//1. num = 2
//2. num = 1 
//3. num = 0
//2. 0 + num(1)
//1. 1 + num(2)
int Num0(int num)
{
	if (num == 0) 
		return num;
}
int Num1(int num)
{
	return Num0(num - 1) + num;//num=1
}
int Num2( int num)
{
	
	return Num1(num - 1)+num;//num=2
	
}
int Num3(int num)
{
	/*if (num == 0) return num;*/
	return Num2(num - 1) + num;//num=3 ���ڷ� ���� ���ڸ� num2�Լ��� ���� ������ num-1�� ���� ��ȯ�ޱ����ؼ� 
	/*int sum;
	sum*/
	/*return*/ /*sum;*/
}

//���ϵ��� ������� �Ű����� 1���� ���ʿ��� ->num=0 �̰� num++�� �ǵ��� �ؾ��ϸ� if(num==�Է¹�����)�̵Ǹ� �������
int Sumadd(int num, int i)
{

}


void main()
{
	/*While(10);

	return;*/

	int num = 0;
	int sum = 0;

	printf("1. ���� �Է� : ");
	scanf("%d", &num);
	//for (int i = 1; i <num+1; i++)//����Լ��� �Լ��ȿ� �Լ���
	//{
	//	sum += i;
	//}
	/*while (0<num)
	{
		sum += num;
		num--;
	}*/

	printf("���� �հ� : %d", Sum(num));
}