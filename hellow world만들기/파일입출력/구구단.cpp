#include<stdio.h>
#include<string.h>

void GoGoDan(char gogodan[8][11])//gogodan[i][j]을 매개변수로 사용해야함
{
	for (int i = 0; i < 8; i++)
	{
		
		for(int j=0;j<11;j++)
		{
			gogodan[i][j];
			if (j == 0)
			{
				printf("========%d단========\n", i + 2);
			}
			else if (j == 10)
			{
				printf("=====================\n\n");
			}
			else
			printf("%d x %d = %d\n", i + 2, j, (i + 2) * j);
		}
	}
}

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

	FILE* f = fopen("GoGoDan.txt","w");
	char gogodan[8][11];
	fprintf(f,"%s", GoGoDan(gogodan));//함수 못넣나?
	
}