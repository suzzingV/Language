#include <stdio.h>
#include <stdlib.h>
//문제 2
int main(void)
{
	int i = 0;
	int j = 0;
	int* arr = (int*)malloc(sizeof(int) * 5);

	while (1)
	{
		if (i > 4 + 3 * j)
		{
			arr = (int*)realloc(arr, sizeof(int) * (5 + 3 * (j+1)));
			j++;
		}
		scanf_s("%d", &arr[i]);
		if (arr[i] == -1)
			break;
		i++;
	}
	for (j = 0; j < i; j++)
		printf("%d", arr[j]);
	return 0;
}