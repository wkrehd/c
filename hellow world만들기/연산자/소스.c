#include <stdio.h>
void main()
{
	int num;
	printf("1.������ �Է��Ͻÿ� : \n");
	scanf_s("%d", &num);
	if (num % 3 == 0)
	{
		printf("%d�� 3�ǹ�� �Դϴ�.", num);
	}
	else
	{
		printf("%d�� 3�ǹ���� �ƴմϴ�.", num);
	}
}