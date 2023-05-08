#include <stdio.h>

int main(void)
{
	int n, m, i, j, stu;
	double	sum,  avg;
	double score[1000] = { 0 };
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		sum = 0; stu = 0; avg = 0;
		scanf_s("%d", &m);
		for (j = 0; j < m; j++)
		{
			scanf_s("%lf", &score[j]);
			sum += score[j];
		}

		avg = sum / m;
		for (j = 0; j < m; j++)
		{
			if (score[j] > avg)
				stu += 1;
		}
		printf("%.3f%% \n", (double)stu / m * 100);
	}
	return 0;
}