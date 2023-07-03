#include<stdio.h>
#include<stdlib.h>//(void*)malloc(size_t size), free�Լ� ����ϱ�����
#include<string.h>//strcmp �Լ��� ����ҷ���
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

void Swap(Student* st1, Student* st2)
{
	Student st3;
	st3 = *st1;
	*st1 = *st2;
	*st2 = st3;
}
//��ȣ������ �ٲٴ� �Լ�
void NumberOrder(Student* studentList[], int studentcount)
{
	for (int i = 0; i < studentcount - 1; i++)//�迭ũ���� -1�� ���� ������
	{
		for (int j = i + 1; j < studentcount; j++)//�迭ũ�� ���� ������
		{
			if (studentList[i]->number > studentList[j]->number)//��������
			{
				Swap(studentList[i], studentList[j]);
			}
		}
	}
}


//�л��� ��ȣ, ����, ����, �г��� �����ִ� �Լ�
void ShowStudent(Student* st)//�Ű����� student_List[i]�� �޾Ҵ´� *st�� ������ �ִ� ������ *st�� �����ּҿ� student_List[i]�� �����ּҰ� ���� �����̴� �迭�� �̸��� �����ּҸ� �����Ƿ�
{
	printf("   ======%s�л�(%d��)======\n", st->name, st->number);//student ����ü�� st�������� name , number������ ���� �ϴ°�
	printf("   ���� : %d, ���� : %s, �г� : %d\n", st->age, st->sex, st->grade);///student ����ü�� st�������� age , grade������ ���� �ϴ°�
	printf("   =====================\n");

}
//�л� �������� ����ϴ� �Լ�
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

//�л��̸����� �л� ���������� ����ϴ� �Լ�
void NameSearch(Student* studentList[], int studentcount)
{
	char name[20];
	for (int i = 0; i < studentcount; i++)
	{
		printf("�˻��� �̸� �Է� : ");
		scanf("%s", &name);
		if (strcmp(name, studentList[i]->name) == 0)//name �� studentList[i]->name�� ���ٸ� strcmp()�Լ� ����� 0�� ���´�
		{
			ShowStudent(studentList[i]);
			//system("pause");
			break;
		}
	}
	system("pause");
}

//�г�˻� �ϱ����� �Լ�
void GradeSearch(Student* studentList[], int studentcount)
{
	int grade = 0;//studentList[i]->grade ���� �����Ͽ� switch�� ����ϱ� ����
	//�� �г����� �Է��� �ϴ� ��
	for (int i = 0; i < studentcount; i++)//&studentList[i]���� i�� ���� ���ؼ� for�� ����� 
	{
		printf("�˻��� �г� �Է�(1~3) : ");
		scanf("%d", &studentList[i]->grade);
		if (0 > studentList[i]->grade || 3 < studentList[i]->grade)// studentList[i]->grade 1~3������ �ƴ� ������ ����� ����
		{
			printf("�г� �߸� �Է�(���� 1~3�г�)\n");
			system("pause");
			i--;
			continue;
		}
		grade = studentList[i]->grade;
	}
	//�Է¹��� �г��� ��� �ϴ� ��
	switch (grade)//grade ==(1~3)
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
	case 2:
		printf("������������������ 2 �г� ������������������\n");
		for (int i = 0; i < studentcount; i++)
		{
			if (2 == studentList[i]->grade)
				ShowStudent(studentList[i]);
		}
		printf("������������������������������������������\n");
		break;
	case 3:
		printf("������������������ 3 �г� ������������������\n");
		for (int i = 0; i < studentcount; i++)
		{
			if (3 == studentList[i]->grade)
				ShowStudent(studentList[i]);
		}
		printf("������������������������������������������\n");
		break;
	}
	system("pause");
}

//������ �迭�� ��ϵ� �л��� �����ϱ�
int LastStudentDelete(Student* studentList[], int studentcount)//
{
	if (0 < studentcount/* && NULL != studentList[studentcount - 1]*/)
	{
		free(studentList[--studentcount]);
		studentList[studentcount] = NULL;
	}
	return studentcount;
}


//��ϵ� �л����� �г⺰�� ������������ ���� �ϰ� ��� 
void GradeStudent(Student* studentList[], int studentcount)//�迭�� �޾�����
{
	for (int i = 0; i < studentcount; i++)
	{
		for (int j = i + 1; j < studentcount; j++)//studentcount+1 �� �ϸ� �ȵǴ� ������?
		{
			if (studentList[i]->grade > studentList[j]->grade)//��������
			{
				Swap(studentList[i], studentList[j]);
			}
		}
	}
	
	printf("������������������ 1 �г� ������������������\n");
	for (int i = 0; i < studentcount; i++)
	{
		if (1 == studentList[i]->grade)
			ShowStudent(studentList[i]);
	}
	printf("������������������������������������������\n");
	
	printf("������������������ 2 �г� ������������������\n");
	for (int i = 0; i < studentcount; i++)
	{
		if (2 == studentList[i]->grade)
			ShowStudent(studentList[i]);
	}
	printf("������������������������������������������\n");
	
	printf("������������������ 3 �г� ������������������\n");
	for (int i = 0; i < studentcount; i++)
	{
		if (3 == studentList[i]->grade)
			ShowStudent(studentList[i]);
	}
	printf("������������������������������������������\n");
	
	system("pause");
}

void main()
{
	Student* student_List[MAX];//����ü�� �迭�� ���� ������ student_List[MAX]���� �ϳ��� ������ �����ϱ�����
	//�迭�� �����ͷ� ���� ������? �����Ҵ�� �޸��� �ּҴ� �����ּҸ� �˰� �Ǵ´� �װ��� �����ؾ� �ǹǷ� �����ͷ� ����� �Ȱ�
	/*Title();*/
	int studentcount = 0;
	int slect;
	int num = 0;
	while (1)
	{
		system("cls");
		printf("=====�л��������α׷�=====(�� �ο� : %d)\n", studentcount);
		printf("   1.�л� ���\n");
		printf("   2.�л� ���(��ȣ��)\n");
		printf("   3.�л� ���(�г��)\n");
		printf("   4.�г� �˻�\n");
		printf("   5.�л� �˻�\n");
		printf("   6.������ �л� ����\n");
		printf("   7.�л� ��ü ����\n");
		printf("   8.����\n");
		printf("   �Է� : ");
		scanf("%d", &slect);
		if (slect != 7)//
		{
			system("cls");
		}
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
				NumberOrder(student_List, studentcount);
				ShowStudent(student_List[i]);//�л��� ���������� �����ֱ����� �迭�� ���� �Ű������� �����
			}
			system("pause");
			break;
		case 3:
			GradeStudent(student_List, studentcount);//�迭�� �ִ� ���� �ʿ��ϱ� ������ �迭�� �Ű������� �����
			//�� �迭�� �ʿ��ϳ��� ������ *student_List[MAX]����  ������ �迭�� ������⶧���� 
			break;
		case 4:
			GradeSearch(student_List, studentcount);
			break;
		case 5:
			NameSearch(student_List, studentcount);
			break;
		case 6:
			studentcount = LastStudentDelete(student_List, studentcount);
			break;
		case 7:
			//for (int i = 0; i < studentcount; i++)//0���ͽ���
			//{
			//	ShowStudent(student_List[i]);
			//}
			//system("pause");
			while (studentcount)
			{
				ShowStudent(student_List[studentcount - studentcount+num]);//0���� studentcount����
				num++;
				printf("���� �Ϸ�");//������� ����ϰ� ���� LastStudentDelete�ݺ��ؾߵ�
				studentcount = LastStudentDelete(student_List, studentcount);//3���� 1. �� ����ϰ� �����(��ǻ� 2���� �ٸ��� ����) 2. ù��° �迭���� ����� �Լ������(�ֿ켱) 3. ShowStudent��LastStudentDelete�ݺ��� �ι��ϱ�
				
			}
			system("pause");
			break;
		//case 8://�迭�� ���� fprintf�ؾߵ�
		//	FILE * f = fopen("�л�����.txt", "w");
		//	fprintf(f.);//�迭�� ���� ������ �ؾߵ�
		case 10:
			while (studentcount)
			{
				studentcount = LastStudentDelete(student_List, studentcount);
			}
			return;
		}
	}

}