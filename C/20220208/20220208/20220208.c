#include <stdio.h>
/*
int main(void)
{
	int arr[3] = { 0,1,2 };
	printf("배열의 이름: %p \n", arr); //%p: 주소값 출력 서식문자 //배열의 주소값은 제일 앞 요소의 주소값
	printf("첫 번째 요소: %p \n", &arr[0]); //&arr[i]: arr 배열의 i번째 요소의 주소값 //*pnum: 해당 값
	printf("두 번째 요소: %p \n", &arr[1]);
	printf("세 번째 요소: %p \n", &arr[2]);
	//arr=&arr[i]; //컴파일 에러: 배열의 이름은 값을 지정할 수 없다 //포인터 변수는 주소값 변경 가능하지만 배열은 불가능하다
	return 0;
} //배열의 이름도 포인터의 한 종류이다. 따라서 배열의 이름을 피연산자로 하는 *연산 가능하다

int main(void)
{
	int arr1[3] = { 1,2,3 }; //arr1 은 int형 포인터
	double arr2[3] = { 1.1, 2.2, 3.3 }; //arr2은 double형 포인터
	
	printf("%d %g \n", *arr1, *arr2); //*arr1: arr1의 첫 번째 요소 (arr1[0]) //%g: double형 출력 서식문자
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g \n", arr1[0], arr2[0]);
	printf("%d %g \n", *arr1, *arr2);
	return 0;
}

int main(void)
{
	int arr[3] = { 15, 25, 35 };
	int* ptr = &arr[0]; //int *ptr=arr와 같음 //포인터를 배열의 이름처럼 사용할 수 있다

	printf("%d %d \n", arr[0], ptr[0]);
	printf("%d %d \n", arr[1], ptr[1]);
	printf("%d %d \n", arr[2], ptr[2]);
	printf("%d %d \n", *arr, *ptr); //*arr: arr의 첫번째 요소
	return 0;
}

int main(void)
{
	int* ptr1 = 0x0010; //16진수
	double* ptr2 = 0x0010;

	printf("%p %p \n", ptr1 + 1, ptr1 + 2); //4 증가, 8 증가 //정수 1당 4칸 //%p: 값을 16진수로 표현
	printf("%p %p \n", ptr2 + 1, ptr2 + 2); //8 증가, 16 증가 //정수 1당 8칸 //16진수: 0 1 2 3 4 5 6 7 8 9 a b c d e f 로 표현 ptr2+2는 이거 넘어가므로 0x0020
	
	printf("%p %p \n", ptr1, ptr2);
	ptr1++; //4 증가 //값 자체를 변경
	ptr2++; //8 증가
	printf("%p %p \n", ptr1, ptr2);
	return 0;
}

int main(void)
{
	int arr[3] = { 11,22,33 };
	int* ptr = arr; //int*ptr=&arr[0]과 동일
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2)); //그림 그려 생각하기 정수의 주소값이 1만큼 증가하면 네칸 옮기는 거니까 arr[1]이다
	
	printf("%d ", *ptr); ptr++; //주소값 1 증가하면 4칸 옮긴다=arr[1]
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n"); 
	return 0;
}

//문제 1
int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int i;

	for (i = 0; i < 5; i++)
	{
		*ptr += 2;
		ptr++;
	}
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	return 0;

}
*/
//문제 2
int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int i;
	
	for (i = 0; i < 5; i++)
		*(ptr+i) += 2;
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	return 0;
}
/*
//문제 3
int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int i;
	int result=0;

	for (i = 0; i < 5; i++)
		result += *(ptr - i);
	printf("%d \n", result);
	return 0;
}

//문제 4
int main(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int* ptr1 = arr;
	int* ptr2 = &arr[5];
	int i;

	for (i = 0; i < 3; i++)
	{
		*(ptr1 + i) = *(ptr2 - i);
		*(ptr2 - i) = 7 - *(ptr1 + i);
	}
	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);
	return 0;
}

int main(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int* ptr1 = arr;
	int* ptr2 = &arr[5];
	int i, temp;

	for (i = 0; i < 3; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++; ptr2--;
	}
	for (i = 0; i < 6; i++)
		printf("%d \n", arr[i]);
	return 0;
}
*/