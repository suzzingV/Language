#include <stdio.h>
int main(void)
{
	int m, n, i, j, k;
	int a = 0,sum=0;
	int arr[10000] = { 0 };
	scanf_s("%d %d", &m, &n);

	for (i = m; i <= n; i++)
	{
		k = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
				k++;
		}
		if (k == 1)
		{
			arr[a] = i;
			sum += i;
			a++;
		}
	}
	if (arr[0] == 0)
		printf("%d \n", -1);
	else
		printf("%d\n%d\n", sum, arr[0]);
	return 0;
}