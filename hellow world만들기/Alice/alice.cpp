#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char oneline[256] = {0};//�б� �迭
	char findline[256] = {0};//���� ã�� �迭
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

		char checkword[256]={0};
		int count = 0;
		printf("Check Word Input : %s", checkword);
		scanf("%s", checkword);

		fp = fopen("Alice.txt", "r");
		while (!feof(fp))//ã������ ���ڿ��� ã�����ؼ� �ٽ� ���پ� ������ ������
		{
			fgets(oneline, sizeof(oneline), fp);
			//strcpy(findline, oneline);//oneline�� ���ٰ��� *findline�� ������
			//strcmp(oneline, checkword);//*findline�� checkword�� ���ؼ� �������� ������ num++�� ��
			if (1 == strcmp(oneline, checkword))
			{
				count++;
			}
		}
		fclose(fp);

		printf("KMP Check to Count : %d", count);
	}
}