#include <stdio.h>
void Print2DArr(int(*arr)[10], int m)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int n, i=0, j=0, k=1, m, s=0;
	int arr[10][10];
	scanf_s("%d", &n);
	m = n;

	while (n > 0)
	{
		if (n != 1)
		{
			if (j == s)
			{
				for (j = s; j < (m - (s + 1)); j++)
				{
					arr[i][j] = k;
					k++;
				}
			}
			else
			{
				for (j = (m - (s + 1)); j > s; j--)
				{
					arr[i][j] = k;
					k++;
				}
			}
			printf("%d %d %d %d \n", i, j, k, n);

			if (i == s)
			{
				for (i = s; i < (m - (s + 1)); i++)
				{
					arr[i][j] = k;
					k++;
				}
			}
			else
			{
				for (i = (m - (s + 1)); i > s; i--)
				{
					arr[i][j] = k;
					k++;
				}
			}
			printf("%d %d %d %d \n", i, j, k, n);

			if (j == s)
			{
				for (j = s; j < (m - (s + 1)); j++)
				{
					arr[i][j] = k;
					k++;
				}
			}
			else
			{
				for (j = (m - (s + 1)); j > s; j--)
				{
					arr[i][j] = k;
					k++;
				}

			}
			printf("%d %d %d %d \n", i, j, k, n);

			if (i == s)
			{
				for (i = s; i < (m - (s + 1)); i++)
				{
					arr[i][j] = k;
					k++;
				}
			}
			else
			{
				for (i = (m - (s + 1)); i > s; i--)
				{
					arr[i][j] = k;
					k++;
				}
			}
		}
		else
			arr[i][j] = k;
		printf("%d %d %d %d \n", i, j, k, n);
		j++; i++; s++;
		n=n-2;
		printf("%d %d %d %d %d \n", i, j, k, n, s);
	}
	Print2DArr(arr, m);
	return 0;
}
