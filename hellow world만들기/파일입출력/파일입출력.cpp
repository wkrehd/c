#include<stdio.h>
#include<string.h>

void GoGoDan(FILE* f)//gogodan[i][j]을 매개변수로 사용해야함 //*gogodan이들어가야함
{


	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (j == 0)
			{
				fprintf(f, "========%d단========\n", i + 2);
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
	/*FILE* f = fopen("글쓰기.txt", "w");
	int num = 123;
	fprintf(f, "덮어 쓰기 모드1 %d ", num);
	fclose(f);*/
	/*FILE* f = fopen("Test.txt","a");
	int num = 123;
	fprintf(f,"추가 모드 %d",num);
	fclose(f);*/
	//int i,j = 0;
	////char gogodan[8][11] ;//*gogodan[][]주소를 담는 포인터
	//
	//FILE* f = fopen("GoGoDan.txt","w");
	//fprintf(f,"%s", GoGoDan(gogodan);//gogodan[][]값은 *gogodan[][]에 접근할수있는 주소를 가지고 있기 때문에 배열을 매개변수로 사용해야함
	/*for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (j == 0)
			{
				fprintf(f, "========%d단========\n", i + 2);
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
	//	printf("해당 이름의 파일이 없습니다.");
	//else
	//{
	//	while (!feof(f))// '마지막' 함수가 실패하는 경우에 true를 리턴합니다.
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
		printf("해당 이름의 파일이 없습니다.");
	else
	{
		fscanf(f, "%s", p1.name);
		fscanf(f, "%d", &p1.age);
		fscanf(f, "%s", p1.phonnumber);
		printf("이름 : %s \n나이 : %d\n", p1.name, p1.age);
		printf("휴대폰번호 : %s\n", p1.phonnumber);
		fclose(f);
	}*/
	People p1 = { "A",20,"010-1234-5678" };
	FILE* f = fopen("People.txt","w");
	char buf[256];
	fprintf(f,"이름 : %s나이 : %d\n", p1.name,p1.age);
	fprintf(f,"휴대폰 번호 : %s", p1.phonnumber);
	fclose(f);
	f = fopen("People.txt", "r");
	/*if (f == NULL)
	{
		printf("해당 이름의 파일이 없습니다.");
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
		printf("해당 이름의 파일이 없습니다.");
	else
	{
		fread(buf, sizeof(buf), 1, f);
		printf("%s\n",buf);
	}
	fclose(f);
}