#include <stdio.h>
/*
//문제 1
int main(void)
{
	int dan=2, num;
	
	while (1)
	{
		num = 1;
		if (dan % 2 != 0)
			continue;

		while (1)
		{
			if (num > dan)
				break;
			printf("%d*%d=%d \n", dan, num, dan * num);
			num++;
		}
		dan += 2;
		if (dan > 9)
			break;
	}
	return 0;
}
*/
//문제 2
int main(void)
{
	int i = 0, j;

	while (1)
	{
		j = -1;
		while (1)
		{
			j++;
			if (j > 9)
				break;
			if ((i * 10 + j) + (j * 10 + i) != 99)
				continue;
			printf("A: %d Z: %d \n", i, j);
		}
		i++;
		if (i > 9)
			break;
	}
	return 0;
}