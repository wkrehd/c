#include<stdio.h>

void main()
{
	FILE* f = fopen("글쓰기.txt", "w");
	int num = 123;
	fprintf(f, "덮어 쓰기 모드1 %d ", num);
	fclose(f);
}