#include <stdio.h>
/*
void BubbleArr(int arr[], int len)
{
	int i, j;
	int temp = 0;
	for (i = 0; i < (len - 1); i++)
	{
		for (j = 0; j < (len - i - 1); j++)

		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	int arr[4] = { 1,2,3,4 };
	int i;

	BubbleArr(arr, sizeof(arr) / sizeof(int));
	for (i = 0; i < 4; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}

void DesSort(int arr[], int len)
{
	int i, j;
	int temp;

	for (i = 0; i < (len - 1); i++)
	{
		for (j = 0; j < (len - i - 1); j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	int arr[7];
	int i;
	for (i = 0; i < 7; i++)
		scanf_s("%d", &arr[i]);

	DesSort(arr, sizeof(arr) / sizeof(int));
	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}
*/
int main(void)
{
	char voca[100];
	int num[26];
	int i;
	scanf_s("%s", voca, sizeof(voca));

	for (i = 0; i < 26; i++)
		num[i] = -1;

	for (i = 0; voca[i]!='\0'; i++)
	{
		if(num[voca[i]-97]==-1)
			num[voca[i] - 97] = i;
	}

	for (i = 0; i<26; i++)
		printf("%d ", num[i]);
	return 0;
}