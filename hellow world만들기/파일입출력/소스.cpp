#include<stdio.h>

void main()
{
	FILE* f = fopen("�۾���.txt", "w");
	int num = 123;
	fprintf(f, "���� ���� ���1 %d ", num);
	fclose(f);
}