#include<stdio.h>
#include<Windows.h>
#include<time.h>

#define SIZE 10
#define SEC 1000
#define MAX_COUNT 3


void Arr_1()
{
	int Arr[5];
	Arr[0] = 10;
	Arr[1] = 20;
	Arr[2] = 33;
	Arr[3] = 40;
	Arr[4] = 50;

	printf("%d %d %d %d %d\n", Arr[0], Arr[1], Arr[2], Arr[3], Arr[4]);
}
void Arr_2()
{
	int Arr[5];
	for (int i = 0; i < 5; i++)
		Arr[i] = i + 1;
	
	for (int i = 0; i < 5; i++)
		printf("%d\n", Arr[i]);
}
void Arr_3()
{
	int Arr[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° ���� �� : ", i+1);
		scanf("%d", &Arr[i]);
	}
	for (int i = 0; i < 5; i++)
		printf("%d\n", Arr[i]);
}
void Str_1()
{
	char str[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° ���� �� : ", i+1);
		scanf("%c", &str[i]);
		scanf("%*c");// \n�� �����ϴ� ��ɾ�
	}
	for (int i = 0; i < 5; i++)
		printf("%c ", str[i]);
}

void Name()
{
	char Name[SIZE];
	scanf("%s", &Name);

	for (int i = 0; i < SIZE; i++)
	{
		printf("%c",Name[i]);
	}
	printf("\n\n%s\n", Name);
}
void Arr_Max_Sum_Avg()
{
	float avg = 0;
	int max = -2147483648 , sum = 0;
	int Arr[10];

	for (int i = 0; i < 10; i++)
	{
		printf("%d��° ���� �Է� : ", i + 1);
		scanf("%d", &Arr[i]);
		sum += Arr[i];//Arr[i]�� ��簪�� ���⼭ �������°� �ƴѰ�?
		if (Arr[i] > max)//�ִ밪�� �� �����������θ� ��µǴ��� �𸣰���
			max = Arr[i];
		else if (max > Arr[i])
		{
			max = max;
		}
	
	}
	avg = sum / 10;
	printf("�ִ밪 = %d\t���� = %d\t��� = %.3f", max,sum,avg);
	
	
}

void main()
{
	/*int Arr[5];
	Arr[0] = 1;
	Arr[1] = 2;
	Arr[2] = 3;
	Arr[3] = 4;
	Arr[4] = 5;

	printf("%d %d %d %d %d", Arr[0], Arr[1], Arr[2], Arr[3], Arr[4]);*/
		
	/*int Arr[5];
	for (int i = 0; i < 5; i++)
		Arr[i] = i + 1;

	for (int i = 0; i < 5; i++)
		printf("%d", Arr[i]);*/

	/*int Arr[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° ���� �� : ", i + 1);
		scanf_s("%d", &Arr[i]);
	}
	for (int i = 0; i < 5; i++)
		printf("%d", Arr[i]);*/

	//int Arr[10];
	//int Max= -2147483648, Sum=0;
	//float Avg = 0;
	///*int i = 0;*/
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("[%d]��° ���� �Է� : ", i+1);
	//	scanf_s("%d", &Arr[i]);
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	Sum += Arr[i];
	//	if (Arr[i] > Max)
	//	{
	//		Max = Arr[i];
	//	}
	//	else if (Arr[i] < Max)
	//	{
	//		Max = Arr[i];//i�ǰ��� �����϶� 0�϶��� ���� ���´� i���� 1���ʹ� 0��ũ�ٸ� max=Arr[0]�� �Ǿ���
	//		Sum += Arr[i];
	//		Avg = Sum / 10;
	//	}
	//}
	//Avg = Sum / 10;

	//printf("�ִ밪 = %d ���� = %d ��� = %.3f", Max, Sum, Avg);
	
	/*int arr[6][3] =
	{
		{1, 1, 0},
		{0, 1, 0},
		{0, 1, 0},
		{0, 0, 0},
		{0, 0, 1},
		{1, 1, 1},
	};*/

	//int arr[5][5] = { 0 };// �迭�� ���� 0���� �ʱ�ȭ �Ѵ�
	//arr[2][2] = 1;//3°�� 3��° ĭ�� 1�� �ִ´�
	////for (int y = 0; y < 5; y++)
	////{
	////	for (int x = 0; x < 5; x++)//�Ѱ��� y���� x������ ����Ѵ�
	////		printf("%d", arr[y][x]);
	////	printf("\n");
	////}
	//arr[2][-1] = 1;
	//for (int y = 0; y < 5; y++)
	//{
	//	for (int x = 0; x < 5; x++)
	//		printf("%d", arr[y][x]);
	//	printf("\n");
	//}

	char buf[40];
	int age = 20;
	char Name[10] = "����ȣ";
	sprintf(buf, " % s���� ���̴� % d�� �Դϴ�.", Name, age);
	printf("%s",buf);

	/*printf("��ȭ �Ŵ��� ��");
	for (int i = 0; i < 3; i++)
	{
		printf(".");
	}*/

	/*printf("��ȭ �Ŵ��ߢ�");
	int OldClock = clock();
	int count = 1;
	while (count <= 3)
	{
		if (clock() - OldClock >= SEC)
		{
			count++;
			printf(".");
			OldClock = clock();
		}
	}*/

//printf("��ȭ �Ŵ��ߢ�");
//int OldClock = clock();
//int count = 0; 
//while (1)
//{
//	if (clock() - OldClock >= SEC)
//	{
//		count++;
//		if (count > MAX_COUNT)
//		{
//			count = 0;
//			system("cls");
//			printf("��ȭ �Ŵ��ߢ�");
//		}
//		else
//			printf(".");
//		OldClock = clock();
//	}
//}

//int Arr[5];
//Arr[0] = 10;
//Arr[1] = 20;
//Arr[2] = 33;
//Arr[3] = 40;
//Arr[4] = 50;
//
//printf("%d %d %d %d %d", Arr[0],Arr[1],Arr[2],Arr[3],Arr[4]);

//int Arr[5];
//for (int i = 0; i < 5; i++)
//	Arr[i] = i + 1;
//
//for (int i = 0; i < 5; i++)
//	printf("%d", Arr[i]);

//int Arr[5];
//for (int i = 0; i < 5; i++)
//{
//	printf("%d��° ���� �� : ", i+1);
//	scanf("%d", &Arr[i]);
//}
//for (int i = 0; i < 5; i++)
//	printf("%d\n", Arr[i]);
//Arr_1();
//Arr_2();
//Arr_3();
//Str_1();
//Name();
Arr_Max_Sum_Avg();
}