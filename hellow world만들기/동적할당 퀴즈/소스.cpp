#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20

//학생이라는 구조체 
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

//학생의 번호, 나이, 성별, 학년을 보여주는 함수
void ShowStudent(Student* st)//매개변수 student_List[i]을 받았는대 *st로 받을수 있는 이유는 *st의 시작주소와 student_List[i]의 시작주소가 같기 때문이다 배열의 이름은 시작주소를 가지므로
{
	printf("   ======%s학생(%d번)======\n", st->name,st->number);//student 구조체의 st변수에서 name , number값으로 접근 하는것
	printf("   나이 : %d, 성별 : %s, 학년 : %d\n", st->age,st->sex,st->grade);///student 구조체의 st변수에서 age , grade값으로 접근 하는것
	printf("   =====================\n");

}

int SetStudent(Student* st, int studentcount)//st포인터에 값을 입력
{
	st->number = ++studentcount;
	printf("======%d번 학생======\n", st->number);
	printf("이름 입력 : ");
	scanf("%s", st->name);
	printf("나이 입력 : ");
	scanf("%d", &st->age);
	printf("성별 입력 : ");
	scanf("%s", st->sex);
	while (1)
	{
		printf("학년 입력(1~3) : ");
		scanf("%d", &st->grade);
		if (st->grade > 3 || st->grade < 0)
		{
			printf("학년 잘못 입력(범위 1~3학년)\n");
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
//		printf("=====학생관리프로그램=====(총 인원 : %d)\n", studentcount);
//		printf("   1.학생 등록\n");
//		printf("   2.학생 목록(번호순)\n");
//		printf("   3.학생 목록(학년순)\n");
//		printf("   4.학생 검색\n");
//		printf("   5.학생 검색\n");
//		printf("   6.마지막 학생 삭제\n");
//		printf("   7.학생 전체 삭제\n");
//		printf("   8.종료\n");
//		printf("   입력 : ");
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

//등록된 학생들을 학년별로 나누는 함수 //등록된 학생들을 정렬을 하고 출력하도록 만들기 
void GradeStudent(Student* studentList[], int studentcount)//배열로 받았으나
{
	for (int i = 0; i < studentcount; i++)
	{
		for (int j = i + 1; j < studentcount  ; j++)//studentcount+1 을 하면 안되는 이유는?
		{
			if (studentList[i]->grade > studentList[j]->grade)//오름차순
			{
				Swap(studentList[i], studentList[j]);
			}
		}
	}
	//printf("┏━━━━━━━━1 학년━━━━━━━━┓\n");
	//for (int i = 0; i < studentcount; i++)
	//{
	//	if(1 == studentList[i]->grade)
	//	ShowStudent(studentList[i]);//주소만 필요 st+i? 오류
	//}
	//printf("┗━━━━━━━━━━━━━━━━━━━┛\n");

	//printf("┏━━━━━━━━2 학년━━━━━━━━┓\n");
	//for (int i = 0; i < studentcount; i++)
	//{
	//	if (2 == studentList[i]->grade)
	//		ShowStudent(studentList[i]);//주소만 필요 st+i? 오류
	//}
	//printf("┗━━━━━━━━━━━━━━━━━━━┛\n");

	//printf("┏━━━━━━━━3 학년━━━━━━━━┓\n");
	//for (int i = 0; i < studentcount; i++)
	//{
	//	if (3 == studentList[i]->grade)
	//		ShowStudent(studentList[i]);//주소만 필요 st+i? 오류
	//}
	//printf("┗━━━━━━━━━━━━━━━━━━━┛\n");

	for (int i = 0; i < studentcount; i++)
	{
		switch (studentList[i]->grade)//swhitch (num) num자리의 숫자로 바로가게됨 없으면 switch를 빠져나옴 break가 없으면 접근한곳부터 break가 있는 코드까지 실행이됨
		{
		case 1:
			printf("┏━━━━━━━━ 1 학년 ━━━━━━━━┓\n");
			for (int i = 0; i < studentcount; i++)
				{
				if (1 == studentList[i]->grade)
						ShowStudent(studentList[i]);
				}
			printf("┗━━━━━━━━━━━━━━━━━━━┛\n");
			break;
		case 2 :
			printf("┏━━━━━━━━ 2 학년 ━━━━━━━━┓\n");
			for (int i = 0; i < studentcount; i++)
			{
				if (2 == studentList[i]->grade)
				ShowStudent(studentList[i]);
			}
			printf("┗━━━━━━━━━━━━━━━━━━━┛\n");
			break;
		case 3 :
			printf("┏━━━━━━━━ 3 학년 ━━━━━━━━┓\n");
			for (int i = 0; i < studentcount; i++)
			{
				if (3 == studentList[i]->grade)
				ShowStudent(studentList[i]);
			}
			printf("┗━━━━━━━━━━━━━━━━━━━┛\n");
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
	Student *student_List[MAX];//구조체를 배열로 만든 이유는 student_List[MAX]변수 하나로 정보를 관리하기위해
	//배열을 포인터로 만든 이유는? 동적할당된 메모리의 주소는 시작주소만 알게 되는대 그것을 보관해야 되므로 포인터로 만들게 된것
	/*Title();*/
	int studentcount = 0;
	int slect;
	while (1)
	{
		system("cls");
		printf("=====학생관리프로그램=====(총 인원 : %d)\n", studentcount);
		printf("   1.학생 등록\n");
		printf("   2.학생 목록(번호순)\n");
		printf("   3.학생 목록(학년순)\n");
		printf("   4.학생 검색\n");
		printf("   5.학생 검색\n");
		printf("   6.마지막 학생 삭제\n");
		printf("   7.학생 전체 삭제\n");
		printf("   8.종료\n");
		printf("   입력 : ");
		scanf("%d", &slect);
		system("cls");
		switch (slect)
		{
		case 1:
			if (studentcount + 1 >= MAX)
			{
				printf("학생정원(20명)이 모두 찼습니다.\n");
				break;
			}
			student_List[studentcount] = (Student*)malloc(sizeof(Student));//학생을 등록할때 동적할당으로 생성한후 
			studentcount = SetStudent(student_List[studentcount], studentcount);//SetStudent으로 들어간다
				break;
		case 2:
			for (int i = 0; i < studentcount; i++)
			{
				ShowStudent(student_List[i]);//학생의 인적사항을 보여주기위해 배열의 값을 매개변수로 만든다
			}
			system("pause");
			break;
		case 3:
			GradeStudent(student_List, studentcount);//배열에 있는 값이 필요하기 때문에 배열을 매개변수로 사용함
			//왜 배열이 필요하나면 변수를 *student_List[MAX]형태  변수를 배열로 만들었기때문에 
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