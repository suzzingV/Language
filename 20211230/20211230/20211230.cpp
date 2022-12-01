#include <stdio.h>
/*
제목: Hello world 출력하기
기능: 문자열의 출력
파일이름: 20211228.cpp
수정날짜: 2021.12.30
작성자: 임수진
*/
/*
#include <stdio.h> //헤더파일 선언

int main(void) //main 함수의 시작
{
	
	//이 함수 내에서는 하나의 문자열을 출력한다.
	//문자열은 모니터로 출력된다.
	
	printf("Hello world! \n"); //문자열의 출력
	return 0; //0의 반환
} //main 함수의 끝

#include <stdio.h>

int main(void)
{
	printf("Hello Everybody\n");
	printf("%d\n", 1234);
	printf("%d %d\n", 10, 20);
	return 0;
}

#include <stdio.h>

int main(void)
{
	printf("My age: %d \n", 23);
	printf("%d is my point \n", 100);
	printf("I \nlove \nYou \nJangyoonseok\n");
	return 0;
}

#include <stdio.h>

int main(void)
{
	printf("제 이름은 홍길동입니다.\n");
	printf("제 나이는 %d살이고요.\n",20);
	printf("제가 사는 곳의 번지수는 %d-%d입니다.\n", 123, 456);
	return 0;
}

#include <stdio.h>

int main(void)
{
	printf("%d*%d=%d\n", 4, 5, 20);
	printf("%d*%d=%d\n", 7, 9, 7*9);
}

#include <stdio.h>

int main(void)
{
	3 + 4;
	return 0;
}  //계산은 했지만 출력은 안됨

#include <stdio.h>

int main(void)
{
	int num; //num이라는 이름의 변수 선언(정수 저장)
	num = 20;
	printf("%d", num);
}

#include <stdio.h>

int main(void)
{
	int num; //num 이라는 변수 선언
	num = 12; //변수 num을 12로 초기화
	num = 24; //변수 num에 24 대입, 처음 값 지정하는 것 외에는 대입이라고 함
}

#include <stdio.h>

int main(void)
{
	int num = 12; //선언과 동시에 초기화 가능
}

int main(void)
{
	int num1, num2; //변수 두개 동시에 선언
	int num3 = 30, num4 = 40; //변수 두 개 동시에 선언 및 초기화
}

int main(void)
{
	int num1, num2; 
	int num3 = 30, num4 = 40; //선언과 동시에 초기화
	
	//printf("num1: %d, num2: %d\n", num1, num2); //초기화하지 않으면 안됨
	num1 = 10; //초기화
	num2 = 20;

	printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d, num4: %d \n", num3, num4);
	return 0;
}

int main(void)
{
	int num1;
	num1 = 10;
	int num2;
	num2 = 20;
	return 0; 
} //아무것도 안됨. 선언문은 중괄호의 앞부분에 위치해야한다.

int main(void)
{
	int num1 = 24; //num1은 정수형 변수
	double num2 = 3.14; //num2는 실수형 변수
}

int main(void)
{
	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;
	
	printf("덧셈결과: %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d와(과) %d의 합은 %d입니다. \n", num1, num2, result);
	return 0;
}

int main(void)
{
	int num1 = 9, num2 = 2;
	printf("%d+%d=%d\n", num1, num2, num1 + num2);
	printf("%d-%d=%d\n", num1, num2, num1 - num2);
	printf("%d*%d=%d\n", num1, num2, num1 * num2);
	printf("%d/%d의 몫=%d\n", num1, num2, num1 / num2);
	printf("%d/%d의 나머지=%d\n", num1, num2, num1 % num2);
	return 0;
}

int main(void)
{
	int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3; //num1=num1+3
	num2 *= 4; //num2=num2*4
	num3 %= 5; //num3=num3%5
	printf("Result: %d, %d, %d \n", num1, num2, num3);
	return 0;
}

int main(void)
{
	int num1 = +2;
	int num2 = -4;
	
	num1 = -num1;
	num2 = -num2;
	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);
	return 0;
}

int main(void)
{
	int num1 = 12;
	int num2 = 12;
	
	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++); //후위 증가
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2); //전위 증가
	printf("num2: %d \n", num2);
	return 0;
}

int main(void)
{
	int num1 = 10;
	int num2 = (num1--) + 2; //후위 감소
	
	printf("num1: %d \n", num1); //연산 후라서 1 적은 값 출력
	printf("num2: %d \n", num2);
	return 0;
}

int main(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == num2); //값이 참이면 1, 값이 거짓이면 0 출력
	result2 = (num1 <= num2);
	result3 = (num1 > num2);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
	return 0;
}

int main(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12); //둘 다 참이어야 참 
	result2 = (num1 < 12 || num2>12); //둘중 하나라도 참이면 참 //논리연산자보다 관계연산자가 먼저 진행
	result3 = (!num1); //num1이 참이라면 거짓 거짓이라면 참, 변수가 0도 1도 아니면 참, 변수가 0이면 거짓, 1이면 참
	
	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
	return 0;
}

int main(void)
{
	int num1 = 1, num2 = 2;
	printf("Hello "), printf("world! \n"); //한 문장에 같이 가능
	num1++, num2++; //num1++num2++은 1, 2지만 그다음 num1과 num2는 2, 3
	printf("%d ", num1), printf("%d ", num2), printf("\n");
	return 0;
}

int main(void)
{
	int result;
	int num1, num2;

	printf("정수 one: ");
	scanf_s("%d", &num1); //num1이라는 변수에 10진수 정수형태 입력
	printf("정수 two: ");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;
}

int main(void)
{
	int result;
	int num1, num2, num3;

	printf("세 개의 정수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3); //동시에 세 개의 수 다른 형태로 입력 가능, 공백을 기준으로 구분하기때문에 엔터나 스페이스바나 탭키 눌러줘야 함
	
	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d", num1, num2, num3, result);
	return 0;
}

int main(void)
{
	int result1, result2;
	int num1, num2;

	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);
	
	result1 = num1 + num2;
	result2 = num1 - num2;
	printf("%d + %d = %d \n", num1, num2, result1);
	printf("%d - %d = %d \n", num1, num2, result2);
	return 0;
}

int main(void)
{
	int result;
	int num1, num2, num3;

	printf("세 개의 정수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 * num2 + num3;
	printf("%d*%d+%d=%d \n", num1, num2, num3, result);
	return 0;
}

int main(void)
{
	int result;
	int num1;

	printf("정수 입력: ");
	scanf_s("%d", &num1);

	result = num1*num1;
	printf("제곱의 결과: %d", result);
	return 0;
}

int main(void)
{
	int result1, result2;
	int num1, num2;

	printf("정수 두 개 입력: ");
	scanf_s("%d %d", &num1, &num2);

	result1 = num1 / num2;
	result2 = num1 % num2;
	printf("몫: %d 나머지: %d", result1, result2);
	return 0;
}
*/
int main(void)
{
	int result;
	int num1, num2, num3;

	printf("세 정수 입력:");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("결과: %d", result);
	return 0;
}