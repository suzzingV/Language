#include <stdio.h>
/*
int main(void)
{
	int num1, num2;
	num1 = printf("12345 \n"); //�̷��� ������ printf �־ ��µ�
	num2 = printf("I love you \n");
	printf("%d %d \n", num1, num2); //printf �Լ��� ���ڿ��� ���̸� ��ȯ�Ѵ�
	return 0;
}

int Add(int num1, int num2) //��ȯ�� �Լ��̸�(�Ű�����) //���ڴ� ���� �� �� �� ����
{
	int result = num1 + num2; 
	return result; //�� ��ȯ //result�� ������ ���� Add �Լ��� ȣ���� �������� ���� //��ȯ�� ���� ���� �ϳ�
}

int Add(int num1, int num2)
{
	return num1 + num2; //�� ������ �� �־ ��
}

int main(void)
{
	int result;
	result = Add(3, 4);
	printf("���� ��� 1: %d \n", result);
	result = Add(5, 8);
	printf("���� ��� 2: %d \n", result);
	return 0;
}

void ShowAddResult(int num) //��ȯ�� ���� //return�� ����
{ 
	printf("���� ��� ���: %d \n", num); //printf�� ��ȯ�� ���� �Լ�
}

int ReadNum(void) //���� ���� ���� //�Է¹޴� �Լ�
{
	int num; 
	scanf_s("%d \n", &num);
	return num;
}

void HowToUseThisProg(void) //�������� ���� ��ȯ�� ����
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
}

int Add(int num1, int num2)
{
	return num1 + num2;
}

void ShowAddResult(int num) //��ȯ���� ���� �ִ�
{
	printf("%d \n", num);
}

int ReadNum(void) //��ȯ �ְ� ���� ����
{
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg(void) //��ȯ ���� ���� ����
{
	printf("�� ���� ������ �Է��Ͻø� ���� ����� ��µ˴ϴ�. \n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
}

int main(void)
{
	int result, num1, num2;
	HowToUseThisProg();
	num1=ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;
}

void NoReturnType(int num)
{
	if (num < 0)
		return; //��ȯ�� ���� ��쿡�� ���������� �뵵�� return �� �� �ִ�
}

int Increment(int n)
{
	n++;
	return n;
}

int main(void)
{
	int num=2;
	num = Increment(num);
	return 0;
} //�Լ� ����� ��ġ �߿�
*/
int Increment(int n); //�Լ��� ����: �ڿ� ���ðŴϱ� ������ ������ ���� //int Increment(int)�ε� ���� //int Add(int num1, num2)==int Add(int, int) //������ �ָ� �ȴ�

int main(void)
{
	int num = 2;
	num = Increment(num);
	return 0;
}

int Increment(int n)
{
	n++;
	return n;
} //�̷��� ���� �ٲ� ��