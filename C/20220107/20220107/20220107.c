#include <stdio.h>
/*
int main(void)
{
	int num = 0;

	while (num < 5)
	{
		printf("Hello world! %d \n", num);
		num++; //이거 없으면 프로그램 계속 실행됨
	}
	return 0;
}

int main(void)
{
	int num = 0;

	while (num < 5)
		printf("Hello world! %d \n", num++); //반복의 대상이 한 문장이면 중괄호 생략 가능
	return 0;
}

int main(void)
{
	int num = 0;

	while (num < 5)
		printf("Hello world! %d \n", num), num++; //이렇게도 생략 가능
	return 0;
}

int main(void)
{
	int dan = 0, num = 1;
	printf("몇 단?");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%d*%d=%d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}
*/
int main(void)
{
	int num = 1;
	while (1) //1은 참이라는 뜻 따라서 항상 참이므로 계속 무한으로 출력
	{
		printf("Suzzingv \n");
		num++;
	}
	return 0;
}