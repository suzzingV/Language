#include <stdio.h>
/*
int main(void)
{
	int num = 0, sum = 0, i = 0;

	while (i < 5)
	{
		while (num < 1)
		{
			printf("1���� ū �� �Է�: ");
			scanf_s("%d", &num);
		}
		sum += num;
		num = 0; //num �ʱ�ȭ
		i++;
	}
	printf("�� ��: %d", sum);
	return 0;
}
*/
int main(void)
{
	int i = 0, j = 0; 

	while (i < 5)
	{
		while (j < i)
		{
			printf("o");
			j++;
		}
		j = 0; //�ʱ�ȭ����� ���Ӱ� ����
		printf("* \n");
		i++;	
	}
	return 0;
}



	