#include<stdio.h>

//�迭�� ���Ե� ������ ������������ ���� �Ͽ� ��� �ϴ� �Լ�
void Risenum(int* risenum)
{
	for (int i = 0; i < 8; i++)//i�� ��ü�μ� �񱳸� ��
	{
		for (int j = i + 1; j < 9; j++)//j�� ������μ� �񱳸���
		{

		}
	}
}

//���ڸ� �Է� �޾� 1���� ������ ������ ���� ���ϴ� �Լ�
void Sum(int num3, int* sum)
{
	*sum = 0;//�ʱ�ȭ ���� ������ ������ ������ ������ �� ��?
	for (int i = 1; i < num3 + 1; i++)
	{
		*sum += i;
	}
}
//�ִ� �ּڰ��� ���ϴ� �Լ�
void MaxMin(int num1,int num2,int *max,int *min)
{
	if (num1 > num2)
	{
		*max = num1;//*max���� �ʱ�ȭ �����ʾƵ� ������ �� 
		*min = num2;
	}
	else
	{
		*max = num2;
		*min = num1;
	}
}

//�� ū���� int *max�� �����ϴ� �Լ�
void MoreNum(int num1,int num2, int *max)//num1,num2�ּҸ� ���ڷ� �޾Ƽ� �����
{
	//�ּҸ� �̿��Ͽ� ���� �˾Ƴ��� �װ��� ���Ѵ�?
	//int* num = 0;
	if (num1 > num2)
		*max = num1;
	else
		*max = num2;
}
//�ҹ��ڸ� �빮�ڷ� �ٲ��ִ� �Լ�
void ConverToUppercase(char *str)
{
	for (int i = 0; i < 10; i++)
	{
		if ((*(str+i)) >= 'a' && (*(str+i)) <= 'z')
			(*(str+i)) -= 32;
	}
}
//num1��num2�� ���� �ٲٴ� �Լ�
void Swap(int *num1, int *num2)
{
	printf("������ num1 = %d num2 = %d\n", *num1,*num2);
	int tmp = *num1;//tmp������ *num1 ���� �����Ѵ�
	*num1 = *num2;//*num2���� *num1�� �����Ѵ�
	*num2 = tmp;//tmp (*num1�ǰ��� �����̵�) ���� *num2�� �����Ѵ�
	printf("������ num1 = %d num2 = %d\n\n", *num1,*num2);//*num1�� *num2���� ���ԵǾ��� *num2�� tmp �� *num1���� ���Ե�
}
//num1,num2���� 5�� ���ϴ� �Լ�
void Sum(int num1, int num2)
{
	printf("������ num1 = %d num2 = %d\n", num1,num2);
	num1 += 5;
	num2 += 5;
	printf("������ num1 = %d num2 = %d\n\n", num1,num2);
}

void main()
{
	//int num;
	//int* pnum = &num;//num�� �ּҸ� pnum�� �����Ѵ� �׷��� pnum�� num�� �ּҴ� ���ƾ� �ϴ°� �ƴѰ�?
	//*pnum = 10;
	//printf("num���ּ� = %p\n", &num);
	//printf("pnum�� ������ �ִ� �� = %p\n", pnum);//���δ� �ּҸ� ȣ���� �̻���
	//printf("num = %d\n", num);
	//printf("*pnum = %d\n", *pnum);
	//printf("pnum�� �ּ� = %p", &pnum);

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

	//printf("pch-1 = %p���� pch = %p���� pch+1 = %p����\n", pch-1,pch,pch+1);
	//printf("num-1 = %p���� num = %p���� num+1 = %p����\n", pnum-1,pnum,pnum+1);

	//int num = 10, *pnum;
	//char ch = 'a', * pch;

	//pnum = &num;
	//pch = &ch;

	//printf("char �ڷ����� ũ�� = %d\n", sizeof(ch));
	//printf("int �ڷ����� ũ�� = %d\n", sizeof(num));
	//printf("char* �ڷ����� ũ�� = %d\n", sizeof(pch));//������ ������ �ڷ���ũ��=8?
	//printf("int* �ڷ����� ũ�� = %d\n", sizeof(pnum));//ch

	//int arr[5] = { 10,20,30,40,50 };
	//for (int i = 0; i < 5; i++)
	//	printf("�迭����[%d]�� �ּ� = %p, �迭����[%d]�� �� = %d\n", i,&arr[i],i,arr[i]);
	//printf("\n\n");
	//for (int i = 0; i < 5; i++)//&arr[i] �� arr+i�� ���� ������ ���� �ּҰ� ���� �����̴�
	//	printf("�迭����[%d]�� �ּ� = %p, �迭����[%d]�� �� = %d\n", i,arr+i,i,*(arr+i));

	/*int arr[5] = { 10,20,30,40,50 };
	int *parr = arr;
	for (int i = 0; i < 5; i++)
		printf("�迭����[%d]�� �ּ� = %p, �迭����[%d]�� �� = %d\n", i,parr+i,i,*(parr+i));
	printf("\n\n");
	for (int i = 0; i < 5; i++)
		printf("�迭����[%d]�� �ּ� = %p, �迭����[%d]�� �� = %d\n", i,&parr[i],i,parr[i]);*/

	/*int num1 = 10, num2 = 20;
	printf("�Լ� ȣ���� num1 = %d num2 = %d\n\n", num1,num2);
	Sum(num1, num2);
	printf("�Լ� ȣ���� num1 = %d num2 = %d\n", num1,num2);*/

	//int num1 = 10, num2 = 20;
	//printf("�Լ� ȣ���� num1 = %d num2 = %d\n\n", num1,num2);
	//Swap(&num1, &num2);//&num1�� �ּ� int* num1�� �ּҺ���  int *num1�� &num1�ּҸ� �����ϰڴ�
	////�ּҺ����� ���� ������ �ּ����ڰ� �ʿ���
	//printf("�Լ� ȣ���� num1 = %d num2 = %d\n\n", num1,num2); 

	//?
	/*char string[] = "string";
	printf("�Լ� ȣ�� �� = %s\n", string);
	ConverToUppercase(string);
	printf("�Լ� ȣ�� �� = %s\n", string);*/

	//char string[] = "string";//�迭�� �����ʹ� ���������� ����
	//printf("�Լ� ȣ�� �� = %s\n", string);
	//ConverToUppercase(string);
	//printf("�Լ� ȣ�� �� = %s\n", string);

	//int num1, num2, max;
	//printf("�� ���� �Է� �Ͻÿ� : ");
	//scanf_s("%d%d", &num1,&num2);//�ּҸ� ����
	//MoreNum(num1, num2, &max);//�� �Լ��� �Ű������� num1,num2�� �ּҰ� �����ΰ�?
	//printf("%d", max);

	/*int num1, num2, max, min;
	printf("�� ���� �Է� �Ͻÿ� : ");
	scanf_s("%d%d", &num1,&num2);
	MaxMin(num1, num2, &max, &min);
	printf("�ִ� : %d\n�ּڰ� : %d\n", max,min);*/

	int num3, sum;
	printf("�� ���� �Է� �Ͻÿ� : ");
	scanf_s("%d", &num3);
	Sum(num3, &sum);
	printf("%d", sum);


	int risenum[9];
	for (int i = 0; i < 8; i++)
	{
		scanf_s("%d" ,&risenum[i]);
		Risenum(&risenum[i]);
	}
		
}
