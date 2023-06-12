#include<stdio.h>

//소문자를 대문자로 바꿔주는 함수
void ConverToUppercase(char *str)
{
	if ((*str) >= 'a' && (*str) <= 'z')
		(*str) -= 32;
}
//num1과num2의 값을 바꾸는 함수
void Swap(int *num1, int *num2)
{
	printf("변경전 num1 = %d num2 = %d\n", *num1,*num2);
	int tmp = *num1;//tmp변수에 *num1 값을 대입한다
	*num1 = *num2;//*num2값을 *num1에 대입한다
	*num2 = tmp;//tmp (*num1의값이 대입이된) 값을 *num2에 대입한다
	printf("변경후 num1 = %d num2 = %d\n\n", *num1,*num2);//*num1은 *num2값이 대입되었고 *num2는 tmp 즉 *num1값이 대입됨
}
//num1,num2값에 5를 더하는 함수
void Sum(int num1, int num2)
{
	printf("변경전 num1 = %d num2 = %d\n", num1,num2);
	num1 += 5;
	num2 += 5;
	printf("변경후 num1 = %d num2 = %d\n\n", num1,num2);
}

void main()
{
	//int num;
	//int* pnum = &num;//num의 주소를 pnum에 대입한다 그러면 pnum과 num의 주소는 같아야 하는게 아닌가?
	//*pnum = 10;
	//printf("num의주소 = %p\n", &num);
	//printf("pnum이 가지고 있는 값 = %p\n", pnum);//값인대 주소를 호출함 이상함
	//printf("num = %d\n", num);
	//printf("*pnum = %d\n", *pnum);
	//printf("pnum의 주소 = %p", &pnum);

	/*int Num1 = 10, Num2 = 20, * pNum;
	pNum = &Num2;
	*pNum += 15;
	*pNum -= *pNum - Num1++;
	pNum = &Num1;
	Num1 *= *pNum;
	(*pNum)--;
	printf("Num1 = %d,Num2 = %d,*pNum = %d", Num1, Num2, *pNum);*/

	//int num = 10, *pnum;
	//char ch = 'a', * pch;

	//pnum = &num;
	//pch = &ch;

	//printf("pch-1 = %p번지 pch = %p번지 pch+1 = %p번지\n", pch-1,pch,pch+1);
	//printf("num-1 = %p번지 num = %p번지 num+1 = %p번지\n", pnum-1,pnum,pnum+1);

	//int num = 10, *pnum;
	//char ch = 'a', * pch;

	//pnum = &num;
	//pch = &ch;

	//printf("char 자료형의 크기 = %d\n", sizeof(ch));
	//printf("int 자료형의 크기 = %d\n", sizeof(num));
	//printf("char* 자료형의 크기 = %d\n", sizeof(pch));//포인터 변수의 자료형크기=8?
	//printf("int* 자료형의 크기 = %d\n", sizeof(pnum));//ch

	//int arr[5] = { 10,20,30,40,50 };
	//for (int i = 0; i < 5; i++)
	//	printf("배열원소[%d]의 주소 = %p, 배열원소[%d]의 값 = %d\n", i,&arr[i],i,arr[i]);
	//printf("\n\n");
	//for (int i = 0; i < 5; i++)//&arr[i] 와 arr+i가 같은 이유는 시작 주소가 같기 때문이다
	//	printf("배열원소[%d]의 주소 = %p, 배열원소[%d]의 값 = %d\n", i,arr+i,i,*(arr+i));

	/*int arr[5] = { 10,20,30,40,50 };
	int *parr = arr;
	for (int i = 0; i < 5; i++)
		printf("배열원소[%d]의 주소 = %p, 배열원소[%d]의 값 = %d\n", i,parr+i,i,*(parr+i));
	printf("\n\n");
	for (int i = 0; i < 5; i++)
		printf("배열원소[%d]의 주소 = %p, 배열원소[%d]의 값 = %d\n", i,&parr[i],i,parr[i]);*/

	/*int num1 = 10, num2 = 20;
	printf("함수 호출전 num1 = %d num2 = %d\n\n", num1,num2);
	Sum(num1, num2);
	printf("함수 호출후 num1 = %d num2 = %d\n", num1,num2);*/

	//int num1 = 10, num2 = 20;
	//printf("함수 호출전 num1 = %d num2 = %d\n\n", num1,num2);
	//Swap(&num1, &num2);//&num1은 주소 int* num1은 주소변수  int *num1에 &num1주소를 복사하겠다
	////주소변수를 쓰기 때문에 주소인자가 필요함
	//printf("함수 호출후 num1 = %d num2 = %d\n\n", num1,num2); 

	//?
	char string[] = "string";
	printf("함수 호출 전 = %s\n", string);
	ConverToUppercase(string);
	printf("함수 호출 후 = %s\n", string);
}
