#include <stdio.h>

int main(void)
{
	int num1 = 0xA7, num2 = 0X43; //컴퓨터에는 이진수로 저장됨 //앞에 0x붙으면 16진수
	int num3 = 032, num4 = 024; //앞에 0 붙으면 8진수

	printf("0xA7의 10진수 정수 값: %d \n", num1);
	printf("0x43의 10진수 정수 값: %d \n", num2);
	printf("032의 10진수 정수 값: %d \n", num3);
	printf("024의 10진수 정수 값: %d \n", num4);
	return 0;
}