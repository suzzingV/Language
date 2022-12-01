#include <stdio.h>
/*
void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void ShowString(char* str)
{
	printf("%s \n", str);
}

int main(void)
{
	char* str = "Function Pointer";
	int num1 = 10, num2 = 20;

	void (*fptr1) (int, int) = SimpleAdder; //함수 포인터: 반환형 (*변수)(매개변수) //함수 이름은 주소값
	void (*fptr2) (char*) = ShowString;
	
	fptr1(num1, num2); //배열처럼 가능
	fptr2(str);
	return 0;
}

int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2)) //함수의 포인터를 매개변수로 받을 수 있다 //함수 데리고 오기
{
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if (age1 > age2)
		return age1;
	else if (age1 < age2)
		return age2;
	else
		return 0;
}

int YoungerFirst(int age1, int age2)
{
	if (age1 > age2)
		return age2;
	else if (age1 < age2)
		return age1;
	else
		return 0;
}

int main(void)
{
	int age1 = 20;
	int age2 = 30;
	int first;

	printf("입장 순서 1 \n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장! \n", age1, age2, first);

	printf("입장 순서 2 \n");
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장! \n",age1, age2, first);
	return 0;
}

void SoSimpleFunc(void)
{
	printf("I'm so simple");
}

int main(void)
{
	int num = 20;
	void* ptr; //void 포인터: 무엇이든 담을 수 있다

	ptr = &num;
	printf("%p \n", ptr);
	printf("%d \n", *ptr); //void 포인터는 값의 연산 불가능 참조, 변경 불가능

	ptr = SoSimpleFunc;
	printf("%p \n", ptr);
	return 0;
}
//일단 주소값에만 의미를 두고 포인터 형 나중에 결정할 때 유용
*/
