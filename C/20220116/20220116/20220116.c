#include <stdio.h>
/*
int main(void)
{
	int num = 0, sum = 0, i = 0;

	while (i < 5)
	{
		while (num < 1)
		{
			printf("1보다 큰 수 입력: ");
			scanf_s("%d", &num);
		}
		sum += num;
		num = 0; //num 초기화
		i++;
	}
	printf("총 합: %d", sum);
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
		j = 0; //초기화해줘야 새롭게 시작
		printf("* \n");
		i++;	
	}
	return 0;
}



	