#include<stdio.h>
#include<string.h>

void GoGoDan(FILE* f)//gogodan[i][j]�� �Ű������� ����ؾ��� //*gogodan�̵�����
{


	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (j == 0)
			{
				fprintf(f, "========%d��========\n", i + 2);
			}
			else if (j == 10)
			{
				fprintf(f, "=====================\n\n");
			}
			else
				fprintf(f, "%d x %d = %d\n", i + 2, j, (i + 2) * j);
		}
	}
	fclose(f);
}

typedef struct people
{
	char name[10];
	int age;
	char phonnumber[20];
} People;

void main()
{
	/*FILE* f = fopen("�۾���.txt", "w");
	int num = 123;
	fprintf(f, "���� ���� ���1 %d ", num);
	fclose(f);*/
	/*FILE* f = fopen("Test.txt","a");
	int num = 123;
	fprintf(f,"�߰� ��� %d",num);
	fclose(f);*/
	//int i,j = 0;
	////char gogodan[8][11] ;//*gogodan[][]�ּҸ� ��� ������
	//
	//FILE* f = fopen("GoGoDan.txt","w");
	//fprintf(f,"%s", GoGoDan(gogodan);//gogodan[][]���� *gogodan[][]�� �����Ҽ��ִ� �ּҸ� ������ �ֱ� ������ �迭�� �Ű������� ����ؾ���
	/*for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (j == 0)
			{
				fprintf(f, "========%d��========\n", i + 2);
			}
			else if (j == 10)
			{
				fprintf(f, "=====================\n\n");
			}
			else
				fprintf(f, "%d x %d = %d\n", i + 2, j, (i + 2) * j);
		}
	}
	fclose(f);*/
	/*GoGoDan(f);*/
	//FILE* f = fopen("Text.txt", "w");
	//int num;
	//fprintf(f,"1 2 3 4");
	//fclose(f);
	//f = fopen("Text.txt", "r");
	//if (f == NULL)
	//	printf("�ش� �̸��� ������ �����ϴ�.");
	//else
	//{
	//	while (!feof(f))// '������' �Լ��� �����ϴ� ��쿡 true�� �����մϴ�.
	//	{
	//		fscanf(f, "%d", &num);
	//		printf("%d", num);
	//	}
	//	fclose(f);
	//}
	/*People p1 = {"A",20,"010-1234-5678"};
	FILE* f = fopen("People.txt", "w");
	fprintf(f,"%s %d %s", p1.name,p1.age,p1.phonnumber);
	fclose(f);
	f = fopen("People.txt", "r");
	if (f == NULL)
		printf("�ش� �̸��� ������ �����ϴ�.");
	else
	{
		fscanf(f, "%s", p1.name);
		fscanf(f, "%d", &p1.age);
		fscanf(f, "%s", p1.phonnumber);
		printf("�̸� : %s \n���� : %d\n", p1.name, p1.age);
		printf("�޴�����ȣ : %s\n", p1.phonnumber);
		fclose(f);
	}*/
	People p1 = { "A",20,"010-1234-5678" };
	FILE* f = fopen("People.txt","w");
	char buf[256];
	fprintf(f,"�̸� : %s���� : %d\n", p1.name,p1.age);
	fprintf(f,"�޴��� ��ȣ : %s", p1.phonnumber);
	fclose(f);
	f = fopen("People.txt", "r");
	/*if (f == NULL)
	{
		printf("�ش� �̸��� ������ �����ϴ�.");
	}
	else
	{
		while (!feof(f))
		{
			fgets(buf, sizeof(buf), f);
			printf("%s\n",buf);
		}
		fclose(f);
	}*/

	if (f == NULL)
		printf("�ش� �̸��� ������ �����ϴ�.");
	else
	{
		fread(buf, sizeof(buf), 1, f);
		printf("%s\n",buf);
	}
	fclose(f);
}