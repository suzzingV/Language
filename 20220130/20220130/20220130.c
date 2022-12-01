#include <stdio.h>
int main(void)
{
	int n, k;
	scanf_s("%d", &n);

	for (k = 1; k < 10; k++)
		printf("%d * %d = %d \n", n, k, n * k);
	return 0;
}