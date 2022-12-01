#include <stdio.h>
/*
int main(void)
{
	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;

	printf("0xA7의 10진수 정수 값: %d \n", num1); //%d는 10진수 정수로 출력해주는 것이므로 10진수 정수로 나온다
	printf("0x43의 10진수 정수 값: %d \n", num2);
	printf("032의 10진수 정수 값: %d \n", num3);
	printf("024의 10진수 정수 값: %d \n", num4);

	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%d+%d=%d \n", num3, num4, num3 - num4);
	return 0;
}

int main(void)
{
	int i;
	float num = 0.0; //실수 저장

	for (i = 0; i < 100; i++)
		num += 0.1;
	
	printf("0.1을 100번 더한 결과: %f \n", num); //%f: 10진수의 형태로 출력
	return 0;
}//실수 100% 정확히 표현 못함

int main(void)
{
	int num1 = 15; //00000000 00000000 00000000 00001111
	int num2 = 20; //00000000 00000000 00000000 00010100
	int num3 = num1 & num2; //둘다 1이어야 1반환
	printf("AND 연산의 결과: %d \n", num3);
	return 0;
}

int main(void)
{
	int num1 = 15; 
	int num2 = 20;
	int num3 = num1 | num2; //둘중 하나라도 1이면 1 반환
	printf("OR 연산의 결과: %d \n", num3);
	return 0;
}

int main(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 ^ num2; //두 값이 다르면 1 반환
	printf("XOR 연산의 결과: %d \n", num3);
	return 0;
}

int main(void)
{
	int num1 = 15;
	int num2 = ~num1; //0이면 1, 1이면 0 반환
	printf("NOT 연산의 결과: %d \n", num2);
	return 0;
}

int main(void)
{
	int num = 15;
	
	int result1 = num << 1; //num의 비트열을 왼쪽으로 1칸씩 이동
	int result2 = num << 2; //                        2칸씩 이동
	int result3 = num << 3;

	printf("1칸 이동 결과: %d \n", result1);
	printf("2칸 이동 결과: %d \n", result2);
	printf("3칸 이동 결과: %d \n", result3);
	return 0;
} //비트열을 왼쪽으로 한 칸씩 이동시킬 때마다 정수의 값은 2배가 된다 //오른쪽은 2로 나누어진다

int main(void)
{
	int num = -16;
	printf("2칸 오른쪽 이동의 결과: %d \n", num >> 2);
	printf("3칸 오른쪽 이동의 결과: %d \n", num >> 3);
	return 0; 
} //밀려나고 남은 오른쪽의 자리들을 1로 채울수도, 0으로 채울수도 있다. 이 경우는 부호를 유지하는 1을 채운 경우이다

int main(void)
{
	int num;

	printf("정수 입력: ");
	scanf_s("%d", &num);

	num = ~num;
	num += 1; //음수든 양수든 반전시키는 방법 똑같다
	printf("결과: %d \n", num); 
	return 0;
}

int main(void)
{
	int num = 3;

	printf("결과: %d \n", (num << 3) >> 2);
	return 0;
}

int main(void)
{
	int num = 10;
	int sz1 = sizeof(num);
	int sz2 = sizeof(int); //sizeof는 함수가 아닌 연산자이다
	return 0;
}

int main(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수 ch의 크기: %d \n", sizeof(ch));
	printf("변수 inum의 크기: %d \n", sizeof(inum));
	printf("변수 dnum의 크기: %d \n", sizeof(dnum)); //변수의 크기

	printf("char의 크기: %d \n", sizeof(char));
	printf("int의 크기: %d \n", sizeof(int));
	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));
	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double)); //자료형의 크기
	return 0;
}

int main(void)
{
	char num1 = 1, num2 = 2, result1;
	short num3 = 300, num4 = 400, result2;

	printf("size of num1&num2: %d, %d \n", sizeof(num1), sizeof(num2));
	printf("size of num3&num4: %d, %d \n", sizeof(num3), sizeof(num4));

	printf("size of char add: %d \n", sizeof(num1 + num2)); //int가 CPU가 처리하기에 가장 적합하므로 int형으로 덧셈한다. 그래서 4바이트
	printf("size of short add: %d \n", sizeof(num3 + num4));

	result1 = num1 + num2;
	result2 = num3 + num4;
	printf("size of result1&result2: %d, %d \n", sizeof(result1), sizeof(result2));
	return 0;
}

int main(void)
{
	double rad;
	double area;

	printf("원의 반지름 입력: ");
	scanf_s("%lf", &rad); //double 입력 받을 때는 %lf

	area = rad * rad * 3.1415;
	printf("원의 넓이: %f \n", area); //double 출력할 때는 %f
	return 0;
}

int main(void)
{
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1); //문자 형태로 출력: %c
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	return 0;
}

int main(void)
{
	int leftx, lefty;
	int rightx, righty;
	int area;

	printf("좌 상단의 x, y 좌표 입력: ");
	scanf_s("%d %d", &leftx, &lefty);
	printf("우 상단의 x, y 좌표 입력: ");
	scanf_s("%d %d", &rightx, &righty);

	area = (rightx - leftx) * (righty - lefty);
	printf("좌 상단의 x, y 좌표: %d %d \n", leftx, lefty);
	printf("우 상단의 x, y 좌표: %d %d \n", rightx, righty);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다. \n", area);
	return 0;
}

int main(void)
{
	double num1, num2;

	printf("두 개의 실수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("합: %f \n", num1 + num2);
	printf("차: %f \n", num1 - num2);
	printf("곱: %f \n", num1 * num2);
	printf("몫: %f \n", num1 / num2);
	return 0;
}

int main(void)
{
	char num;

	printf("정수 입력: ");
	scanf_s("%d", &num);

	printf("아스키 코드 문자: %c", num);
	return 0;
}
*/
int main(void)
{
	char al;

	printf("알파벳 입력: ");
	scanf_s("%c", &al);

	printf("아스키 코드 값: %d", al);
	return 0;
}