#include <stdio.h>
/*
int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf_s("%d %o %x", &num1, &num2, &num3); //8진수, 16진수 양의 정수
	
	printf("입력된 정수 10진수 출력: ");
	printf("%d %d %d \n", num1, num2, num3);
	return 0;
}
*/
int main(void)
{
	float num1;
	double num2;
	long double num3;

	printf("실수 입력 1(e 표기법으로): "); scanf_s("%f", &num1); //%e %g %f: float형 데이터 입력 //실수 입력 e표기법 가능
	printf("%f \n", num1); //출력 %f: float, double형 출력
	printf("실수 입력 2(e 표기법으로): "); scanf_s("%lf", &num2); //%lf: double형 데이터 입력
	printf("%f \n", num2);
	printf("실수 입력 3(e 표기법으로): "); scanf_s("%Lf", &num3); //%Lf: long double형 데이터 입력
	printf("%Lf \n", num3); //출력 %Lf: long double형 출력
	return 0;
}