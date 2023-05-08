#include <stdio.h>
/*
while (num < 10)
{
	printf("%d*%d=%d \n", dan, num, dan * num);
	num++;
} //while 반복문

do
{
	printf("%d*%d=%d \n", dan, num, dan * num);
	num++;
} while (num < 10); //위에거랑 똑같음

int main(void)
{
	int tot = 0, num = 0;

	do
	{
		printf("정수 입력:");
		scanf_s("%d", &num); //여기서 초기화되기 때문에 num=0으로 초기화 안 해줘도 됨
		tot += num;
	} while (num != 0);
	
	printf("총 합: %d", tot);
	return 0;
} //do while 문이 자연스럽다

//문제 1
int main(void)
{
	int num = 1, tot = 0; //while의 조건에 맞도록 초기화

	while (num != 0)
	{
		printf("정수 입력:");
		scanf_s("%d", &num);
		tot += num;
	}
	printf("총 합: %d", tot);
	return 0;
}
*
int main(void)
{
	int num = 0, tot = 0;

	printf("정수 입력:");
	scanf_s("%d", &num);
	tot += num;
	
	while (num != 0)
	{
		printf("정수 입력:");
		scanf_s("%d", &num);
		tot += num;
	}
	printf("총 합: %d", tot);
	return 0;
}
//문제 2
int main(void)
{
	int num = 0, tot = 0, i=1;

	do
	{
		num = 2 * i;
		tot += num;
		i++;
	}while(i <= 50);
	
	printf("총 합: %d", tot);
	return 0;
}
//문제 3

int main(void)
{
	int cur = 2;
	int is = 0;

	do
	{
		is = 1;
		do
		{
			printf("%d*%d=%d \n", cur, is, cur * is);
			is++;
		} while (is < 10);
		cur++;
	} while (cur < 10);
	return 0;
}

int main(void)
{
	int num = 0;
	while (num < 3)
	{
		printf("Hi~");
		num++;
	}
}

int main(void)
{
	for (int num = 0; num < 3; num++)
		printf("Hi~"); //한줄이면 중괄호 생략 가능
	return 0;
} //위의 while문을 for문으로 바꾸기

int main(void)
{
	int num;
	for (num = 0; num < 3; num++)
		printf("Hi~");
	return 0;
} //위에거 지원하지 않는 컴파일러도 있어서 쓰는 것

int main(void)
{
	int num = 0, tot = 0;
	printf("0 이상 정수 입력:");
	scanf_s("%d", &num);
	
	for (int i = 0; i <= num; i++)
		tot += i;

	printf("총 합: %d", tot);
	return 0;
}

int main(void)
{
	double tot = 0;
	double num = 0;
	int i;

	for (i=1; num >= 0; i++) //세번째 조건 없으면 비워두기, 중간이 비면 조건 무조건 참 되므로 무한 루프, 첫번째에는 세번째꺼와 같은 변수
	{
		tot += num; //마지막 껀 포함시키면 안되므로 이걸 앞에 둔다
		printf("실수 입력:");
		scanf_s("%lf", &num); //실수 입력 받을 때는 lf
	}
	printf("평균: %f, i의 값: %d", tot / (i-2),i);
	return 0;
}
//문제 1
int main(void)
{
	int num1=0;
	int num2 = 0, tot=0;

	printf("두 개의 정수 입력:");
	scanf_s("%d %d", &num1, &num2);

	for (; num1 <= num2; num1++)
		tot += num1;
	printf("두 수 사이의 합은 %d입니다", tot);
	return 0;
}
//문제 2

int main(void)
{
	int num=0, tot=1;
	int i;

	printf("정수 입력:");
	scanf_s("%d", &num);

	for (i = num; i>0; i--)
	{
		tot *= i;
	}
	printf("%d!=%d", num, tot);
}

int main(void)
{
	int dan, num;

	for (dan = 2; dan < 10; dan++)
	{
		for (num = 1; num < 10; num++)
		{
			printf("%d*%d=%d \n", dan, num, dan * num);
		}
	}
	return 0;
}
*/