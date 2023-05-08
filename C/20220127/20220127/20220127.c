#include <stdio.h>
/*
int main(void)
{
	int num = 7;
	int* pnum; //포인터 변수 pnum 선언
	pnum = &num; //num의 주소값을 pnum에 저장
}

int main(void)
{
	int* pnum1; //int형 변수를 가리키는 pnum1의 선언 //type*ptr //int형 포인터 변수 pnum1
	double* pnum2; //double형 변수를 가리키는 pnum2의 선언 //double형 포인터 변수 pnum2
	unsigned int* pnum3; //unsigned int형 변수를 가리키는 pnum3의 선언 //unsigned int형 포인터 변수 pnum3
}

int main(void)
{
	int num = 5; 
	int* pnum = &num; //&연산자의 피연산자는 변수여야 한다. 상수 안됨

	int num1 = 5;
	double* pnum1 = &num1; //변수의 자료형과 포인터 변수의 자료형이 같아야한다
	
	double num2 = 5;
	int* pnum2 = &num2;
}

int main(void)
{
	int num = 10;
	int* pnum = &num; //포인터 변수 pnum이 변수 num을 가리키게 하는 문장
	*pnum = 20; //pnum이 가리키는 변수에 20을 저장해라
	printf("%d", *pnum); 
	return 0;
}

int main(void)
{
	int num1 = 100, num2 = 100; //int num, *pnum 가능: 한 문장 안에서 동시에 선언 가능
	int* pnum;

	pnum = &num1; 
	(*pnum) += 30;
	
	pnum = &num2;
	(*pnum) -= 30;

	printf("num1: %d, num2: %d \n", num1, num2);
	return 0;
}

int main(void)
{
	double num = 3.14;
	int* pnum = &num; //4바이트를 읽어들여서 이를 정수로 해석한다 //에러는 뜨지 않지만 이상한 값 출력
	printf("%d", *pnum); 
	return 0;
}

int main(void)
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;
	
	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);
	return 0;
}

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1, * ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("ptr1가 가리키는 변수에 저장된 값: %d, ptr2: %d \n", *ptr1, *ptr2);
	return 0;
}

int main(void)
{
	int* ptr; //잘못된 포인터 사용 //초기화 안하면 쓰레기값으로 초기화
	*ptr = 200;
	return 0;
}

int main(void)
{
	int* ptr = 125; //초기화 하긴 했지만 쓰레기값 초기화한 것과 다르지 않다 //125번지가 어딘줄 알고..?
	*ptr = 10;
	return 0;
}

int main(void)
{
	int* ptr1 = 0; //0번지 의미하지 않음 아무데도 가리키지 않는다 //널포인터
	int* ptr2 = NULL; //NULL은 사실상 0 의미 //나중에 주소값 넣을 거면 이렇게 널로 초기화한다 //널포인터
}
*/
int main(void)
{
	int arr[3] = { 1,2,3 };
	printf("배열의 이름: %p \n", arr); //주소값 출력 서식문자: %p
	printf("첫 번째 요소: %p \n", &arr[0]);
	printf("두 번째 요소: %p \n", &arr[1]);
	printf("세 번째 요소: %p \n", &arr[2]);
	//arr=&arr[i]; //이 문장은 컴파일 에러를 일으킨다
	return 0;
}