#include <stdio.h>
/*
int NumberCompare(int num1, int num2);

int main(void)
{
	printf("3�� 4 �߿��� ū ���� %d�̴�. \n", NumberCompare(3, 4));
	printf("7�� 2 �߿��� ū ���� %d�̴�. \n", NumberCompare(7, 2));
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
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d�� %d �� ������ ū ����: %d \n",
		num1, num2, AbsoCompare(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2)
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2)) //ȣ��� �Լ� ������ �� �ٸ� �Լ� ȣ��
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

//���� 1
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
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("�� ���� �� ���� ū ��: %d \n", MaximumNumber(num1, num2, num3));
	printf("�� ���� �� ���� ���� ��: %d \n", MinimumNumber(num1, num2, num3));
	return 0;
}

//���� 2
double CelToFah(double num);
double FahToCel(double num);

int main(void)
{
	double num;
	char tem;
	
	printf("C or F ? ");
	scanf_s("%c", &tem);
	printf("�µ� �Է�: ");
	scanf_s("%lf", &num);

	if (tem == 'C')
		printf("ȭ�� �µ��� %f", CelToFah(num));
	else
		printf("���� �µ��� %f", FahToCel(num));
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
	int num = 10; //��������, �� �߰�ȣ ������ �Ҹ�
	num++;
	printf("SimpleFuncOne num: %d \n", num); //printf �׳� ��µ�
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
	SimpleFuncOne(); //SimpleFuncOne�� num�� main�� num ���ÿ� ����, ������ Simple�� num�� �Ҹ�
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
		printf("%d��° �ݺ�, �������� num�� %d. \n", cnt + 1, num); //�ݺ��� ������ �������� ���� �� �ִ�
	} //�ݺ��� ������ num ��� �Ҹ�� ���� �ݺ�
	
	if (cnt == 3) //������ cnt==3�� �� �����
	{
		int num = 7;
		num++;
		printf("if �� ���� �����ϴ� �������� num�� %d. \n", num); //if �� ������ ��������
	}
}

int main(void)
{
	int num = 1;

	if (num == 1)
	{
		int num = 7; //�̰� ������ main �Լ��� num���� �ν�
		num += 10;
		printf("if�� �� �������� num: %d \n", num); //���������� �ܺο� ����� ������ �̸��� ���� ����
	}
	printf("main �Լ� �� �������� num: %d \n", num);
	return 0;
}

void Add(int val);
int num; //��������: ��𼭵� ���� //0���� �ڵ����� �ʱ�ȭ��

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
	printf("num:%d\n", num + 9); //�ش� ���� �������� ���������� �������� ���������� �켱�ȴ�
	return 0;
}

int Add(int val)
{
	int num = 9; //�������� �켱
	num += val;
	return num;
}

void SimpleFunc(void)
{
	static int num1 = 0; //�ʱ�ȭ���� ������ 0 �ʱ�ȭ //�������� Ư¡ ���Ե�: �� 1ȸ �ʱ�ȭ�ǰ� ���α׷� ���� �ñ��� �޸𸮰����� ���� //������ ������ �߰�ȣ �ȿ����� //������ �޸𸮿� ��� �����ִ�
	int num2 = 0; //�ʱ�ȭ���� ������ ������ �� �ʱ�ȭ //�Լ� ���� ������ �ʱ�ȭ��
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
	register int num = 3; //���� ������ ���� //������������ �� �� ����
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
		printf("�Է�%d: ", i + 1);
		scanf_s("%d", &num);
		printf("����: %d \n", AddToTotal(num));
	}
	return 0;
}

void Recursive(int num)
{
	if (num <= 0) //����� Ż�� ����
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
//���� 1
/*
int main(void)
{
	int num;
	printf("10���� ���� �Է�: ");
	scanf_s("%d", &num);
	printf("16���� ǥ��: %x", num); //16���� ��� ���Ĺ���: %x, %X
	return 0;
}

//���� 2
int main(void)
{
	int num1, num2, i, j;
	printf("�� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 < num2)
	{
		for (i = num1; i >= num1 && i <= num2; i++)
		{
			printf("%d�� \n", i);
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
			printf("%d�� \n", i);
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
			printf("%d�� \n", i);
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
		printf("%d�� \n", i);
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
	printf("�� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	GuGu(num1, num2);
	return 0;
}

//���� 3
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
	printf("�� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	printf("�� ���� �ִ�����: %d", GOD(num1, num2));
	return 0;
}

//���� 4
int main(void)
{
	int cr, sh, co;

	printf("���� ����� �����ϰ� �ִ� �ݾ�: 3500 \n");
	for (cr = 1; cr <=6; cr++)
	{
		for (sh = 1; sh <= 4; sh++)
		{
			for (co = 1; co <= 8; co++)
			{
				if (cr * 500 + sh * 700 + co * 400 == 3500)
					printf("ũ���� %d��, ����� %d��, �� �� %d�� \n", cr, sh, co);
				else
					continue;
			}
		}
	}
	printf("��� �����Ͻðڽ��ϱ�?");
}
*/
//���� 5
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
//���� 6
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
	printf("�� �Է�: ");
	scanf_s("%d", &num);
	Time(num);
	return 0;
}

//���� 7
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
	printf("��� n�Է�: ");
	scanf_s("%d", &num);
	printf("������ �����ϴ� k�� �ִ��� %d", DoubleMul(num));
	return 0;
}

//���� 8
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
	printf("���� �Է�: ");
	scanf_s("%d", &num);
	printf("2�� %d���� %d", num, DoubleTwo(num));
	return 0;
}
*/
