#include <stdio.h>
/*
int main(void)
{
	int arr1[3][4];
	int arr2[7][9];
	printf("세로3, 가로4: %d \n", sizeof(arr1));
	printf("세로7, 가로9: %d \n", sizeof(arr2));
	return 0;
}

int main(void)
{
	int arr[3][3];
	arr[0][0] = 1; //1행 1열에 값 저장
	arr[0][1] = 2;
	arr[2][1] = 5;
	arr[N - 1][M - 1] = 20; //N행 M열에 20 저장
	printf("%d \n", arr[N - 1][M - 1]);
	return 0;
}

int main(void)
{
	int vil[4][2];
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d층 %d호 인구수:", i + 1, j + 1);
			scanf_s("%d", &vil[i][j]);
		}
	}
	
	for (i = 0; i < 4; i++)
		printf("%d층 인구수: %d \n", i + 1, vil[i][0] + vil[i][1]);
	return 0;
}

int main(void)
{
	int arr[3][2];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%p \n", &arr[i][j]); //2차원 배열의 주소값은 1차원적이다
	}
	return 0;
}

int main(void)
{
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	}; //배열의 초기화
	int arr1[3][3] = {
		{1},
		{4,5},
		{7,8,9}
	}; //앞에서부터 채워지고 남은 부분은 0
	int arr1[3][3] = {
		{1,0,0},
		{4,5,0},
		{7,8,9}
	};
	int arr2[3][3] = {
		1,2,3,
		4,5,6,
		7
	}; //중괄호 없이 초기화
	int arr2[3][3] = { 1,2,3,4,5,6,7 };
	int arr2[3][3] = { 1,2,3,4,5,6,7,0,0 };
	return 0;
}

int main(void)
{
	int i, j;
	
	int arr1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int arr2[3][3] = {
		{1},
		{4,5},
		{7,8,9}
	};

	int arr3[3][3] = { 1,2,3,4,5,6,7 };

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr1[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr2[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr3[i][j]);
		printf("\n");
	}
	printf("\n");
	return 0;
}

int main(void)
{
	//int arr[][] = { 1,2,3,4,5,6,7,8 }; //예측 불가
	//int arr[][4] = { 1,2,3,4,5,6,7,8 }; //행만 생략 가능
	//int arr[][2] = { 1,2,3,4,5,6,7,8 };
	int arr[][3] = { 1,2,3,4,5,6,7,8 }; //빈자리 0으로
	int i, j;

	for (i = 0; i<3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}

//문제 1
int main(void)
{
	int arr[3][9];
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
			arr[i][j] = (i + 2) * (j + 1);
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
	return 0;
}

//문제 2
int main(void)
{
	int arrA[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};

	int arrB[4][2];
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			arrB[i][j] = arrA[j][i];
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%2d", arrB[i][j]); //%nd: n자리에 맞춰 출력, 앞이 공백 %0nd: n자리에 맞춰 출력하되 공백은 0
		printf("\n");
	}
	return 0;
}

//문제 3
int score[5][5]; //전역 함수로 선언되면 자동으로 0으로 초기화됨

int main(void)
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			scanf_s("%d", &score[i][j]);
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			score[i][4] += score[i][j];
			score[4][i] += score[j][i];
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			score[4][4] += score[i][j];
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d ", score[i][j]);
		printf("\n");
	}
	return 0;
}

//문제 3 다른 방법
int score[5][5];

void WriteRecord(void)
{
	int i, j, sum;
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &score[i][j]);
			sum += score[i][j];
		}
		score[i][4] = sum;
	}
}

void TotalSub(void)
{
	int i, j;
	int sum;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			score[4][i] += score[j][i];
	}
}

void PrintScore(void)
{
	int i, j; 
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%3d", score[i][j]);
		printf("\n");
	}
}

int main(void)
{
	WriteRecord();
	TotalSub();
	PrintScore();
	return 0;
}

int main(void)
{
	int arr1[2][3][4];
	double arr2[5][5][5];
	printf("높이2, 세로3, 가로4 int형 배열: %d \n", sizeof(arr1));
	printf("높이5, 세로5, 가로5 double형 배열: %d \n", sizeof(arr2));
	return 0;
}

int main(void)
{
	int i, j, k, sum;
	int score[3][3][2] = { //높이 행 열 //한 겹씩 생각하기
		{
			{70, 80},
			{94, 90},
			{70, 85}
		},
		{
			{83, 90},
			{95, 60},
			{90,82}
		},
		{
			{98, 89},
			{99,94},
			{91,87}
		}
	};
	
	for(k=0; k<3; k++)
	{
		sum = 0;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 2; j++)
				sum += score[k][i][j];
		}
		printf("0 학급 전체 평균: %g \n", (double)sum / 6); //%g: double, float 출력
	}
	return 0;
}
*/
int main(void)
{

}