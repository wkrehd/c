#include<stdio.h>
#include<string.h>

int Strlen(char str)
{
	int num = 0;
	for (int i = 0; i < 9; i++)
	{
		if (str[i] != 0)
		{
			num++;
		}
	}
	return num;
}

void main()
{
	char str[10] = "Hello";
	/*printf("%s���ڿ��� ���� : %d\n", str,strlen(str));*/

	//Strlen ����� ���ڼ� ���� ��ȯ�ϴ°� �迭���ۺ��� 0�̾ƴѰ��� 1���� ��ȯ�Ͽ� ���ϱ�
	/*for (int i = 0; i < 9; i++)
	{
		int num = 0;
		if (str[i] != 0)
		{
			num++;
		}
	}*/
	Strlen(str[10]);
}