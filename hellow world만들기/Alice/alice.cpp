#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char oneline[256];//�б� �迭
	char* findline[256];//���� ã�� �迭
	*findline = (char*)malloc(sizeof(char));
	FILE *fp;//���� ���� Alice.txt������ �ִ� �ּҸ� �����ϱ� ���ؼ�
	fp = fopen("Alice.txt", "r");//������� Alice.txt�� �б� ���·� ���� 
	if (fp == NULL)
		printf("�ش� �̸��� ������ �����ϴ�.");
	else
	{
		while (!feof(fp))//feof ������ ���� �������� ���ϸ� 0�� ��ȯ��
		{
			fgets(oneline, sizeof(oneline), fp);//���پ� ������ ������������ fgets (����Ű�� ������, ���ڿ�����,������ ������)
			printf("%s", oneline);
		}
		char word[];
		scanf("%s" word[]);
		printf("= Check Word Input : %s", &);
		strcpy(*findline, oneline);//���� �����ؾߵǼ�*findline��

		free(*findline);
		*findline = NULL;
		fclose(fp);
	}
}