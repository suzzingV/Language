#include <stdio.h>
#include <stdlib.h>
/*
//문제 1
int main(void)
{
	char str[20], newstr[20];
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0, j, tot=0;
	fgets(str, sizeof(str), stdin);
	
	while (str[i] != '\n')
	{
		for (j = 0; j < 9; j++)
		{
			if ((str[i] - '0') == arr[j]) //atoi는 문자"열"을 정수로 바꿔줌
				tot += arr[j];
		}
		i++;
	}
	printf("%d \n", tot);
	return 0;
}
*/