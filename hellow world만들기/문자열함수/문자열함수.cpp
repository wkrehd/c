#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void Swap(char str[], char str1[])
{
	char str2;
	str2 = *str;
	*str = *str1;
	*str1 = str2;
}

//���ڿ� ���� ��ȯ
int Strlen(const char str[])//�����迭�� ���� �̿��Ͽ�
{
	int num = 0;
	while (1)//���� 0�̸� �ݺ��� �����
	{
		if (str[num]==0)
		{
			break;
		}

		num++;
	}
	//for (int i = 0; i < 9; i++)
	//{
	//	if (str[i] != 0)//���� 0�� �ƴϸ�
	//	{
	//		num++;//num�� ������Ų�� 
	//	}
	//}
	/*printf("%d", num);*/
	return num;
}

//���ڿ��� �����ϴ� �Լ�
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
//���ڿ��� �߰��ϴ� �Լ�
void Strcat(char str[], const char str1[])
{
	int num1, num2;
	num1 = Strlen(str);
	num2 = Strlen(str1);

	for (int i = num1, j = 0; i < num1 + num2 && j < num2; i++, j++)
	{
		str[i] = str1[j];//char �ϳ��ǰ��� �ǹ��ϸ� �׷��� ������ �߰��� ���ڵ� char������ �־����
	}
}

//char*
//strcat(s, append)//append �߰�
//register char* s;//register ����ϴ�
//register const char* append;
//{
//	char* save = s;//save = s�� �ʱ���� ���� ������ �ִ´� *s�� �迭�� ���ۺκа� ���� ������
//
//	// ������
//	// 0 1 2
//	for (; *s; ++s);//*s�� ���̴� ++s�� �ϴٺ��� s�� null���� �����ϹǷ� �׶� ������ break
//	// 3
//	// 
//	while (*s++ = *append++);//append ù��° �ּҸ� s 3 ���ּҿ� �����Ѵ�
//
//	return(save);//�ʱⰪ���� �е��� ��ȯ�Ѵ�
//}

//���ڿ��� ���ϴ� �Լ�
int Strcmp(const char str2[], const char str3[])//������ �ʴ� �����
{
	char cmp1[256];//const char�� �Ķ��Ÿ�� �����߱� ������ ���ο� �迭���� ���� ������ �����Ѵ�
	char cmp2[256];
	strcpy(cmp1, str2);//str2�� ���ڿ��� cmp1�� �����Ѵ�
	strcpy(cmp2, str3);//str3�� ���ڿ��� cmp2�� �����Ѵ�
	// sasd sd
	// 1.���̸� ���� üũ�ϰ� 2. ���̰� ��str���� ª��str�� ���ۺκ��� �����κ��� ã�� 3. �������� ������ Ȯ���ϱ�
	int num, max,min;

	//if (Strlen(cmp1) > Strlen(cmp2))
	//{
	//	max = Strlen(cmp1);
	//	min = Strlen(cmp2);

	//}
	//else
	//{
	//	Swap(cmp1, cmp2);
	//	max = Strlen(cmp1);
	//	min = Strlen(cmp2);
	//	//Swap( str2,  str3);//�迭���̰� ū���� str2�� �ٲٱ� ���ؼ� �׷��߸� ���� �ݺ��Լ����� ū���� �������� ������ Ȯ���Ҽ�����
	//}
	if (Strlen(cmp1) < Strlen(cmp2))
	{
			Swap(cmp1, cmp2);
	}
	max = Strlen(cmp1);
	min = Strlen(cmp2);
	for (int i = 0, j=i; i < max && j<min; i++)//i�� �ݺ��ϴٰ� j���� �������� j++�� i+1���� ������ Ȯ��
	{
		if (/*max !=min && */cmp1[i] == cmp2[j])//1�� ���� //������ i++���� j++���� min-1�� �ɶ����� ��ġ�ϸ� num-1
		{
			if (j == min-1)//str3[j]�� ������������ ����ϰ� str[i]�� ���� str[j]�� ������ num-1�� ��ȯ�Ѵ�
			{
				num = 1;
			}
			j++;
			continue;
		}
		//for (int j = i ; j < min-1; j++)
		//{
		//	if (str2[i] == str3[j])//1�� ���� //������ i++���� j++���� min-1�� �ɶ����� ��ġ�ϸ� num-1
		//	{
		//		num = 1;
		//	}
		//}
		//else if (min == max && cmp1[i] == cmp2[j])//2�� ����
		//{
		//	j++;
		//	num = 0;
		//	continue;
		//}
		else//3�� ����
		{
			num = -1;
		}
		
	}
	if (num == 1 && min == max)
		num = 0;
	return num;
}

void main()
{
	/*char str[10] = "Hello";*/
	/*printf("%s���ڿ��� ���� : %d\n", str,strlen(str));*/

	//Strlen ����� ���ڼ� ���� ��ȯ�ϴ°� �迭���ۺ��� 0�̾ƴѰ��� 1���� ��ȯ�Ͽ� ���ϱ�
	/*for (int i = 0; i < 9; i++)
	{
		int num = 0;
		if (str[i] != 0)
		{
			num++;
		}
	}*/

	//strlen �����Ҵ��ϴ°�
	//int num=0;
	//scanf("%d", &num);

	//char *str=(char*)malloc(sizeof(char) * num);//ĳ���������� �����Ҵ��ؾߵ�
	//strcpy_s(str, num - 1,"Hello");
	////char str[]= "Hello";
	//Strlen(str);//str �迭�� �ִ� ���� �ʿ��ϱ⶧���� �迭�� �Ű������� ���
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

	//printf("%s == %s : %d\n", str2,str3,strcmp(str2,str3));//�տ��迭�� ���ǹ迭�� ��������ϸ� 1
	//printf("%s == %s : %d\n", "abc","abc",strcmp("abc","abc"));//�տ��迭�� ���ǹ迭�� ������ 0
	//printf("%s == %s : %d\n", "abc", "def", strcmp("abc","def"));//�տ��迭�� ���ǹ迭�� �ٸ��� -1

	//1��. ���ڿ��� ���̰� �ٸ� �ι迭���� ���� �迭�� ������������ ���� �迭�� ������ 1
	//2��. ���ڿ��� ���̰� ���� �޹迭�� �չ迭�� ���� ������ 0
	//3��. ���ڿ��� ���Ƶ� ���� �ٸ��ų� , ���ڿ��� �ٸ��ų� �϶� -1 

	/*char str2[10] = "abc";
	char str3[10] = "def";*/
	//�չ迭 i �޹迭���� j
	//Strlen(str3);
	//int num;
	//for (int i = 0, j = 0; i < Strlen(str3); i++, j++)//1�� ����
	//{
	//	if (Strlen(str2) != Strlen(str3) && str2[i] == str3[j])//1�� ����
	//	{
	//		num = 1;
	//	}
	//	else if (Strlen(str2) == Strlen(str3) && str2[i] == str3[j])//2�� ����
	//	{
	//		num = 0;
	//	}
	//	else//3�� ����
	//	{
	//		num = -1;
	//	}
	//}

	char str2[10] = "sasd";
	char str3[10] = "sasd";
	Strcmp(str2, str3);
	printf("%d", Strcmp(str2, str3));
}