#include <stdio.h>
/*
int main(int argc, char* argv[]) //실행파일 위치까지 문자열로 인식 //char*argv[]==char**argv: 더블포인터 변수 문자열의 배열
{
	int i = 0;
	printf("전달된 문자열의 수: %d \n", argc);

	for (i = 0; i < argc; i++)
		printf("%d번째 문자열: %s \n", i + 1, argv[i]);
	return 0;
}

void ShowAllString(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s \n", argv[i]);
}

int main(void)
{
	char* str[3] = {
		"C programming",
		"C++ programming",
		"JAVA Programming"
	};
	ShowAllString(3, str);
	return 0;
}
*/
int main(char* argv[]) //문자열 수 자동으로 계산됨
{
	int i = 0;
	printf("전달된 문자열의 수: %d \n", argc);
	
	while (argv[i] != NULL) //문자열 배열 뒤에 NULL삽입됨
	{
		printf("%d번째 문자열: %s \n", i + 1, argv);
		i++;
	}
	return 0;
}