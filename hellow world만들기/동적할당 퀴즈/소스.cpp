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

void Swap(Student *st1, Student* st2)
{
	Student st3;
	st3 = *st1;
	*st1 = *st2;
	*st2 = st3;
}

//�л��� ��ȣ, ����, ����, �г��� �����ִ� �Լ�
void ShowStudent(Student* st)//�Ű����� student_List[i]�� �޾Ҵ´� *st�� ������ �ִ� ������ *st�� �����ּҿ� student_List[i]�� �����ּҰ� ���� �����̴� �迭�� �̸��� �����ּҸ� �����Ƿ�
{
	printf("   ======%s�л�(%d��)======\n", st->name,st->number);//student ����ü�� st�������� name , number������ ���� �ϴ°�
	printf("   ���� : %d, ���� : %s, �г� : %d\n", st->age,st->sex,st->grade);///student ����ü�� st�������� age , grade������ ���� �ϴ°�
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

//��ϵ� �л����� �г⺰�� ������ �Լ� //��ϵ� �л����� ������ �ϰ� ����ϵ��� ����� 
void GradeStudent(Student* studentList[], int studentcount)//�迭�� �޾�����
{
	for (int i = 0; i < studentcount; i++)
	{
		for (int j = i + 1; j < studentcount  ; j++)//studentcount+1 �� �ϸ� �ȵǴ� ������?
		{
			if (studentList[i]->grade > studentList[j]->grade)//��������
			{
				Swap(studentList[i], studentList[j]);
			}
		}
	}
	//printf("������������������1 �г⦬����������������\n");
	//for (int i = 0; i < studentcount; i++)
	//{
	//	if(1 == studentList[i]->grade)
	//	ShowStudent(studentList[i]);//�ּҸ� �ʿ� st+i? ����
	//}
	//printf("������������������������������������������\n");

	//printf("������������������2 �г⦬����������������\n");
	//for (int i = 0; i < studentcount; i++)
	//{
	//	if (2 == studentList[i]->grade)
	//		ShowStudent(studentList[i]);//�ּҸ� �ʿ� st+i? ����
	//}
	//printf("������������������������������������������\n");

	//printf("������������������3 �г⦬����������������\n");
	//for (int i = 0; i < studentcount; i++)
	//{
	//	if (3 == studentList[i]->grade)
	//		ShowStudent(studentList[i]);//�ּҸ� �ʿ� st+i? ����
	//}
	//printf("������������������������������������������\n");

	for (int i = 0; i < studentcount; i++)
	{
		switch (studentList[i]->grade)//swhitch (num) num�ڸ��� ���ڷ� �ٷΰ��Ե� ������ switch�� �������� break�� ������ �����Ѱ����� break�� �ִ� �ڵ���� �����̵�
		{
		case 1:
			printf("������������������ 1 �г� ������������������\n");
			for (int i = 0; i < studentcount; i++)
				{
				if (1 == studentList[i]->grade)
						ShowStudent(studentList[i]);
				}
			printf("������������������������������������������\n");
			break;
		case 2 :
			printf("������������������ 2 �г� ������������������\n");
			for (int i = 0; i < studentcount; i++)
			{
				if (2 == studentList[i]->grade)
				ShowStudent(studentList[i]);
			}
			printf("������������������������������������������\n");
			break;
		case 3 :
			printf("������������������ 3 �г� ������������������\n");
			for (int i = 0; i < studentcount; i++)
			{
				if (3 == studentList[i]->grade)
				ShowStudent(studentList[i]);
			}
			printf("������������������������������������������\n");
			break;
		}
		/*if (studentList[i]->grade == 1)
		{
		}
		else if (studentList[i]->grade == 2)
		{
		}
		else
		{
		}*/
	}
	system("pause");
}

void main()
{
	Student *student_List[MAX];//����ü�� �迭�� ���� ������ student_List[MAX]���� �ϳ��� ������ �����ϱ�����
	//�迭�� �����ͷ� ���� ������? �����Ҵ�� �޸��� �ּҴ� �����ּҸ� �˰� �Ǵ´� �װ��� �����ؾ� �ǹǷ� �����ͷ� ����� �Ȱ�
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
				ShowStudent(student_List[i]);//�л��� ���������� �����ֱ����� �迭�� ���� �Ű������� �����
			}
			system("pause");
			break;
		case 3:
			GradeStudent(student_List, studentcount);//�迭�� �ִ� ���� �ʿ��ϱ� ������ �迭�� �Ű������� �����
			//�� �迭�� �ʿ��ϳ��� ������ *student_List[MAX]����  ������ �迭�� ������⶧���� 
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