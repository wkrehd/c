#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#define LOTTO_NUM 6
void Lotto()
{
	int RNum;
	int Lotto[LOTTO_NUM] = { 0 };

	srand(time(NULL));
	while (1)
	{
		system("cls");
		for (int i = 0; i < LOTTO_NUM; i++)
		{
			RNum = rand() % 45 + 1;//0~44���� ������ ������������ +1�� �ϸ� 1~45���� ������ ���� ��
			Lotto[i] = RNum;
			//�ݺ������� ���ǰ����� ��ü�� ���ϱ�
			for (int j=i-1;j>=0; j--)//Lotto[i]���� Lotto[j]���� ���ϵ� j�� i-1�ǰ����� 0���� �ݺ��Ѵ�
			{
				if (Lotto[i] == Lotto[j])
					i--;		
			}
		}
		for (int i = 0; i < LOTTO_NUM; i++)
			printf("%d.%d\n", i+1,Lotto[i]);
		system("pause");
	}

}

void main()
{
	Lotto();
}