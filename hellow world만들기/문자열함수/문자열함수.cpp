#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//���ڿ� ���� ��ȯ
void Strlen(char str[])//�����迭�� ���� �̿��Ͽ�
{
	int num = 0;
	for (int i = 0; i < 9; i++)
	{
		if (str[i] != 0)//���� 0�� �ƴϸ�
		{
			num++;//num�� ������Ų�� 
		}
	}
	printf("%d", num);
}

//���ڿ��� �����ϴ� �Լ�
void Strcpy(char name[],char my_name[])
{
	for (int i = 0; i < 9; i++)
	{
		name[i] = my_name[i];
		printf("%c", name[i]);
	}
}

void main()
{
	/*char str[10] = "Hello";*/
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

	//int num=0;
	//scanf("%d", &num);
	//char str[num];//�������̹迭 VLA�� �־�� ���� �ȵɰ�� �����Ҵ��� �������
	//char str[10]= "Hello";
	//Strlen(str);//str �迭�� �ִ� ���� �ʿ��ϱ⶧���� �迭�� �Ű������� ���

	/*char name[10];
	char my_name[10] = "Kimjiun";

	strcpy(name, my_name);
	printf("name : %s\n", name);
	printf("my_name : %s\n",my_name);

	for (int i = 0; i < 9; i++)
	{
		name[i] = my_name[i];
		printf("%c", name[i]);
	}*/

	/*char name[10];
	char my_name[10] = "Kimjiun";

	Strcpy(name,my_name);*/

	char str[10] = "Hello";
	printf("%s\n", str);
	strcat(str, "^^");
	printf("%s\n", str);
	
	for (int i = 0; i < 9; i++)
	{
		if (str[i] = 0)//�߰��Ǵ� ���̸�ŭ �߰��Ǿ����
		{

		}
	}
}