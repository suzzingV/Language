#include <stdio.h>
int main(void)
{
	int t, k, n, j, m;
	int res = 0;
	scanf_s("%d", &t);

	for (j = 0; j < t; j++)
	{
		scanf_s("%d %d", &k, &n);
		if (k == 0)
			res = n;
		else
		{
			res = n;
			for (m = 1; m <= n; m++)
				res += n * m;
		}
		printf("%d \n", res);
	}
	return 0;
}