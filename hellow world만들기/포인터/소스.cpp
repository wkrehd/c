#include<stdio.h>

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
}
