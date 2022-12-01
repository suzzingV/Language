#include <stdio.h>
#include <stdlib.h>

char* GetStr(int size)
{
	char* str = (char*)malloc(size);
	printf("문자열 입력: ");
	gets(str);
	return str;
}
int main(void)
{
	int size;
	char* arr;

	printf("문자열의 최대 길이: ");
	scanf_s("%d", &size);
	getchar();
	arr = GetStr(size);

	printf("%s \n", arr);
	return 0;
}