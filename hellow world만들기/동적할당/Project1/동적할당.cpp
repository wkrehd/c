//#include<stdio.h>
//#include<stdlib.h>
//
//void main()
//{
//	//int* pnum = (int*)malloc(sizeof(int));
//	//*pnum = 10;
//	//printf("pnum�ּ� = %p\npnum�� = %d", pnum,*pnum);//pnum �����Ҵ��ּ�
//	//free(pnum);
//
//	//int* pnum = (int*)malloc(sizeof(int));
//	//*pnum = 10;
//	//printf("pnum�ּ� = %p\tpnum�� = %d\n", pnum,*pnum);
//	//free(pnum);
//	///**pnum = 20;
//	//printf("pnum�ּ� = %p\tpnum�� = %d\n", pnum, *pnum);*/
//	//pnum = NULL;
//
//	int* pnumarr;
//	int size;
//	printf("�Ҵ��� ������ ������ �Է��Ͻÿ� : ");
//	scanf_s("%d", &size);
//	pnumarr = (int*)malloc(sizeof(int) * size);
//	for (int i = 0; i < size; i++)
//		pnumarr[i] = i + 1;
//	for (int i = 0; i < size; i++)
//		printf("%d = %d\n", i,pnumarr[i]);
//	free(pnumarr);
//	pnumarr = NULL;
//
//}
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#define MAX 50

typedef struct student
{
	char Name[10];
	int Age;
	int Class;
	int Number;
	char Gender[10];
}Student;

void ShowStudent(Student* St)
{
	printf("======%s�л�(%d��)======\n", St->Name, St->Number);
	printf("���� : %d,  ���� : %s,  �г� : %d\n", St->Age, St->Gender, St->Class);
	printf("======================\n");
}
int SetStudent(Student* St, int StudentCount)
{
	St->Number = ++StudentCount;
	printf("======%d�� �л�======\n", St->Number);
	printf("�̸� �Է� : ");
	scanf("%s", St->Name);
	printf("���� �Է� : ");
	scanf("%d", &St->Age);
	printf("���� �Է� : ");
	scanf("%s", St->Gender);
	printf("�г� �Է� : ");
	scanf("%d", &St->Class);
	return StudentCount;
}

int main()
{
	/*Student* Student_List[MAX];
	int Select;
	int StudentCount = 0;

	while (1)
	{
		system("cls");
		printf("=====�л��������α׷�=====(�� �ο� : %d)\n", StudentCount);
		printf("1.�л� ���\n");
		printf("2.�л� ���\n");
		printf("3.����\n");
		printf("�Է� : ");
		scanf("%d", &Select);
		switch (Select)
		{
		case 1:
			if (StudentCount + 1 >= MAX)
			{
				printf("�л�����(50��)�� ��� á���ϴ�.\n");
				break;
			}
			Student_List[StudentCount] = (Student*)malloc(sizeof(Student));//ũ�Ⱑ ������ Ȯ���ϴ¹�
			StudentCount = SetStudent(Student_List[StudentCount], StudentCount);
			break;
		case 2:
			for (int i = 0; i < StudentCount; i++)
				ShowStudent(Student_List[i]);
			break;
		case 3:
			for (int i = 0; i < StudentCount; i++)
			{
				printf("%s�л� �����Ҵ� ���� �Ϸ�\n", Student_List[i]->Name);
				free(Student_List[i]);
			}
			return;
		}
		system("pause");
	}*/
	sizeof(Student);
	char Name1[10] = "ABC";
	char Name2[10] = "BCA";
	char Name3[10] = "ABC";
	printf("Name1 == Name2 : %d\n", strcmp(Name1, Name2));//�ٸ��� -1?
	printf("Name1 == Name3 : %d\n", strcmp(Name1, Name3));//������ 0
	
	return 0;
}