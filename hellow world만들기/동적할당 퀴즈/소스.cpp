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



//학생의 번호, 나이, 성별, 학년을 보여주는 함수
void ShowStudent(Student* st)
{
	printf("   ======%s학생(%d번)======\n", st->name,st->number);
	printf("   나이 : %d, 성별 : %s, 학년 : %d\n", st->age,st->sex,st->grade);
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

//등록된 학생들을 학년별로 나누는 함수
void GradeStudent(Student* studentList,int studentcount)//변수st 값에서 grade가 1,2,3인지 확인
{
	for (int i = 0; i < studentcount; i++)
	{
		if (studentList[i].grade == 1)
		{
			printf("┏━━━━━━━━1 학년━━━━━━━━┓\n");
			ShowStudent(&studentList[i]);//주소만 필요 st+i? 오류
			printf("┗━━━━━━━━━━━━━━━━━━━┛\n");
		}
		else if (studentList[i].grade == 2)
		{
			printf("┏━━━━━━━━2 학년━━━━━━━━┓\n");
			ShowStudent(&studentList[i]);
			printf("┗━━━━━━━━━━━━━━━━━━━┛\n");
		}
		else
		{
			printf("┏━━━━━━━━3 학년━━━━━━━━┓\n");
			ShowStudent(&studentList[i]);
			printf("┗━━━━━━━━━━━━━━━━━━━┛\n");
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
				ShowStudent(student_List[i]);
			}
			system("pause");
			break;
		case 3:
			GradeStudent(student_List[studentcount], studentcount);// or st값이 필요했다  
			/*for (int i = 0; i < studentcount; i++)
			{
				if (student_List[i]->grade == 1)
				{
					printf("┏━━━━━━━━1 학년━━━━━━━━┓\n");
					ShowStudent(student_List[i]);
					printf("┗━━━━━━━━━━━━━━━━━━━┛\n");
				}
				else if (student_List[i]->grade == 2)
				{
					printf("┏━━━━━━━━2 학년━━━━━━━━┓\n");
					ShowStudent(student_List[i]);
					printf("┗━━━━━━━━━━━━━━━━━━━┛\n");
				}
				else
				{
					printf("┏━━━━━━━━3 학년━━━━━━━━┓\n");
					ShowStudent(student_List[i]);
					printf("┗━━━━━━━━━━━━━━━━━━━┛\n");
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