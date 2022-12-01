#include <stdio.h>
//extern void ft_putchar(char z);
void ft_putchar(char z)
{
	printf("%c", z);
}

int area_id(int b, int a, int i, int j)
{
	if ((i > 1 && i < a) && (j > 1 && j < b))
		return 0;
	else if (i == 1 && j == 1)
		return 1;
	else if (i == 1 && j == b)
		return 2;
	else if (i == a && j == 1)
		return 3;
	else if (i == a && j == b)
		return 4;
	else if (i == 1 && j > 1 && j < b)
		return 5;
	else if (i == a && j > 1 && j < b)
		return 6;
	else if (i > 1 && i < a && j == 1)
		return 7;
	else if (i > 1 && i < a && j == b)
		return 8;
}

void rush(int x, int y)
{
	int i;
	int j;
	int a;
	int b;
	char chr[10] = " ACACBBBB"; //문자열 뒤에 '\0'

	a = x;
	b = y;
	i = 1;
	j = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			ft_putchar(chr[area_id(a, b, i, j)]);
			++j;
		}
		printf("\n");
		++i;
	}
}