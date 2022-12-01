#include <stdio.h>
int main(void)
{
	int m, n, i, j, k;
	scanf_s("%d %d", &m, &n);

	for (i = m; i <= n; i++)
	{
		k = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
				k++;
		}
		if (k == 2)
			printf("%d \n", i);
	}
	return 0;
}