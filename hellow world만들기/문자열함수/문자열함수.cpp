#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//문자열 길이 반환
int Strlen(const char str[])//받은배열의 값을 이용하여
{
	int num = 0;
	while (1)//값이 0이면 반복을 멈춘다
	{
		if (str[num]==0)
		{
			break;
		}

		num++;
	}
	//for (int i = 0; i < 9; i++)
	//{
	//	if (str[i] != 0)//값이 0이 아니면
	//	{
	//		num++;//num을 증가시킨다 
	//	}
	//}
	/*printf("%d", num);*/
	return num;
}

//문자열을 복사하는 함수
void Strcpy(char name[], char my_name[])
{
	int num = 0;
	while (1)
	{
		name[num] = my_name[num];
		num++;
		if (my_name[num] == 0)
			break;
	}
}
//문자열을 추가하는 함수
void Strcat(char str[], const char str1[])
{
	int num1, num2;
	num1 = Strlen(str);
	num2 = Strlen(str1);

	for (int i = num1, j = 0; i < num1 + num2 && j < num2; i++, j++)
	{
		str[i] = str1[j];//char 하나의값을 의미하며 그렇기 때문에 추가할 문자도 char형으로 넣어야함
	}
}

char*
strcat(s, append)//append 추가
register char* s;//register 등록하다
register const char* append;
{
	char* save = s;

	for (; *s; ++s);

	while (*s++ = *append++);

	return(save);
}

//문자열을 비교하는 함수
int Strcmp(const char str2[], const char str3[])
{
	// 
	// sasd sd
	// 1.길이를 먼저 체크하고 2. 
	int num;
	for (int i = 0, j = 0; i < Strlen(str3); i++, j++)//1번 조건
	{
		if (Strlen(str2) != Strlen(str3) && str2[i] == str3[j])//1번 조건
		{
			num = 1;
		}
		else if (Strlen(str2) == Strlen(str3) && str2[i] == str3[j])//2번 조건
		{
			num = 0;
		}
		else//3번 조건
		{
			num = -1;
		}
	}
	return num;
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

	//strlen 동적할당하는것
	//int num=0;
	//scanf("%d", &num);

	//char *str=(char*)malloc(sizeof(char) * num);//캐릭터포인터 동적할당해야됨
	//strcpy_s(str, num - 1,"Hello");
	////char str[]= "Hello";
	//Strlen(str);//str 배열의 있는 값이 필요하기때문에 배열을 매개변수로 사용
	//printf("%d", Strlen(str));

	//free(str);

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

	/*char name[10]={0};
	char my_name[10] = "Kimjiun";

	Strcpy(name,my_name);
	printf("%s", name);*/


	//char str[10] = "Hello"; //str[5] = '^' str[6] = '^' str[7] = '\0';
	///*int num1,num2;*/
	//char str1[10] = "^^^";
	/*printf("%s\n", str);
	strcat(str, "^^");
	printf("%s\n", str);*/
	
	//num1 = Strlen(str);//5
	///*num1= Strlen(str);*/
	//num2 = Strlen(str1);//2
	///*num2= Strlen(str1);*/
	//for (int i = num1, j=0; i < num1 + num2 && j<num2; i++,j++)
	//{
	//	str[i] = str1[j];//
	//}

	//char str[10] = "Hello"; //str[5] = '^' str[6] = '^' str[7] = '\0';
	///*int num1,num2;*/
	//char str1[10] = "^^";
	//Strcat(str,"^^");
	//printf("%s\n", str);

	//printf("%s == %s : %d\n", str2,str3,strcmp(str2,str3));//앞에배열이 뒤의배열을 모두포함하면 1
	//printf("%s == %s : %d\n", "abc","abc",strcmp("abc","abc"));//앞에배열이 뒤의배열과 같으면 0
	//printf("%s == %s : %d\n", "abc", "def", strcmp("abc","def"));//앞에배열이 뒤의배열이 다르면 -1

	//1번. 문자열의 길이가 다른 두배열에서 뒤의 배열의 마지막값까지 앞의 배열과 같으면 1
	//2번. 문자열의 길이가 같고 뒷배열과 앞배열의 값이 같으면 0
	//3번. 문자열이 같아도 값이 다르거나 , 문자열이 다르거나 일대 -1 

	/*char str2[10] = "abc";
	char str3[10] = "def";*/
	//앞배열 i 뒷배열길이 j
	//Strlen(str3);
	//int num;
	//for (int i = 0, j = 0; i < Strlen(str3); i++, j++)//1번 조건
	//{
	//	if (Strlen(str2) != Strlen(str3) && str2[i] == str3[j])//1번 조건
	//	{
	//		num = 1;
	//	}
	//	else if (Strlen(str2) == Strlen(str3) && str2[i] == str3[j])//2번 조건
	//	{
	//		num = 0;
	//	}
	//	else//3번 조건
	//	{
	//		num = -1;
	//	}
	//}

	char str2[10] = "string!!";
	char str3[10] = "string";
	Strcmp(str2, str3);
	printf("%d", Strcmp(str2, str3));
}