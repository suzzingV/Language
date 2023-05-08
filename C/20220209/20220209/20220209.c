#include <stdio.h>
/*
int main(void)
{
	char str1[] = "My String"; //변수 형태의 문자열
	char* str2 = "Your String"; //상수 형태의 문자열 //상수 형태 문자열 포인터는 숫자 포인터랑 다르다
	printf("%s %s \n", str1, str2); //*() 안해도 그대로 출력 가능

	str2 = "Our String"; //포인터 변수는 가리키는 대상 바꿀 수 있다 //배열 문자열은 무조건 정해진 문자열만 가리켜야 한다
	printf("%s %s \n", str1, str2);
	
	str1[0] = 'X'; //변수 형태의 문자열은 요소 바꿀 수 있다
	//str2[0] = 'X'; //상수 형태의 문자열은 요소 바꿀 수 없다
	printf("%s %s \n", str1, str2);
	return 0;
}

int main(void)
{
	char* str = "Const String"; //char*str=0x1234
	printf("Show your string \n"); //printf(0x1234) //printf 함수는 문자열을 통째로 전달받는 함수 아니고 주소값을 전달받는 함수
	WhoAreYou("Hong"); //WhoAreYou 함수 //void WhoAreYou(char *str) 로 유추 가능 //전달되는 값은 H의 주소
	return 0;
}

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30; 
	int* arr[3] = { &num1, &num2, &num3 }; //포인터 배열

	printf("%d \n", *arr[0]);
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);
	return 0;
}

int main(void)
{
	char *strArr[3] = { "Simple", "String", "Array" }; //문자열 저장하는 포인터 배열
	printf("%s \n", strArr[0]);
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);
	return 0;
}

void ShowArayElem(int* param, int len)
{
	int i;

	for (i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

int main(void)
{
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
	return 0;
}

void ShowArayElem(int* param, int len) //void ShowArayElem(int param[], int len) //하지만 main함수에서 int *ptr=arr 은 int ptr[]=arr로 안됨
{
	int i;
	for (i = 0; i < len; i++) 
		printf("%d ", param[i]);
	printf("\n");
}
//함수 내에서 배열의 길이 계산 불가 배열을 전달하는 게 아니고 배열의 주소값을 전달하는 것이기에 sizeof(param)은 포인터변수의 크기다
void AddArayElem(int* param, int len, int add)
{
	int i;
	for (i = 0; i < len; i++)
		param[i] += add;
}

int main(void)
{
	int arr[3] = { 1,2,3 };
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));

	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	return 0;
}

void Swap(int n1, int n2) //Call-by-value (값 전달)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
} //n1 n2끼리만 값의 변환 일어났다 //num1 num2에는 영향 주지 않는다 //변수를 전달한 게 아니고 값을 전달했을 뿐

int main(void)
{
	int num1 = 10, num2 = 20;
	printf("num1 num2: %d %d \n", num1, num2);
	
	Swap(num1, num2); 
	printf("num1 num2: %d %d \n", num1, num2);
	return 0;
}

void Swap(int* ptr1, int* ptr2)
{
	int temp = *ptr1; //주소값 불러와서 포인터가 다른 한곳을 가리키도록
	*ptr1 = *ptr2; //이 주소엔 너가 들어오고 저 주소엔 너가들어가!
	*ptr2 = temp;
}

int main(void)
{
	int num1 = 10, num2 = 20;
	printf("num1 num2: %d %d \n", num1, num2);

	Swap(&num1, &num2);
	printf("num1 num2: %d %d \n", num1, num2);
	return 0;
}

int main(void)
{
	int num;
	scanf_s("%d", &num); //num 주소에 넣어줘 //Call-by-reference(주소값 전달)
}

int main(void)
{
	int str[30];
	scanf_s("%s", str); //문자열은 그 자체로 주소값이다 그래서 & 안 붙여도 됨
}

//문제 1
int SquareByValue(int num)
{
	return num * num;
}

void SquareByReference(int* num)
{
	(*num) *= (*num);
}

int main(void)
{
	int num = 4;
	printf("%d \n", SquareByValue(num)); //return 이 출력시켜주는 거 아님 printf해줘야됨
	SquareByReference(&num);
	printf("%d \n", num);
	return 0;
}

//문제 2
void Swap(int* ptr1, int* ptr2, int* ptr3)
{
	int temp1 = *ptr1;
	int temp2 = *ptr2;

	*ptr1 = *ptr3;
	*ptr2 = temp1;
	*ptr3 = temp2;
}

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	Swap(&num1, &num2, &num3);
	printf("%d %d %d \n", num1, num2, num3);
	return 0;
}

int main(void)
{
	const int MAX = 100;
	const double PI = 3.1415; //변수를 상수로 바꿔준다 값의 변경 불가
}

int main(void)
{
	int num = 20;
	const int * ptr = &num; //포인터변수가 참조하는 대상의 변경을 허용하지 않는 const 선언 //const가 제일 앞에
	*ptr = 30; //const했으므로 값 변경 불가
	num = 40; //변수이므로 값 변경 가능
	return 0;
}

int main(void)
{
	int num1 = 20;
	int num2 = 30;
	int* const ptr = &num1; //포인터 변수를 상수화하는 const 선언 //가리키는 위치 변경 불가 //const가 포인터변수 이름 앞에
	//ptr = &num2; //컴파일 에러 //위치 변경 불가
	*ptr = 40; //요소 변경은 가능
	printf("%d %d \n", num1, num2);
	return 0;
}

int main(void)
{
	const int* const ptr = &num; //const 둘 다 붙여서 요소와 위치 둘다 변경 불가
}

int main(void)
{
	const double PI = 3.1415; //요소 바꾸지마 const //변하면 안되는 값인 PI를 지킬 수 있다 //컴파일 시 발견되는 오류
	double rad;
	PI = 3.07; //잘못 삽입된 문장 하지만 앞에서 const 안 붙였으면 컴파일 시 발견 안 됨
	scanf_s("%lf", &rad);
	printf("circle area %f \n", PI * rad * rad);
	return 0;
}

void ShowData(const int* ptr)
{
	int* rptr = ptr; //ptr은 요소를 바꿀 수 없는 포인터 변수인데 int*rptr 앞에 const를 안 붙여줘서 바꿀 수 있는 포인터 변수가 됐다 여기서 경고 //const를 무의미하게 만드는 문장 
	printf("%d \n", *rptr);
	*rptr = 20; //이 자체는 문제가 없다 rptr은 아무 제약이 안 걸려있기 때문
	printf("%d \n", *rptr); //실행은 됨
}

int main(void)
{
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}

//문제 1
void OddPrint(int* ptr, int len);
void EvenPrint(int* ptr, int len);

int main(void)
{
	int arr[10] = { 0 };
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf_s("%d", &arr[i]);
	}

	OddPrint(arr, sizeof(arr) / sizeof(int));
	printf("\n");
	EvenPrint(arr, sizeof(arr) / sizeof(int));
	printf("\n");
	return 0;
}

void OddPrint(int* ptr, int len)
{
	int i;
	printf("홀수 출력: ");

	for (i = 0; i < len; i++)
	{
		if (ptr[i] % 2 == 1)
			printf("%d ", ptr[i]);
	}
}

void EvenPrint(int* ptr, int len)
{
	int i;
	printf("짝수 출력: ");

	for (i = 0; i < len; i++)
	{
		if (ptr[i] % 2 == 0)
			printf("%d ", ptr[i]);
	}
}

//문제 2
int main(void)
{
	int num, j;
	int i = 0;
	int arr[100] = { 0 };
	scanf_s("%d", &num);

	while (num != 0)
	{
		arr[i]=(num%2);
		num /= 2;
		i++;
	}
	
	for (j = (i - 1); j >= 0; j--)
		printf("%d", arr[j]);
	printf("\n");
	return 0;
}

//문제 3
int main(void)
{
	int num = 0, k=0, l=9;
	int i;
	int arr[10] = { 0 };

	for(i=0; i<10; i++)
	{
		printf("입력: ");
		scanf_s("%d", &num);

		if (num % 2 != 0)
		{
			arr[k] = num;
			k++;
		}
		
		else
		{
			arr[l] = num;
			l--;
		}
	}

	printf("배열 요소의 출력: ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}
*/
//문제 4
int StringLen(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}

void ReverseSame(char* str, int len)
{
	int i;
	int k = 0;
	for (i = 0; i < (len / 2); i++)
	{
		if (str[i] != str[len - 1 - i])
			k++;
	}

	if (k == 0)
		printf("회문입니다.");
	else
		printf("회문이 아닙니다.");
}

int main(void)
{
	int str[50];
	int len = 0;
	scanf_s("%s", str, sizeof(str));
	len = StringLen(str);
	ReverseSame(str, len);
	return 0;
}