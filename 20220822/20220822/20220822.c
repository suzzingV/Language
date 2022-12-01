#include <stdio.h>
/*
//문제 1
int main(void)
{
	int num, i = 0, total=0;

	while (i < 5)
	{
		printf("1 이상의 정수 입력: ");
		scanf_s("%d", &num);
		while (num < 1)
		{
			printf("다시 입력: ");
			scanf_s("%d", &num);
		}
		total += num;
		i++;
	}
	printf("총합: %d \n", total);
	return 0;
}
*/
//문제 2
int main(void)
{
	int line = 1, num = 0, i;

	while (line <= 5)
	{
		i = 0;
		while (i < num)
		{
			printf("o");
			i++;
		}
		printf("*\n");
		line++;
		num++;
	}
	return 0;
}