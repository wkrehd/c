#include<stdio.h>
#include<stdlib.h>
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
void ShowStudent(Student *st)
{
	printf("======%s�л�(%d��)======\n", st->name,st->number);
	printf("���� : %d, ���� : %s, �г� : %d\n", st->age,st->grade,st->grade);
	printf("=====================\n");

}

int SetStudent(Student* st, int studentcount)
{
	st->number = ++studentcount;
	printf("");
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


void main()
{
	Student *student_List[MAX];
	/*Title();*/
	int studentcount = 0;
	int slect;
	while (1)
	{
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
		switch (slect)
		{
		case 1:
			student_List[studentcount] = (Student*)malloc(sizeof(Student));//�л��� ����Ҷ� �����Ҵ����� �������� 
			studentcount = SetStudent(student_List[studentcount], studentcount);//SetStudent���� ����
				break;
		case 2:
			break;
		case 3:
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