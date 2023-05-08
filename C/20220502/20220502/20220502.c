#include <stdio.h>

int main(void)
{
	int t, h, w, n;
	int i;
	int a = 0, b = 0;
	scanf_s("%d", &t);
	for (i = 1; i <= t; i++)
	{
		scanf_s("%d %d %d", &h, &w, &n);
		
		if (n % h == 0)
		{
			a = h * 100;
			b = n / h;
		}
		else
		{
			a = n % h * 100;
			b = n / h + 1;
		}
		printf("%d \n", a + b);
	}
	return 0;
}