#include <stdio.h>
/*
int NumberCompare(int num1, int num2);

int main(void)
{
	printf("3과 4 중에서 큰 수는 %d이다. \n", NumberCompare(3, 4));
	printf("7과 2 중에서 큰 수는 %d이다. \n", NumberCompare(7, 2));
	return 0;
}

int NumberCompare(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main(void)
{
	int num1, num2; 
	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d와 %d 중 절댓값이 큰 정수: %d \n",
		num1, num2, AbsoCompare(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2)
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2)) //호출된 함수 내에서 또 다른 함수 호출
		return num1;
	else
		return num2;
}

int GetAbsoValue(int num)
{
	if (num > 0)
		return num;
	else
		return -num;
}

//문제 1
int MaximumNumber(int num1, int num2, int num3)
{
	if (num1 > num2 && num1 > num3)
		return num1;
	else if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3;
}
//if (num1>num2)
//	return (num1>num3)?num1: num3;
//else
//	return (num2>num3)?num2: num3;

int MinimumNumber(int num1, int num2, int num3)
{
	if (num1 < num2 && num1 < num3)
		return num1;
	else if (num2 < num1 && num2 < num3)
		return num2;
	else
		return num3;
}

int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("세 정수 중 가장 큰 수: %d \n", MaximumNumber(num1, num2, num3));
	printf("세 정수 중 가장 작은 수: %d \n", MinimumNumber(num1, num2, num3));
	return 0;
}

//문제 2
double CelToFah(double num);
double FahToCel(double num);

int main(void)
{
	double num;
	char tem;
	
	printf("C or F ? ");
	scanf_s("%c", &tem);
	printf("온도 입력: ");
	scanf_s("%lf", &num);

	if (tem == 'C')
		printf("화씨 온도는 %f", CelToFah(num));
	else
		printf("섭씨 온도는 %f", FahToCel(num));
	return 0;
}

double CelToFah(double num)
{
	double result = 0;
	result = 1.8 * num + 32;
	return result;
}

double FahToCel(double num)
{
	double result = 0;
	result = (num - 32) / 1.8;
	return result;
}

void Pibonacci(int num)
{
	int num1 = 0, num2 = 1, result=0;
	int i;

	if (num == 1)
		printf("%d", num1);
	else if (num == 2)
		printf("%d \n %d", num1, num2);
	else
	{
		printf("%d \n%d \n", num1, num2);
		for (i=0; i<num-2; i++)
		{
			result = num1 + num2;
			printf("%d \n", result);
			num1 = num2;
			num2 = result;
			
		}
	}

}
int main(void)
{
	Pibonacci(6);
	return 0;
}

int SimpleFuncOne(void)
{
	int num = 10; //지역변수, 이 중괄호 나가면 소멸
	num++;
	printf("SimpleFuncOne num: %d \n", num); //printf 그냥 출력됨
	return 0;
}

int SimpleFuncTwo(void)
{
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("num1&num2: %d %d \n", num1, num2);
	return 0;
}
int main(void)
{
	int num = 17;
	SimpleFuncOne(); //SimpleFuncOne의 num과 main의 num 동시에 존재, 끝나면 Simple의 num만 소멸
	SimpleFuncTwo();
	printf("main num: %d \n", num);
	return 0;
}

int main(void)
{
	int cnt;
	for (cnt = 0; cnt < 3; cnt++)
	{
		int num = 0;
		num++;
		printf("%d번째 반복, 지역변수 num은 %d. \n", cnt + 1, num); //반복문 내에서 지역변수 있을 수 있다
	} //반복될 때마다 num 계속 소멸과 생성 반복
	
	if (cnt == 3) //위에서 cnt==3일 때 멈췄다
	{
		int num = 7;
		num++;
		printf("if 문 내에 존재하는 지역변수 num은 %d. \n", num); //if 문 내에서 지역변수
	}
}

int main(void)
{
	int num = 1;

	if (num == 1)
	{
		int num = 7; //이거 없으면 main 함수의 num으로 인식
		num += 10;
		printf("if문 내 지역변수 num: %d \n", num); //지역변수는 외부에 선언된 동일한 이름의 변수 가림
	}
	printf("main 함수 내 지역변수 num: %d \n", num);
	return 0;
}

void Add(int val);
int num; //전역변수: 어디서든 가능 //0으로 자동으로 초기화됨

int main(void)
{
	printf("num: %d \n", num);
	Add(3);
	printf("num: %d \n", num);
	num++;
	printf("num: %d \n", num);
	return 0;
}

void Add(int val)
{
	num += val;
}

int Add(int val);
int num = 1;

int main(void)
{
	int num = 5;
	printf("num: %d \n", Add(3)); 
	printf("num:%d\n", num + 9); //해당 지역 내에서는 전역변수가 가려지고 지역변수가 우선된다
	return 0;
}

int Add(int val)
{
	int num = 9; //지역변수 우선
	num += val;
	return num;
}

void SimpleFunc(void)
{
	static int num1 = 0; //초기화하지 않으면 0 초기화 //전역변수 특징 갖게됨: 딱 1회 초기화되고 프로그램 종료 시까지 메모리공간에 저장 //하지만 범위는 중괄호 안에서만 //하지만 메모리에 계속 남아있다
	int num2 = 0; //초기화하지 않으면 쓰레기 값 초기화 //함수 나갈 때마다 초기화됨
	num1++, num2++;
	printf("static: %d, local: %d", num1, num2);
}

int main(void)
{
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc();
	return 0;
}

int SoSimple(void)
{
	register int num = 3; //연산 빠르게 해줌 //전역변수에는 할 수 없다
}

int AddToTotal(int num)
{
	static int total = 0;
	total += num;
	return total;
}

int main(void)
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("입력%d: ", i + 1);
		scanf_s("%d", &num);
		printf("누적: %d \n", AddToTotal(num));
	}
	return 0;
}

void Recursive(int num)
{
	if (num <= 0) //재귀의 탈출 조건
		return;
	printf("Recursive call! %d \n", num);
	Recursive(num - 1);
}

int main(void)
{
	Recursive(3);
	return 0;
}

int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main(void)
{
	printf("1!=%d", Factorial(1));
	printf("2!=%d", Factorial(2));
	printf("3!=%d", Factorial(3));
	printf("4!=%d", Factorial(4));
	printf("9!=%d", Factorial(9));
	return 0;
}
*/
//문제 1
/*
int main(void)
{
	int num;
	printf("10진수 정수 입력: ");
	scanf_s("%d", &num);
	printf("16진수 표현: %x", num); //16진수 출력 서식문자: %x, %X
	return 0;
}

//문제 2
int main(void)
{
	int num1, num2, i, j;
	printf("두 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 < num2)
	{
		for (i = num1; i >= num1 && i <= num2; i++)
		{
			printf("%d단 \n", i);
			for (j = 1; j < 10; j++)
			{
				printf("%d*%d=%d \n", i, j, i * j);
			}
		}
	}
	else
	{
		for (i = num2; i >= num2 && i <= num1; i++)
		{
			printf("%d단 \n", i);
			for (j = 1; j < 10; j++)
			{
				printf("%d*%d=%d \n", i, j, i * j);
			}
		}
	}
	return 0;
}

void GuGu(int num1, int num2)
{
	int i, j;
	if(num1 < num2)
	{
		for (i = num1; i >= num1 && i <= num2; i++)
		{
			printf("%d단 \n", i);
			for (j = 1; j < 10; j++)
			{
				printf("%d*%d=%d \n", i, j, i * j);
			}
		}
	}
	else
	{
	for (i = num2; i >= num2 && i <= num1; i++)
	{
		printf("%d단 \n", i);
		for (j = 1; j < 10; j++)
		{
			printf("%d*%d=%d \n", i, j, i * j);
		}
	}
	}
}

int main(void)
{
	int num1, num2;
	printf("두 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);
	GuGu(num1, num2);
	return 0;
}

//문제 3
int GOD(int num1, int num2)
{
	int i;
	if (num1 < num2)
	{
		for (i = num1; i >0; i--)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				return i;
				break;
			}
			else
				continue;
		}
	}
	else
	{
		for (i = num2; i>0; i--)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				return i;
				break;
			}
			else
				continue;
		}
	}	
}

int main(void)
{
	int num1, num2;
	printf("두 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);
	printf("두 수의 최대공약수: %d", GOD(num1, num2));
	return 0;
}

//문제 4
int main(void)
{
	int cr, sh, co;

	printf("현재 당신이 소유하고 있는 금액: 3500 \n");
	for (cr = 1; cr <=6; cr++)
	{
		for (sh = 1; sh <= 4; sh++)
		{
			for (co = 1; co <= 8; co++)
			{
				if (cr * 500 + sh * 700 + co * 400 == 3500)
					printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개 \n", cr, sh, co);
				else
					continue;
			}
		}
	}
	printf("어떻게 구입하시겠습니까?");
}
*/
//문제 5
int main(void)
{
	int i, j;
	int n = 0, m=0;
	for (i = 2; n < 10; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
			{
				m++;
			}
			else
				continue;
		}
		if (m == 1)
		{
			printf("%d \n", i);
			n++;
			m = 0;
		}
		else
			m = 0;
	}
	return 0;
}

		

/*
//문제 6
void Time(int num)
{
	int h = 0, m = 0, s = 0;
	h = num / 3600;
	m = (num - 3600 * h) / 60;
	s = (num - 3600 * h) % 60;
	printf("[h: %d, m: %d, s: %d]", h, m, s);
}

int main(void)
{
	int num;
	printf("초 입력: ");
	scanf_s("%d", &num);
	Time(num);
	return 0;
}

//문제 7
int DoubleMul(int n)
{
	int k, result;
	for(k=1, result=1; result<=n; k++)
	{
		result *= 2;
		printf("%d %d \n", k, result);
	}
	return k-2;
}

int main(void)
{
	int num;
	printf("상수 n입력: ");
	scanf_s("%d", &num);
	printf("공식을 만족하는 k의 최댓값은 %d", DoubleMul(num));
	return 0;
}

//문제 8
int DoubleTwo(num)
{
	if (num == 0)
		return 1;
	else
		return DoubleTwo(num - 1) * 2;
}

int main(void)
{
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);
	printf("2의 %d승은 %d", num, DoubleTwo(num));
	return 0;
}
*/
