#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char arr[] = { '1','2','3','4','5','6','7','8','9' };
	char str[20];
	int i=0, j, tot=0;
	puts("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	puts(str);

	while (str[i] != 0)
	{
		printf("%c \n", str[i]);
		for (j = 0; j < 10; j++)
		{
			if (arr[j] == str[i])
				tot += atoi(str[i]);
		}
		i++;
	}
	printf("숫자의 총합: %d \n", tot);
	return 0;
}