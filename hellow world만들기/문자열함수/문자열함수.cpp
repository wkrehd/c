#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//���ڿ� ���� ��ȯ
int Strlen(char str[])//�����迭�� ���� �̿��Ͽ�
{
	int num = 0;
	while (1)//���� 0�̸� �ݺ��� �����
	{
		if (str[num]==0)
		{
			break;
		}

		num++;
	}
	//for (int i = 0; i < 9; i++)
	//{
	//	if (str[i] != 0)//���� 0�� �ƴϸ�
	//	{
	//		num++;//num�� ������Ų�� 
	//	}
	//}
	/*printf("%d", num);*/
	return num;
}

//���ڿ��� �����ϴ� �Լ�
void Strcpy(char name[],char my_name[])
{
	int num = 0;
	while (1)
	{
		name[num] = my_name[num];
		num++;
		if (my_name[num] == 0)
			break;
	}
}
//���ڿ��� �߰��ϴ� �Լ�
void Strcat(char str[], char str1[])
{
	int num1, num2;
	num1 = Strlen(str);
	num2 = Strlen(str1);

	for (int i = num1, j = 0; i < num1 + num2 && j < num2; i++, j++)
	{
		str[i] = str1[j];//char �ϳ��ǰ��� �ǹ��ϸ� �׷��� ������ �߰��� ���ڵ� char������ �־����
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

	//strlen �����Ҵ��ϴ°�
	//int num=0;
	//scanf("%d", &num);

	//char *str=(char*)malloc(sizeof(char) * num);//ĳ���������� �����Ҵ��ؾߵ�
	//strcpy_s(str, num - 1,"Hello");
	////char str[]= "Hello";
	//Strlen(str);//str �迭�� �ִ� ���� �ʿ��ϱ⶧���� �迭�� �Ű������� ���
	//printf("%d", Strlen(str));

	//free(str);

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

	/*char name[10]={0};
	char my_name[10] = "Kimjiun";

	Strcpy(name,my_name);
	printf("%s", name);*/


	//char str[10] = "Hello"; //str[5] = '^' str[6] = '^' str[7] = '\0';
	///*int num1,num2;*/
	//char str1[10] = "^^^";
	/*printf("%s\n", str);
	strcat(str, "^^");
	printf("%s\n", str);*/
	
	//num1 = Strlen(str);//5
	///*num1= Strlen(str);*/
	//num2 = Strlen(str1);//2
	///*num2= Strlen(str1);*/
	//for (int i = num1, j=0; i < num1 + num2 && j<num2; i++,j++)
	//{
	//	str[i] = str1[j];//
	//}

	//char str[10] = "Hello"; //str[5] = '^' str[6] = '^' str[7] = '\0';
	///*int num1,num2;*/
	//char str1[10] = "^^^";
	//Strcat(str,str1);
	//printf("%s\n", str);

	char str2[10] = "string!!";
	char str3[10] = "string";

	printf("%s == %s : %d\n", str2,str3,strcmp(str2,str3));
	printf("%s == %s : %d\n", "abc","abc",strcmp("abc","abc"));
	printf("%s == %s : %d\n", "abc", "def", strcmp("abc","def"));
}