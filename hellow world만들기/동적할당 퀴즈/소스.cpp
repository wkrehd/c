#include<stdio.h>
#include<stdlib.h>
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
void ShowStudent(Student *st)
{
	printf("======%s학생(%d번)======\n", st->name,st->number);
	printf("나이 : %d, 성별 : %s, 학년 : %d\n", st->age,st->grade,st->grade);
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


void main()
{
	Student *student_List[MAX];
	/*Title();*/
	int studentcount = 0;
	int slect;
	while (1)
	{
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
		switch (slect)
		{
		case 1:
			student_List[studentcount] = (Student*)malloc(sizeof(Student));//학생을 등록할때 동적할당으로 생성한후 
			studentcount = SetStudent(student_List[studentcount], studentcount);//SetStudent으로 들어간다
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