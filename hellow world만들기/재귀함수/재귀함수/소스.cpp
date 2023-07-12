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

int Sum(int num)//반환된 값들을 빼도록 //더하도록 만들려면 매개변수 1개가 더필요함
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
	return Num2(num - 1) + num;//num=3 인자로 받은 숫자를 num2함수에 넣은 이유는 num-1의 값을 반환받기위해서 
	/*int sum;
	sum*/
	/*return*/ /*sum;*/
}

//더하도록 만들려면 매개변수 1개가 더필요함 ->num=0 이고 num++가 되도록 해야하며 if(num==입력받은값)이되면 멈춰야함
int Sumadd(int num, int i)
{

}


void main()
{
	/*While(10);

	return;*/

	int num = 0;
	int sum = 0;

	printf("1. 정수 입력 : ");
	scanf("%d", &num);
	//for (int i = 1; i <num+1; i++)//재귀함수로 함수안에 함수로
	//{
	//	sum += i;
	//}
	/*while (0<num)
	{
		sum += num;
		num--;
	}*/

	printf("누적 합계 : %d", Sum(num));
}