#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//문자열 길이 반환
void Strlen(char str[])//받은배열의 값을 이용하여
{
	int num = 0;
	for (int i = 0; i < 9; i++)
	{
		if (str[i] != 0)//값이 0이 아니면
		{
			num++;//num을 증가시킨다 
		}
	}
	printf("%d", num);
}

//문자열을 복사하는 함수
void Strcpy(char name[],char my_name[])
{
	for (int i = 0; i < 9; i++)
	{
		name[i] = my_name[i];
		printf("%c", name[i]);
	}
}

void main()
{
	/*char str[10] = "Hello";*/
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

	//int num=0;
	//scanf("%d", &num);
	//char str[num];//가변길이배열 VLA가 있어야 가능 안될경우 동적할당을 해줘야함
	//char str[10]= "Hello";
	//Strlen(str);//str 배열의 있는 값이 필요하기때문에 배열을 매개변수로 사용

	/*char name[10];
	char my_name[10] = "Kimjiun";

	strcpy(name, my_name);
	printf("name : %s\n", name);
	printf("my_name : %s\n",my_name);

	for (int i = 0; i < 9; i++)
	{
		name[i] = my_name[i];
		printf("%c", name[i]);
	}*/

	/*char name[10];
	char my_name[10] = "Kimjiun";

	Strcpy(name,my_name);*/

	char str[10] = "Hello";
	printf("%s\n", str);
	strcat(str, "^^");
	printf("%s\n", str);
	
	for (int i = 0; i < 9; i++)
	{
		if (str[i] = 0)//추가되는 길이만큼 추가되어야함
		{

		}
	}
}