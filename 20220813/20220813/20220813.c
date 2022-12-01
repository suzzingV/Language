#include <stdio.h>
/*
int main(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;

	printf("변수 ch의 크기: %d \n", sizeof(ch)); //자료형 아닌 거 sizeof에 들어갈 때는 소괄호 안 쳐줘도 됨 하지만 치는 게 일반적 //sizeof는 함수가 아닌 연산자
	printf("변수 inum의 크기: %d \n", sizeof(inum));
	printf("변수 dnum의 크기: %d \n", sizeof(dnum));

	printf("char의 크기: %d \n", sizeof(char));
	printf("int의 크기: %d \n", sizeof(int));
	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));
	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double));
	return 0;
}

int main(void)
{
	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;
	
	printf("size of num1&num2: %d, %d \n", sizeof(num1), sizeof(num2));
	printf("size of num3&num4: %d, %d \n", sizeof(num3), sizeof(num4));
	
	printf("size of char add: %d \n", sizeof(num1 + num2)); //연산은 int로 변환됨 //일반적으로 cpu가 처리하기에 가장 적합한 크기의 정수 자료형을 int로 정의, 따라서 int형 연산의 속도가 다른 자료형의 연산속도에 비해 동일하거나 더 빠름
	printf("size of short add: %d \n", sizeof(num3 + num4));

	result1 = num1 + num2; //계산해서 넣으면 그냥 그 자료형 유지
	result2 = num3 + num4;
	printf("size of result1&result2: %d %d \n", sizeof(result1), sizeof(result2));
	return 0;
}
//연산의 대상이 되는 변수를 선언하는 경우에는, 연산의 횟수 빈번한 경우, 저장되는 값의 크기 작더라도 int형 변수 선언이 좋음
//데이터의 양이 많아서 연산속도보다 데이터의 크기 줄이는 게 더 중요한 데이터들: char, short 사용 //음성, 영상 데이터

int main(void)
{
	double rad;
	double area;

	printf("원의 반지름 입력:"); scanf_s("%lf", &rad); //double 입력 서식문자 %lf
	area = 3.1415 * rad * rad;
	printf("원의 넓이: %f \n", area); //double 출력 서식문자 %f
	return 0;
}
*/
//unsigned: 0과 양의 정수만 표현, 표현할 수 있는 값의 범위 양의 정수방향으로 두 배 넓어짐
//msb가 데이터 크기 저장하는 비트로 사용되므로 표현할 수 있는 값이 0 이상의 범위로 두 배가 된다
//정수 자료형의 이름 앞에만 unsigned 가능
//signed int==int, 하지만 char의 경우 char을 unsigned char로 처리하는 컴파일러도 존재하기 때문에 음수 저장 시 char을 signed char로 하기도