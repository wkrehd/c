#include<stdio.h>
#include<string.h>

void GoGoDan(char gogodan[8][11])//gogodan[i][j]�� �Ű������� ����ؾ���
{
	for (int i = 0; i < 8; i++)
	{
		
		for(int j=0;j<11;j++)
		{
			gogodan[i][j];
			if (j == 0)
			{
				printf("========%d��========\n", i + 2);
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
	/*FILE* f = fopen("�۾���.txt", "w");
	int num = 123;
	fprintf(f, "���� ���� ���1 %d ", num);
	fclose(f);*/
	/*FILE* f = fopen("Test.txt","a");
	int num = 123;
	fprintf(f,"�߰� ��� %d",num);
	fclose(f);*/

	FILE* f = fopen("GoGoDan.txt","w");
	char gogodan[8][11];
	fprintf(f,"%s", GoGoDan(gogodan));//�Լ� ���ֳ�?
	
}