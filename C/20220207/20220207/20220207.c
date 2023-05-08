#include <stdio.h>
int d(int n)
{
	int a, b, c, d;
	a = n / 1000;
	b = n / 100 - a * 10;
	c = n/10-a*100-b*10;
	d = n % 10;
	return n + a + b + c + d;
}

int main(void)
{
	int i, j;
	int arr[100000] = { 0 };
	
	for (i = 1; i <= 10000; i++)
	{
		if (d(i) <= 10000)
			arr[d(i)] = d(i);
	}

	for (j = 1; j < 10000; j++)
	{
		if (arr[j] == 0)
			printf("%d \n", j);
	}
	return 0;
}