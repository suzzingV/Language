#include <stdio.h>
/*
int main(void)
{
	int num1, num2;
	num1 = printf("12345 \n"); //이렇게 변수에 printf 넣어도 출력됨
	num2 = printf("I love you \n");
	printf("%d %d \n", num1, num2); //printf 함수는 문자열의 길이를 반환한다
	return 0;
}

int Add(int num1, int num2) //반환형 함수이름(매개변수) //인자는 여러 개 될 수 있음
{
	int result = num1 + num2; 
	return result; //값 반환 //result에 저장한 값을 Add 함수를 호출한 영역으로 전달 //반환할 값의 수는 하나
}

int Add(int num1, int num2)
{
	return num1 + num2; //꼭 변수에 안 넣어도 됨
}

int main(void)
{
	int result;
	result = Add(3, 4);
	printf("덧셈 결과 1: %d \n", result);
	result = Add(5, 8);
	printf("덧셈 결과 2: %d \n", result);
	return 0;
}

void ShowAddResult(int num) //반환값 없다 //return이 없다
{ 
	printf("덧셈 결과 출력: %d \n", num); //printf는 반환값 없는 함수
}

int ReadNum(void) //인자 전달 없다 //입력받는 함수
{
	int num; 
	scanf_s("%d \n", &num);
	return num;
}

void HowToUseThisProg(void) //인자전달 없고 반환값 없다
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}

int Add(int num1, int num2)
{
	return num1 + num2;
}

void ShowAddResult(int num) //반환없고 인자 있다
{
	printf("%d \n", num);
}

int ReadNum(void) //반환 있고 인자 없다
{
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg(void) //반환 없고 인자 없다
{
	printf("두 개의 정수를 입력하시면 덧셈 결과가 출력됩니다. \n");
	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}

int main(void)
{
	int result, num1, num2;
	HowToUseThisProg();
	num1=ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;
}

void NoReturnType(int num)
{
	if (num < 0)
		return; //반환값 없는 경우에도 빠져나오는 용도로 return 쓸 수 있다
}

int Increment(int n)
{
	n++;
	return n;
}

int main(void)
{
	int num=2;
	num = Increment(num);
	return 0;
} //함수 만드는 위치 중요
*/
int Increment(int n); //함수의 선언: 뒤에 나올거니까 나오면 컴파일 해줘 //int Increment(int)로도 가능 //int Add(int num1, num2)==int Add(int, int) //정보만 주면 된다

int main(void)
{
	int num = 2;
	num = Increment(num);
	return 0;
}

int Increment(int n)
{
	n++;
	return n;
} //이러면 순서 바뀌어도 됨