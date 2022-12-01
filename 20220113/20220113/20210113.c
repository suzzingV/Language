#include <stdio.h>
/*
int main(void)
{
	int num = 0, rep = 1;

	printf("양의 정수 입력:");
	scanf_s("%d", &num);

	while (rep < num+1)
	{
		printf("Hello world! \n");
		rep++;
	}
	return 0;
}

int main(void)
{
	int num = 0, rep=1;

	printf("양의 정수 입력:");
	scanf_s("%d", &num);

	while (rep < num + 1)
	{
		printf("%d \n",3 * rep);
		rep++;
	}
	return 0;
}

int main(void)
{
	int num = 1, sum = 0;
	
	while (num != 0) //실행되는 조건을 넣어야 함
	{
		printf("양의 정수 입력:");
		scanf_s("%d", &num);
		sum += num;
	}
	printf("%d", sum);
	return 0;
}

int main(void)
{
	int dan = 0, num=9;

	printf("숫자 입력:");
	scanf_s("%d", &dan);

	while (num >0)
	{
		printf("%d*%d=%d \n", dan, num, dan * num);
		num--;
	}
	return 0;
}

int main(void)
{
	int num = 0, rep = 0, sum=0, ind=0;

	printf("몇 개의 정수를 입력?:");
	scanf_s("%d", &num);

	while (rep < num)
	{
		printf("정수 입력:");
		scanf_s("%d", &ind);
		sum += ind;
		rep++; //while 뒤의 괄호에 rep 대신 넣을 수도 있다
	}
	printf("%f", (double)sum / num); //실수로 바꿔줘야한다
	return 0;
}
*/
int main(void)
{
	int cur = 2;
	int is = 0;

	while(cur < 10)
	{
		is = 1;
		while(is < 10)
		{
			printf("%d*%d=%d \n", cur, is, cur * is);
			is++;
		}
		cur++;
	}
	return 0;
}