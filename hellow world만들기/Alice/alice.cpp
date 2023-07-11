#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char oneline[256] = {0};//읽기 배열
	char findline[256] = {0};//글자 찾는 배열
	FILE *fp;//변수 지정 Alice.txt파일이 있는 주소를 저장하기 위해서
	fp = fopen("Alice.txt", "r");//만들어진 Alice.txt를 읽기 상태로 연다 
	if (fp == NULL)
		printf("해당 이름의 파일이 없습니다.");
	else
	{
		while (!feof(fp))//feof 파일의 끝에 도달하지 못하면 0을 반환함
		{
			fgets(oneline, sizeof(oneline), fp);//한줄씩 정보를 가져오기위해 fgets (가리키는 포인터, 문자열길이,파일의 포인터)
			printf("%s", oneline);
		}

		char checkword[256]={0};
		int count = 0;
		printf("Check Word Input : %s", checkword);
		scanf("%s", checkword);

		fp = fopen("Alice.txt", "r");
		while (!feof(fp))//찾을려는 문자열을 찾기위해서 다시 한줄씩 정보를 가져옴
		{
			fgets(oneline, sizeof(oneline), fp);
			//strcpy(findline, oneline);//oneline의 한줄값을 *findline에 복사함
			//strcmp(oneline, checkword);//*findline과 checkword을 비교해서 같은것이 있으면 num++을 함
			if (1 == strcmp(oneline, checkword))
			{
				count++;
			}
		}
		fclose(fp);

		printf("KMP Check to Count : %d", count);
	}
}