#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20

//�л��̶�� ����ü 
typedef struct student
{
	char name[20];
	char sex[10];
	int age;
	int grade;
	int number;
}Student;



//�л��� ��ȣ, ����, ����, �г��� �����ִ� �Լ�
void ShowStudent(Student* st)
{
	printf("   ======%s�л�(%d��)======\n", st->name,st->number);
	printf("   ���� : %d, ���� : %s, �г� : %d\n", st->age,st->sex,st->grade);
	printf("   =====================\n");

}

int SetStudent(Student* st, int studentcount)//st�����Ϳ� ���� �Է�
{
	st->number = ++studentcount;
	printf("======%d�� �л�======\n", st->number);
	printf("�̸� �Է� : ");
	scanf("%s", st->name);
	printf("���� �Է� : ");
	scanf("%d", &st->age);
	printf("���� �Է� : ");
	scanf("%s", st->sex);
	while (1)
	{
		printf("�г� �Է�(1~3) : ");
		scanf("%d", &st->grade);
		if (st->grade > 3 || st->grade < 0)
		{
			printf("�г� �߸� �Է�(���� 1~3�г�)\n");
			system("pause");
			continue;
		}
		break;
	}
	return studentcount;
}

//void Title()
//{
//	int studentcount = 0;
//	int slect;
//	while (1)
//	{
//		printf("=====�л��������α׷�=====(�� �ο� : %d)\n", studentcount);
//		printf("   1.�л� ���\n");
//		printf("   2.�л� ���(��ȣ��)\n");
//		printf("   3.�л� ���(�г��)\n");
//		printf("   4.�л� �˻�\n");
//		printf("   5.�л� �˻�\n");
//		printf("   6.������ �л� ����\n");
//		printf("   7.�л� ��ü ����\n");
//		printf("   8.����\n");
//		printf("   �Է� : ");
//		scanf("%d", &slect);
//		switch (slect)
//		{
//		case 1:
//			student_List[MAX]
//			break;
//		case 2:
//			break;
//		case 3:
//			break;
//		case 4:
//			break;
//		case 5:
//			break;
//		case 6:
//			break;
//		case 7:
//			break;
//		case 8:
//			break;
//		}
//	}
//}

//��ϵ� �л����� �г⺰�� ������ �Լ�
void GradeStudent(Student* studentList,int studentcount)//����st ������ grade�� 1,2,3���� Ȯ��
{
	for (int i = 0; i < studentcount; i++)
	{
		if (studentList[i].grade == 1)
		{
			printf("������������������1 �г⦬����������������\n");
			ShowStudent(&studentList[i]);//�ּҸ� �ʿ� st+i? ����
			printf("������������������������������������������\n");
		}
		else if (studentList[i].grade == 2)
		{
			printf("������������������2 �г⦬����������������\n");
			ShowStudent(&studentList[i]);
			printf("������������������������������������������\n");
		}
		else
		{
			printf("������������������3 �г⦬����������������\n");
			ShowStudent(&studentList[i]);
			printf("������������������������������������������\n");
		}
	}
	system("pause");
}

void main()
{
	Student *student_List[MAX];
	/*Title();*/
	int studentcount = 0;
	int slect;
	while (1)
	{
		system("cls");
		printf("=====�л��������α׷�=====(�� �ο� : %d)\n", studentcount);
		printf("   1.�л� ���\n");
		printf("   2.�л� ���(��ȣ��)\n");
		printf("   3.�л� ���(�г��)\n");
		printf("   4.�л� �˻�\n");
		printf("   5.�л� �˻�\n");
		printf("   6.������ �л� ����\n");
		printf("   7.�л� ��ü ����\n");
		printf("   8.����\n");
		printf("   �Է� : ");
		scanf("%d", &slect);
		system("cls");
		switch (slect)
		{
		case 1:
			if (studentcount + 1 >= MAX)
			{
				printf("�л�����(20��)�� ��� á���ϴ�.\n");
				break;
			}
			student_List[studentcount] = (Student*)malloc(sizeof(Student));//�л��� ����Ҷ� �����Ҵ����� �������� 
			studentcount = SetStudent(student_List[studentcount], studentcount);//SetStudent���� ����
				break;
		case 2:
			for (int i = 0; i < studentcount; i++)
			{
				ShowStudent(student_List[i]);
			}
			system("pause");
			break;
		case 3:
			GradeStudent(student_List[studentcount], studentcount);// or st���� �ʿ��ߴ�  
			/*for (int i = 0; i < studentcount; i++)
			{
				if (student_List[i]->grade == 1)
				{
					printf("������������������1 �г⦬����������������\n");
					ShowStudent(student_List[i]);
					printf("������������������������������������������\n");
				}
				else if (student_List[i]->grade == 2)
				{
					printf("������������������2 �г⦬����������������\n");
					ShowStudent(student_List[i]);
					printf("������������������������������������������\n");
				}
				else
				{
					printf("������������������3 �г⦬����������������\n");
					ShowStudent(student_List[i]);
					printf("������������������������������������������\n");
				}
			}
			system("pause");*/
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		}
	}
	
}