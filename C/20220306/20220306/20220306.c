#include <stdio.h>
#include <string.h>
/*
//문자열의 길이를 반환하는 함수
#include <string.h>
size_t strlen(const char* s); //size_t: typedef unsigned int size_t //size_t len == unsigned int len
int main(void)
{
	char str[] = "1234567";
	printf("%u \n", strlen(str)); //unsigned int 서식문자: %u 하지만 %d 사용이 더 흔함 //널 문자는 길이에 포함하지 않는다
	return 0;
}

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0; //널 문자의 아스키코드 값. 널을 넣는 것
}

int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", strlen(str), str); //널 문자가 포함되는 게 아니라 \n가 포함되는 거
	
	RemoveBSN(str); //\n 없애기
	printf("길이: %d, 내용: %s \n", strlen(str), str);
	return 0;
}

//문자열을 복사하는 함수
char* strcpy(char* dest, const char* src); //복사받을 함수, 복사할 함수 //크기 이상의 문자열 입력되면 오류
char* strncpy(char* dest, const, char* src, size_t n); //크기 이상의 문자열이 입력되면 그 크기만큼만 복사됨

int main(void)
{
	char str1[30] = "Simple String";
	char str2[30];
	strcpy(str2, str1); //str1의 문자열을 str2에 복사
	return 0;
}

int main(void)
{
	char str1[30] = "Simple String";
	char str2[30];
	strncpy(str2, str1, sizeof(str2)); //복사받을 문자열 크기 넣기 //str1에 저장된 문자열을 str2에 복사하되, str1의 길이가 매우 길다면 sizeof(str2)가 반환한 값에 해당하는 문자 수만큼 복사
	return 0;
}

int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	/**** case 1 ****/
	strcpy_s(str2, sizeof(str2), str1);
	puts(str2);

	/**** case 2 ****/
	//strncpy_s(str3, sizeof(str3), str1, sizeof(str3)); //strncpy는 널문자와 상관없이 문자열 수만큼 복사함 -> 12345 복사 근데 널 문자까지 출력해야하는데 널문자가 없으므로 이상하게 출력됨
	//puts(str3);

	/**** case 3 ****/
	strncpy_s(str3, sizeof(str3), str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0; //널문자 삽입
	puts(str3);
	return 0;
}
*/
