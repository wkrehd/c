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
		printf("   학생성적관리\n");
		printf("====================\n");
		printf("   1. 학생 이름등록\n");
		printf("   2. 3과목 점수등록\n");
		printf("   3. 점수확인\n");
		printf("   4. 종료\n");
		printf("====================\n");
		printf("입력 : ");
		scanf_s("%d", &select);
		switch (select)
		{
		case 1:
			printf("이름 입력 : ");
			scanf_s("%d", &date);
			flag = 1;
			break;
		}
}