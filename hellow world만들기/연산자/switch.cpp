#include<stdio.h>
#include<windows.h>system("cls"),system("pause")
void main()
{
	int date, select;
	int flag = 0;
	while (1)
	{
		system("cls");
		printf("====================\n");
		printf("   �л���������\n");
		printf("====================\n");
		printf("   1. �л� �̸����\n");
		printf("   2. 3���� �������\n");
		printf("   3. ����Ȯ��\n");
		printf("   4. ����\n");
		printf("====================\n");
		printf("�Է� : ");
		scanf_s("%d", &select);
		switch (select)
		{
		case 1:
			printf("�̸� �Է� : ");
			scanf_s("%d", &date);
			flag = 1;
			break;
		}
}