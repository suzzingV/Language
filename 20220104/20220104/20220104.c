#include <stdio.h>
/*
int main(void)
{
	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));
	printf("literal char size: %d \n", sizeof('A')); //문자형 정수로 
	return 0;
}

int main(void)
{
	float num1 = 5.789; //경고
	float num2 = 3.24 + 5.12; //경고
	return 0;
}

int main(void)
{
	float num1 = 5.789f; //뒤에 f 붙여주면 에러 안 뜸
	float num2 = 3.24F + 5.12F; //대문자 해도 됨
	return 0;
}

int main(void)
{
	double num1 = 245; //정수가 실수로
	int num2 = 3.1415; //실수가 정수로 (소수점 이하 버려짐)
	int num3 = 129;
	char ch = num3; //바이트 큰 정수가 바이트 크기가 작은 정수로 (부호 바뀔 수도 있음)

	printf("정수 245를 실수로: %f \n", num1);
	printf("실수 3.1415를 정수로: %d \n", num2);
	printf("큰 정수 129를 작은 정수로: %d \n", ch);
	return 0;
}

int main(void)
{
	short num1 = 15, num2 = 25;
	short num3 = num1 + num2; //int로 자동으로 변해서 연산(int가 제일 빨라서) num1+num2는 int
	return 0;

}

int main(void)
{
	int num1 = 3, num2 = 4;
	double divResult;
	divResult = num1 / num2; //정수끼리 나눈 거라서 소수점까지 안나옴
	printf("나눗셈 결과: %f\n", divResult);
	return 0; 
}

int main(void)
{
	int num1 = 3, num2 = 4;
	double divResult;
	
	divResult = (double)num1 / num2; //(double)num1: num1을 double로. 그럼 num2도 자동으로 변환됨
	printf("나눗셈 결과: %f \n", divResult);
	return 0;
}

int main(void)
{
	int num1 = 3;
	double num2 = 2.5 * (double)num1; //num1 자동으로 double되지만 명시해주는 게 좋다
	return 0;
}

int main(void)
{
	printf("I like programming \n");
	printf("I love puppy! \n");
	printf("I am so happy \n");
	return 0;
}

int main(void)
{
	int myAge = 12;
	printf("제 나이는 10진수로 %d살, 16진수로 %X살입니다. \n", myAge, myAge);
	return 0;
}

int main(void)
{
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1); //부호 없는 8진수 정수, 8진수다운 8진수
	printf("%x %#x \n", num2, num2); //부호 없는 16진수 정수, 8진수다운 8진수
}

int main(void)
{
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234); //e 표기법
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

	printf("%g \n", d1); //%g: 소수점 자리 늘어나면 e표기법으로 출력
	printf("%g \n", d2);
	printf("%g \n", d3);
	printf("%g \n", d4);
	return 0;
}

int main(void)
{
	printf("%s, %s, %s \n", "AAA", "BBB", "CCC"); //문자열 출력
	return 0;
}

int main(void)
{
	printf("%-8s %14s %5s \n", "이 름", "전공학과", "학년"); //%8s: 필드폭을 8칸확보하고 오른쪽 정렬 음수면 왼쪽 정렬
	printf("%-8s %14s %5d \n", "김동수", "전자공학", 3);
	printf("%-8s %14s %5d \n", "장윤석", "부동산학", 2);
	printf("%-8s %14s %5d \n", "임수진", "응용통계학", 3);
	return 0;
}

int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf_s("%d %o %x", &num1, &num2, &num3);
	
	printf("입력된 정수 10진수 출력: ");
	printf("%d %d %d", num1, num2, num3);
	return 0;
}
*/
int main(void)
{
	float num1;
	double num2;
	long double num3;

	printf("실수 입력1(e 표기법으로): ");
	scanf_s("%f", &num1); //float형 데이터 입력
	printf("입력된 실수 %f \n", num1); //float 출력

	printf("실수 입력2(e 표기법으로): ");
	scanf_s("%lf", &num2); //double형 데이터 입력
	printf("입력된 실수 %f \n", num2); //double 출력

	printf("실수 입력3(e 표기법으로): ");
	scanf_s("%Lf", &num3); //long double형 데이터 입력
	printf("입력된 실수 %Lf \n", num3); //long double 출력
	return 0;
}