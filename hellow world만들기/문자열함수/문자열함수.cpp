#include<stdio.h>
#include<string.h>

int Strlen(char str)
{
	int num = 0;
	for (int i = 0; i < 9; i++)
	{
		if (str[i] != 0)
		{
			num++;
		}
	}
	return num;
}

void main()
{
	char str[10] = "Hello";
	/*printf("%s문자열의 길이 : %d\n", str,strlen(str));*/

	//Strlen 기능은 글자수 값을 반환하는것 배열시작부터 0이아닌것을 1개로 반환하여 더하기
	/*for (int i = 0; i < 9; i++)
	{
		int num = 0;
		if (str[i] != 0)
		{
			num++;
		}
	}*/
	Strlen(str[10]);
}