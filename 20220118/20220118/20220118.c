#include <stdio.h>
/*
int main(main)
{
	int num;
	printf("정수 입력:");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력값은 0보다 작다"); //한 줄이므로 중괄호 생략 가능

	if (num > 0)
		printf("입력값은 0보다 크다");

	if (num = 0)
		printf("입력값은 0이다");

	return 0;
}

int main(void)
{
	double num1, num2;
	int opt;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈");
	scanf_s("%d", &opt);
	printf("두 정수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);
	
	if (opt == 1) //==
		printf("%f+%f=%f", num1, num2, num1 + num2);
	
	if (opt == 2)
		printf("%f-%f=%f", num1, num2, num1 - num2);
	
	if (opt ==3)
		printf("%f*%f=%f", num1, num2, num1 * num2);
	
	if (opt ==4)
		printf("%f/%f=%f", num1, num2, num1 / num2);
	
	return 0;
}

int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if ((num % 3 == 0) || (num % 4 == 0)) //or=||
			printf("%d \n", num); //if 문은 몇 줄에 걸쳐 표현되건 한 줄로 인식 그러므로 for에 중괄호 안해도 됨
	}
	return 0;
}

int main(void)
{
	int num1, num2;
	printf("두 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		printf("num1은 num2보다 큽니다.");
		printf("%d>%d \n", num1, num2);
	}
	else
	{
		printf("num1은 num2보다 크지 않습니다.");
		printf("%d<=%d \n", num1, num2);
	}
	return 0;
}

int main(void)
{
	int num;

	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력값은 0보다 작다.");
	else
		printf("입력값은 0보다 작지 않다.");
	return 0;
}

int main(void)
{
	int opt;
	double num1, num2;
	double result = 0;

	printf("1. + 2.- 3.* 4./");
	scanf_s("%d", &opt);
	printf("두 정수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;

	else if(opt == 2)
		result = num1 - num2;

	else if(opt == 3)
		result = num1 * num2;

	else                      //else if (opt==4)도 가능
		result = num1 / num2;

	printf("연산 결과: %f", result);
	return 0;
} //조건이 만족되면 else이후로 건너뛴다

int main(void)
{
	int num, abs;

	printf("정수 입력: ");
	scanf_s("%d", &num);

	abs = (num > 0) ? num : num * (-1); //조건?조건이 참일때 출력값: 조건이 거짓일 때 출력값
	printf("절댓값: %d", abs);
	return 0;
}
//문제 1
int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 7 == 0 || num % 9 == 0)
			printf("%d \n", num);
	}
	return 0;
}

//문제 2
int main(void)
{
	int num1, num2, result;
	printf("두 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 < num2)
		result = num2 - num1;
	else
		result = num1 - num2;

	printf("결과: %d", result);
	return 0;
}

//문제 3
int main(void)
{
	double kor, eng, math, avg;
	printf("국어, 영어, 수학 점수: ");
	scanf_s("%lf %lf %lf", &kor, &eng, &math);
	avg = (kor + eng + math)/3;

	if (avg >= 90)
		printf("A");

	else if (avg >= 80) //90>avg>=80은 안됨. 이렇게 할 거면 avg<90&&avg>=80으로 해야됨
		printf("B");
	
	else if (avg >= 70)
		printf("C");
	
	else if (avg >= 50)
		printf("D");
	
	else
		printf("F");

	return 0;
}

//문제 4
int main(void)
{
	int num1, num2, result;
	printf("두 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	result = num1 < num2 ? num2 - num1 : num1 - num2; //괄호 안 붙여도 됨
	printf("결과: %d", result);
	return 0;
}

int main(void)
{
	int num=0, sum = 0;

	while (1) //항상 참, 무한 반복
	{
		sum += num; 
		if (sum > 5000)
			break; //반복문 탈출, break문을 가장 가까이서 감싸고 있는 반복문 탈출(if문 탈출 ㄴㄴ)
		num++;
	}
	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
	return 0;
}

int main(void)
{
	int num;

	for (num = 1; num < 20; num++) //반복문 나올 때마다 더해짐
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue; //반복문의 조건검사위치로 이동, 이 뒤는 생략
		printf("%d \n", num);
	}
	return 0;
}

//문제 1
int main(void)
{
	int dan, cur;

	for (dan = 2; dan < 10; dan++)
	{
		if (dan % 2 != 0)
			continue;
		for (cur = 1; cur < 10; cur++)
		{
			if (cur > dan)
				break;
			printf("%d*%d=%d \n", dan, cur, dan * cur);
		}
	}
	return 0;
}

//문제 2
int main(void)
{
	int a, z;
	int result = 0;

	for (a = 0; a < 10; a++)
	{
		for (z = 0; z < 10; z++)
		{
			result = ((a * 10 + z) + (z * 10 + a));
			if (result != 99)
				continue;
			printf("A: %d, Z: %d \n", a, z);
		}
	}
	return 0;
}

int main(void)
{
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1: //세미콜론 아니라 콜론 //입력된 값이 1이면 실행
		printf("1은 ONE");
		break; //이거 없으면 switch 못 빠져나가고 뒤에거 쫙 실행
	case 2: 
		printf("2는 TWO");
		break;
	case 3:
		printf("3은 THREE");
		break;
	case 4:
		printf("4는 FOUR");
		break;
	case 5:
		printf("5는 FIVE");
		break;
	default: //위에 다 아니면
		printf("I don't know! \n"); //마지막 문장이므로 break 필요 없다
	}
	return 0;
}

int main(void)
{
	char sun;
	printf("M 오전, A 오후, E 저녁: \n");
	scanf_s("%c", &sun);

	switch (sun)
	{
	case 'M': //문자열 ''
	case 'm': //break 생략
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;
	case 'E': case 'e': //이렇게 붙여써도 됨
		printf("Evening \n");
		break;
	}
	return 0;
}

int main(void)
{
	int n;
	printf("정수 입력: ");
	scanf_s("%d", &n);

	switch (n/10)
	{
	case 0: //switch에는 범위 못 넣는다
		printf("0 이상 10 미만");
		break;
	case 1:
		printf("10 이상 20 미만");
		break;
	case 2:
		printf("20 이상 30 미만");
		break;
	default:
		printf("30 이상");
	}
	return 0;
}
*/
int main(void)
{
	int num;
	printf("자연수 입력: ");
	scanf_s("%d", &num);

	if (num == 1)
		goto ONE; //해당 위치로 이동
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE: //실행의 대상이 아니라 위치표현일뿐이므로 왼쪽정렬
	printf("1을 입력하셨습니다! \n");
	goto END;
TWO:
	printf("2를 입력하셨습니다! \n");
	goto END;
OTHER:
	printf("3 혹은 다른 값을 입력하셨군요! \n");

END:
	return 0;
}