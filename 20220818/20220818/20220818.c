#include <stdio.h>
/*
int main(void)
{
	printf("I like programming \n");
	printf("I love puppy! \n");
	printf("I am so happy \n");
	printf("\a \b \f \n \r \t \v \' \" \? \\");
	return 0;
}

int main(void)
{
	int myage = 12;
	printf("제 나이는 10진수로 %d살, 16진수로 %X살입니다. \n"); //%X: 16진수로 출력하되, 알파벳은 대문자로 소문자로 하면 소문자로 출력
}

int main(void)
{
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1);
	printf("%x %#x \n", num2, num2); //서식문자 사이에 #넣으면 8진수답게, 16진수답게 출력
}

int main(void)
{
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234); //1.0*10^-2 == 1.0*e^-2 //대문자로 하면 E출력
	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);
	return 0;
}

int main(void)
{
	double d1 = 1.23e-3;
	double d2 = 1.23e-4;
	double d3 = 1.23e-5;
	double d4 = 1.23e-6;

	printf("%g \n", d1); //소수점 자리 길어지면 e표기법으로 //G는 E로 출력
	printf("%g \n", d2);
	printf("%g \n", d3);
	printf("%g \n", d4);
	return 0;
}

int main(void)
{
	printf("%s %s %s \n", "AAA", "BBB", "CCC");
	return 0;
}
*/
int main(void)
{
	printf("%-8s %14s %5s \n", "이 름", "전공학과", "학년"); //%-8s: 필드폭 8칸 확보, 왼쪽 정렬
	printf("%-8s %14s %5d \n", "임수진", "응용통계학", 4);
	printf("%-8s %14s %5d \n", "장윤석", "부동산학", 3);
	printf("%-8s %14s %5d \n", "최진영", "영어영문학", 5);
	return 0;
}