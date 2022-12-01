#include <stdio.h>
/*
int main(void)
{
	int oneDimarr[4]; //자료형/이름/길이
	int arr1[7]; //길이가 7인 int형 1차원 배열 arr1
	float arr2[10]; //배열의 길이는 가급적 상수로
	double arr3[12];
}

int main(void)
{
	int arr[3];
	arr[0] = 10; //값 저장
	arr[1] = 12;
	arr[2] = 25;
}

int main(void)
{
	int arr[5];
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	
	for (i = 0; i < 5; i++)
		sum += arr[i];
	
	printf("배열요소에 저장된 값의 합: %d \n", sum);
	return 0;
}

int main(void)
{
	int arr1[5] = { 1,2,3,4,5 }; //배열 초기화
	int arr2[] = { 1,2,3,4,5,6,7 }; //초기화값 있으면 초기화값 수만큼 길이 결정, 길이 생략 가능
	int arr3[5] = { 1,2 }; //길이가 초기화된 값보다 크면 왼쪽부터 채워지고 나머지는 0
	int ar1len, ar2len, ar3len, i;

	printf("arr1의 크기: %d \n", sizeof(arr1)); //길이!=크기
	printf("arr2의 크기: %d \n", sizeof(arr2));
	printf("arr3의 크기: %d \n", sizeof(arr3));

	ar1len = sizeof(arr1) / sizeof(int); //sizeof(int): int의 크기, int의 크기는 4바이트
	ar2len = sizeof(arr2) / sizeof(int);
	ar3len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1len; i++)
		printf("%d ", arr1[i]); //배열은 인덱스 0부터 시작
	printf("\n");

	for (i = 0; i < ar2len; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	for (i = 0; i < ar3len; i++)
		printf("%d ", arr3[i]);
	printf("\n");
	return 0;
}

int main(void)
{
	int arr[5];
	int i, max, min;
	int tot = 0;

	for (i = 0; i < 5; i++)
	{
		printf("정수 입력: ");
		scanf_s("%d", &arr[i]); //입력받을때 이렇게 인덱스로 가능
	}

	max=min=arr[0]
	for (i = 1; i < 5; i++)
	{
		if (max < arr[i]) //현 시점 max와 비교
			max = arr[i]; 
		else
			continue;
	}

	for (i = 1; i < 5; i++)
	{
		if (min > arr[i])
			min = arr[i];
		else
			continue;
	}

	for (i = 0; i < 5; i++)
		tot += arr[i];
	//이 세 개 하나로 묶을 수 있다

	printf("최댓값: %d \n", max);
	printf("최솟값: %d \n", min);
	printf("총합: %d \n", tot);
	return 0;
}

int main(void)
{
	char arr[9] = { 'G', 'o','o','d',' ', 't','i','m','e' }; //공백도 하나의 문자열로 가능 //하나의 문자는 작은 따옴표로
	int i;
	
	for (i = 0; i < 9; i++)
		printf("%c", arr[i]);
	return 0;
}

int main(void)
{
	char str[] = "Good morning!"; //문자열은 큰 따옴표
	printf("배열 str의 크기: %d \n", sizeof(str)); //문자열의 크기는 공백과 널문자 포함 //문자 하나당 1바이트
	printf("널 문자 문자형 출력: %c \n", str[13]); //널 문자 문자형은 아무것도 출력 안됨
	printf("널 문자 정수형 출력: %d \n", str[13]); //널 문자 아스키코드값은 0

	str[12] = '?'; //str에 저장된 문자열 데이터 변경 가능
	printf("문자열 출력: %s \n", str); //문자열 출력 서식문자: %s
	return 0;
}

int main(void)
{
	char nu = '\0';
	char sp = ' '; //공백의 아스키 코드 값은 32
	printf("%d %d", nu, sp);
	return 0;
}

int main(void)
{
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf_s("%s", str); //문자열 입력 서식문자: %s //문자열 입력받을 땐 &없어야 됨
	printf("입력받은 문자열: %s \n", str);

	printf("문자 단위 출력: ");
	while (str[idx] != '\0') //\0 하나의 문자로 인식 //입력받은 문자열의 끝에 \0이 있다
	{
		printf("%c", str[idx]); 
		idx++;
	}
	printf("\n");
	return 0;
}

int main(void)
{
	char arr1[] = { 'H','i','~' }; //마지막에 널 문자 없으므로 문자 배열
	char arr2[] = { 'H','i','~','\0' }; //마지막에 널 문자 있으므로 문자열
}

int main(void)
{
	char str[50] = "I like C programming";
	printf("string: %s \n", str);

	str[8] = '\0'; //'\0'=0 : \0의 아스키 코드 값이 0이므로
	printf("string: %s \n", str); //널 문자가 문자열의 끝
	
	str[6] = '\0';
	printf("string: %s \n", str);

	str[1] = '\0';
	printf("string: %s \n", str);
	return 0;
}

int main(void)
{
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf_s("%s", str, sizeof(str)); //문자열의 크기를 입력받고자 할 때는 문자열의 크기를 추가해줘야 한다
	printf("입력받은 문자열: %s \n", str);

	while (str[idx] != '\0') //scanf 함수가 데이터를 구분짓는 기준이 공백이므로 공백 포함된 문자열은 공백을 기준으로 여러개의 문자열을 입력한 것으로 인식해서 맨 앞의 문자열만 출력된다
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}

//문제 1
int main(void)
{
	char str[50];
	int idx = 0;
	
	printf("단어 입력: ");
	scanf_s("%s", str, sizeof(str));
	
	while (str[idx] != '\0')
		idx++;
	
	printf("영단어의 길이: %d \n", idx);
	return 0;
}

//문제 2
int main(void)
{
	char str[50];
	int len=0;
	int idx;
	printf("영단어 입력: ");
	scanf_s("%s", str, sizeof(str));
	
	while (str[len] != '\0')
		len++;

	for (idx = len; idx >= 0; idx--)
		printf("%c", str[idx]);
	return 0;
}
*/
//문제 3
int main(void)
{
	char str[50];
	int len=0;
	int idx, max;
	printf("영단어 입력: ");
	scanf_s("%s", str, sizeof(str));
	
	while (str[len] != '\0')
		len++;
	
	max = str[0];
	for (idx = 1; idx < len; idx++)
	{
		if (max < str[idx])
			max = str[idx];
		else //else 없어도 됨
			continue;
	}
	printf("아스키 코드 값이 가장 큰 문자: %c", max);
	return 0;
}