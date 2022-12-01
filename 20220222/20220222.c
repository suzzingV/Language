#include <stdio.h>

//이론
/*
int main(void)
{
	double num = 3.14; 
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p %9p \n", ptr, *dptr);
	printf("%9g %9g \n", num, **dptr);
	ptr2 = *dptr;
	*ptr2 = 10.99;
	printf("%9g %9g \n", num, **dptr);
	return 0;
}

void SwapIntPtr(int* p1, int* p2)
{
	int* temp = p1;
	p1 = p2; //int *p1은 p1으로 전달된 주소값만 전달하는 거임 따라서 p1이 가르키는 것만 바뀜
	p2 = temp;
}

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2; 
	printf("*ptr1, ptr2: %d %d \n", *ptr1, *ptr2);

	SwapIntPtr(ptr1, ptr2); //ptr1과 ptr2에는 영향을 주지 않는다
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
	return 0;
}

void SwapIntPtr(int** dp1, int** dp2)
{
	int* temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}
int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("ptr1, ptr2: %d %d \n", *ptr1, *ptr2);
	
	SwapIntPtr(&ptr1, &ptr2); //포인터의 주소값
	printf("ptr1, ptr2: %d %d \n", *ptr1, *ptr2);
	return 0;
}

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1; 
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int* ptrarr[] = { ptr1, ptr2, ptr3 }; //포인터 배열
	int** dptr = ptrarr; //배열 자체가 주소값

	printf("%d %d %d \n", *(ptrarr[0]), *(ptrarr[1]), *(ptrarr[2]));
	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
	return 0;
}

int main(void)
{
	int num = 100;
	int* ptr = &num;
	int** dptr = &ptr;
	int*** tptr = &dptr;

	printf("%d %d \n", **dptr, ***tptr);
	return 0;
}

void MaxAndMin(int** dmaxPtr, int** dminPtr, int arr[], int size)
{
	int i, maxInx = 0, minInx=0;

	for (i = 0; i < size; i++)
	{
		if (arr[maxInx] < arr[i])
			maxInx = i;
		if (arr[minInx] > arr[i])
			minInx = i;
	}

	*dmaxPtr = &arr[maxInx];
	*dminPtr = &arr[minInx];
}
int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];
	int i;
	maxPtr = &arr[0], minPtr = &arr[0];
	for (i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);

	MaxAndMin(&maxPtr, &minPtr, arr, sizeof(arr)/sizeof(int));
	return 0;
}

int main(void)
{
	int arr2d[3][3];
	printf("%d \n", arr2d);
	printf("%d \n", arr2d[0]);
	printf("%d \n\n", &arr2d[0][0]); //주소값을 정수로

	printf("%d \n", arr2d[1]);
	printf("%d \n\n", &arr2d[1][0]);
	
	printf("%d \n", arr2d[2]);
	printf("%d \n\n", &arr2d[2][0]);
	
	printf("%d \n", sizeof(arr2d));
	printf("%d \n", sizeof(arr2d[0]));
	printf("%d \n", sizeof(arr2d[1]));
	printf("%d \n", sizeof(arr2d[2])); //주소값은 같지만 대상은 다르다
	return 0;
}

int main(void)
{
	int iarr[3];
	double darr[7];

	printf("%p \n", iarr + 1); //정수형 포인터이므로 1 증가하면 4 증가
	printf("%p \n", darr + 1); //double형 포인터이므로 1 증가하면 8 증가
	return 0;
}

int main(void)
{
	int arr1[3][2];
	int arr2[2][3];

	printf("%p \n", arr1);
	printf("%p \n", arr1 + 1); //한 칸 밑으로 가려면 8자리 가야하므로 8 증가
	printf("%p \n", arr1 + 2); //두 칸 밑으로 가려면 16자리 가야하므로 16 증가

	printf("%p \n", arr2);
	printf("%p \n", arr2 + 1); //한 칸 밑으로 가려면 12자리 가야하므로 12 증가
	printf("%p \n", arr2 + 2); //두 칸 밑으로 가려면 24자리 가야하므로 24 증가
	return 0;
}
*/
int main(void)
{
	int arr1[2][2] = {
		{1,2}, {3,4}
	};
	int arr2[3][2] = {
		{1,2}, {3,4}, {5,6}
	};
	int arr3[4][2] = {
		{1,2},{3,4},{5,6},{7,8}
	};
	int i;
	int(* ptr)[2]; //1 증가하면 sizeof(int)*2만큼 포인터 주소값이 증가하는 포인터 변수
	
	ptr = arr1;
	printf("** Show 2,2 arr1 ** \n");
	for (i = 0; i < 2; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]); //ptr을 배열처럼 쓸 수 있다

	ptr = arr2;
	printf("** Show 3, 2 arr2 ** \n");
	for (i = 0; i < 3; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);

	ptr = arr3;
	printf("** Show 4, 2 arr3 ** \n");
	for (i = 0; i < 4; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);
	return 0;
}