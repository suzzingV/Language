#include <stdio.h>
//이론
/*
int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
	int arr2d[2][4] = { 1,2,3,4,5,6,7,8 };
	int i, j;

	int* whoA[4] = { &num1, &num2, &num3, &num4 }; //포인터 배열
	int(*whoB)[4] = arr2d; //배열 포인터

	printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", whoB[i][j]);
		printf("\n");
	}
	return 0;
}

void ShowArr2DStyle(int(*arr)[4], int column) //배열 포인터
{
	int i, j;
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}

int Sum2Darr(int arr[][4], int column) //포인터 배열
{
	int sum = 0, i, j;
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++)
			sum += arr[i][j];
	}
	return sum;
}

int main(void)
{
	int arr1[2][4] = { 1,2,3,4,5,6,7,8 };
	int arr2[3][4] = { 1,1,1,1,3,3,3,3,5,5,5,5 };

	ShowArr2DStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));
	ShowArr2DStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));
	printf("arr1의 합: %d \n", Sum2Darr(arr1, sizeof(arr1) / sizeof(arr1[0])));
	printf("arr2의 합: %d \n", Sum2Darr(arr2, sizeof(arr2) / sizeof(arr2[0])));
	return 0;
}

int main(void)
{
	arr[i] == *(arr + i); //arr[0]의 주소값에 i*자료형크기
	arr[2][1] = 4;
	*(arr + 2)[1] = 4;
	*(arr[2] + 1) = 4; //arr[2] 주소값
	*(*(arr+2) + 1) = 4; //위의 식 치환
}

int main(void)
{
	int a[3][2] = { {1,2}, {3,4}, {5,6} };

	printf("a[0]: %p \n", a[0]);
	printf("*(a+0): %p \n", *(a + 0)); //열 갯수*자료형의 크기*i

	printf("a[1]: %p \n", a[1]);
	printf("*(a+1): %p \n", *(a + 1));

	printf("a[2]: %p \n", a[2]);
	printf("*(a+2): %p \n", *(a + 2));

	printf("%d %d \n", a[2][1], (*(a + 2))[1]);
	printf("%d %d \n", a[2][1], *(a[2] + 1));
	printf("%d %d \n", a[2][1], *(*(a + 2) + 1));
	return 0;
}
*/
//문제 1
int **ptr1 = arr1; //arr1이 가리키는 것은 int형 변수 //화살표로 생각하기
int* (*ptr2)[5] = arr2; //arr2이 가리키는 것은 int*형 변수
/*
//문제 2
void SimpleFuncOne(int* Oarr1, int Oarr2[])
void SimpleFuncTwo(int (*Darr1)[4], int (*Darr2)[4])

//문제 3
void ComplexFuncOne(int **Oarr, int *(*Darr)[5])
void ComplexFuncTwo(int ***Oarr, int ***(*Darr)[5])

//문제 4 
3 2
6 4
5 2
1 1

//문제 5
(*(arr+1))[0][1]
(*(arr[1]+0))[1]
(*(*(arr+1)+0))[1]
*(arr[1][0]+1)
*(*(*(arr+1)+0)+1)
*/