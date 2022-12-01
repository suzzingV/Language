#include <stdio.h>
/*
//자료형 변환: 자동 형 변환(묵시적 형 변환)/강제 형 변환(명시적 형 변환)

//자동형 변환
//대입 연산자의 왼편, 오른편에 존재하는 두 피연산자의 자료형 일치 않으면 왼편에 있는 연산자를 대상으로 형변환 자동으로 일어남
//저장소의 자료형에 맞춰 형 변환 일어나야 값 저장 가능하므로
//double num1=245; //245를 double형으로
//int num2=3.1415; //3.1415를 int형으로 //소수점 아랫값 버려짐 //소수부의 손실
//int num3=129; char ch=num3; //상위 바이트의 손실 //부호 바뀔 수 있음
int main(void)
{
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로: %f \n", num1);
	printf("실수 3.1415를 정수로: %d \n", num2);
	printf("큰 정수 129를 작은 정수로: %d \n", ch);
	return 0;
}

//정수의 승격에 의한 자동 형 변환
int main(void)
{
	short num1 = 15, num2 = 25;
	short num3 = num1 + num2; //연산 시 num1, num2 int형으로 바뀜 //정수의 승격 //대입연산과정에서의 형변환도 일어남(int->short)
}

//피연산자의 자료형 불일치로 발생하는 자동 형 변환
//double num1=5.15+19; //데이터 손실 최소화 하는 방식으로 진행 //int형을 double형으로
//int<long<long long<float<double<long double //서열
//소수부의 손실 때문에 정수 자료형보다 실수 자료형이 무조건 앞섬
//char, short는 연산 시 정수의 승격

//명시적 형 변환: 강제로 일으키는 형 변환
int main(void)
{
	int num1 = 3, num2 = 4; 
	double divResult; 
	divResult = num1 / num2; //정수나누기 정수 해서 0저장, divResult 자료형에 맞춰 변환 //연산 결과의 자료형은 피연산자의 자료형과 같음
	printf("나눗셈 결과: %f \n", divResult);
	return 0;
}

int main(void)
{
	int num1 = 3, num2 = 4;
	double divResult;
	divResult = (double)num1 / num2;  //num1=3.0, num2는 정수의 승격으로 4.0 //소괄호: 형 변환 연산자
	printf("나눗셈 결과: %f \n", divResult);
	return 0;
}
*/
int main(void)
{
	int num1 = 3;
	double num2 = 2.5 * num1; //이와 같이 자동 형 변환 발생 경우 형 변환 연산 명시해주는 게 좋음 //double num2=2.5*(double)num1;
}