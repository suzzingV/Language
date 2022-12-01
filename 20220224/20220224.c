#include <stdio.h>
//이론
/*
void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void ShowString(char* str) //==char str[]
{
	printf("%s \n", str);
}

int main(void)
{
	int num1 = 10, num2 = 20;
	char* str = "Function String"; //==char str[]="Function String"

	void (*fptr1)(int, int) = SimpleAdder; //함수 포인터 //배열의 이름과 같이 함수의 이름은 그 함수의 주소값을 나타낸다
	void(*fptr2)(char*) = ShowString; //fptr2=ShowString

	fptr1(num1, num2); //함수처럼 쓸 수 있다 //==SimpleAdder(num1, num2)
	fptr2(str); //==Showstring(str)
	return 0;
}
//
int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2)) //함수를 매개변수로 쓸 수 있다 //함수의 포인터를 가져올 수 있다
{
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if (age1 > age2)
		return age1; //if 조건마다 return 달 수 있다
	else if (age1 < age2)
		return age2;
	else
		return 0;
}

int YoungerFirst(int age1, int age2)
{
	if (age1 < age2)
		return age1;
	else if (age2 > age1)
		return age2;
	else
		return 0;
}

int main(void)
{
	int age1 = 20, age2 = 30;
	int first;

	printf("입장순서 1: \n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장 \n\n", age1, age2, first);
	
	printf("입장순서 2: \n");
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장 \n\n", age1, age2, first);
	return 0;
}
//
void SoSimpleFunc(void)
{
	printf("I'm so simple");
}

int main(void)
{
	int num = 20;
	void* ptr; //void형 포인터는 아무거나 담을 수 있다 대신에 포인터 연산은 못함 //일단 주소값에만 의미를 두고, 포인터의 형은 나중에 결정할 떄

	ptr = &num;
	printf("%p \n", ptr);

	ptr = SoSimpleFunc; //함수도 담을 수 있다
	printf("%p \n", ptr);
	return 0;
}
//
int main(void)
{
	int num = 20;
	void* ptr = &num;
	
	*ptr = 20; //void 포인터 값의 변경 불가
	ptr++; //연산 불가
	return 0;
}
//

int main(int argc, char* argv[]) //포인터 배열 //argc에는 위치와 문자열의 개수가 저장됨 /argv에는 위치와 문자열 저장됨
{
	int i = 0;
	printf("전달된 문자열의 수: %d \n", argc);

	for (i = 0; i < argc; i++)
		printf("%d번째 문자열: %s \n", i + 1, argv[i]);
	return 0;
}
//

void ShowAllString(int argc, char* argv[]) //char*argv[]==char**argv //char형 포인터 변수로 이뤄진 1차원 배열
{
	int i = 0;
	for (i = 0; i < argc; i++)
		printf("%s \n", argv[i]);
}

int main(void)
{
	char* str[3] = //char*(char[])형로 이뤄진 일차원 배열
	{
		"C Programming",
		"C++ Programming",
		"JAVA Programming"
	};

	ShowAllString(3, str);
	return 0;
}

int main(int argc, char* argv[])
{
	int i = 0;
	printf("전달된 문자열의 수: %d \n", argc);

	while (argv[i] != NULL) //배열의 마지막에 NULL이 삽입된다 (!='\0')
	{
		printf("%d번 째 문자열: %s \n", i + 1, argv[i]);
		i++;
	}
	return 0;
}

//도전 1
void RotateArr(int (*arr)[4])
{
	int i, j;
	int arrR[4][4];

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			arrR[i][j] = arr[i][j];
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if ((i == 0) && (j < 3))
				arr[j][3] = arrR[i][j];
			else if ((j == 3) && (i < 3))
				arr[3][3 - i] = arrR[i][j];
			else if ((i == 3) && (j > 0))
				arr[j][0] = arrR[i][j];
			else if ((j == 0) && (i > 0))
				arr[0][3 - i] = arrR[i][j];
			else
			{
				if ((i == 1) && (j == 1))
					arr[1][2] = arrR[i][j];
				else if ((i == 1) && (j == 2))
					arr[2][2] = arrR[i][j];
				else if ((i == 2) && (j == 2))
					arr[2][1] = arrR[i][j];
				else
					arr[1][1] = arrR[i][j];
			}
		}
	}
}

void PrintArr(int(*arr)[4])
{
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int arr[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int i, j;

	for (i = 0; i < 3; i++)
	{
		RotateArr(arr);
		PrintArr(arr);
		printf("\n");
	}
	return 0;
}
//도전 2
*/
int main(void)
{
	int n, i, j, k=1;
	int arr[100][100];
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &n);

	for (i = 0; i < (n-1); i++)
	{
		arr[0][i] = k;
		k++;
	}

	if (i == (n - 1))
	{
		for(i=0; i<(n-1); i++)
			arr[i][]
	}
}