#include <stdio.h>
/*
����: Hello world ����ϱ�
���: ���ڿ��� ���
�����̸�: 20211228.cpp
������¥: 2021.12.30
�ۼ���: �Ӽ���
*/
/*
#include <stdio.h> //������� ����

int main(void) //main �Լ��� ����
{
	
	//�� �Լ� �������� �ϳ��� ���ڿ��� ����Ѵ�.
	//���ڿ��� ����ͷ� ��µȴ�.
	
	printf("Hello world! \n"); //���ڿ��� ���
	return 0; //0�� ��ȯ
} //main �Լ��� ��

#include <stdio.h>

int main(void)
{
	printf("Hello Everybody\n");
	printf("%d\n", 1234);
	printf("%d %d\n", 10, 20);
	return 0;
}

#include <stdio.h>

int main(void)
{
	printf("My age: %d \n", 23);
	printf("%d is my point \n", 100);
	printf("I \nlove \nYou \nJangyoonseok\n");
	return 0;
}

#include <stdio.h>

int main(void)
{
	printf("�� �̸��� ȫ�浿�Դϴ�.\n");
	printf("�� ���̴� %d���̰��.\n",20);
	printf("���� ��� ���� �������� %d-%d�Դϴ�.\n", 123, 456);
	return 0;
}

#include <stdio.h>

int main(void)
{
	printf("%d*%d=%d\n", 4, 5, 20);
	printf("%d*%d=%d\n", 7, 9, 7*9);
}

#include <stdio.h>

int main(void)
{
	3 + 4;
	return 0;
}  //����� ������ ����� �ȵ�

#include <stdio.h>

int main(void)
{
	int num; //num�̶�� �̸��� ���� ����(���� ����)
	num = 20;
	printf("%d", num);
}

#include <stdio.h>

int main(void)
{
	int num; //num �̶�� ���� ����
	num = 12; //���� num�� 12�� �ʱ�ȭ
	num = 24; //���� num�� 24 ����, ó�� �� �����ϴ� �� �ܿ��� �����̶�� ��
}

#include <stdio.h>

int main(void)
{
	int num = 12; //����� ���ÿ� �ʱ�ȭ ����
}

int main(void)
{
	int num1, num2; //���� �ΰ� ���ÿ� ����
	int num3 = 30, num4 = 40; //���� �� �� ���ÿ� ���� �� �ʱ�ȭ
}

int main(void)
{
	int num1, num2; 
	int num3 = 30, num4 = 40; //����� ���ÿ� �ʱ�ȭ
	
	//printf("num1: %d, num2: %d\n", num1, num2); //�ʱ�ȭ���� ������ �ȵ�
	num1 = 10; //�ʱ�ȭ
	num2 = 20;

	printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d, num4: %d \n", num3, num4);
	return 0;
}

int main(void)
{
	int num1;
	num1 = 10;
	int num2;
	num2 = 20;
	return 0; 
} //�ƹ��͵� �ȵ�. ������ �߰�ȣ�� �պκп� ��ġ�ؾ��Ѵ�.

int main(void)
{
	int num1 = 24; //num1�� ������ ����
	double num2 = 3.14; //num2�� �Ǽ��� ����
}

int main(void)
{
	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;
	
	printf("�������: %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d��(��) %d�� ���� %d�Դϴ�. \n", num1, num2, result);
	return 0;
}

int main(void)
{
	int num1 = 9, num2 = 2;
	printf("%d+%d=%d\n", num1, num2, num1 + num2);
	printf("%d-%d=%d\n", num1, num2, num1 - num2);
	printf("%d*%d=%d\n", num1, num2, num1 * num2);
	printf("%d/%d�� ��=%d\n", num1, num2, num1 / num2);
	printf("%d/%d�� ������=%d\n", num1, num2, num1 % num2);
	return 0;
}

int main(void)
{
	int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3; //num1=num1+3
	num2 *= 4; //num2=num2*4
	num3 %= 5; //num3=num3%5
	printf("Result: %d, %d, %d \n", num1, num2, num3);
	return 0;
}

int main(void)
{
	int num1 = +2;
	int num2 = -4;
	
	num1 = -num1;
	num2 = -num2;
	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);
	return 0;
}

int main(void)
{
	int num1 = 12;
	int num2 = 12;
	
	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++); //���� ����
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2); //���� ����
	printf("num2: %d \n", num2);
	return 0;
}

int main(void)
{
	int num1 = 10;
	int num2 = (num1--) + 2; //���� ����
	
	printf("num1: %d \n", num1); //���� �Ķ� 1 ���� �� ���
	printf("num2: %d \n", num2);
	return 0;
}

int main(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == num2); //���� ���̸� 1, ���� �����̸� 0 ���
	result2 = (num1 <= num2);
	result3 = (num1 > num2);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
	return 0;
}

int main(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12); //�� �� ���̾�� �� 
	result2 = (num1 < 12 || num2>12); //���� �ϳ��� ���̸� �� //�������ں��� ���迬���ڰ� ���� ����
	result3 = (!num1); //num1�� ���̶�� ���� �����̶�� ��, ������ 0�� 1�� �ƴϸ� ��, ������ 0�̸� ����, 1�̸� ��
	
	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
	return 0;
}

int main(void)
{
	int num1 = 1, num2 = 2;
	printf("Hello "), printf("world! \n"); //�� ���忡 ���� ����
	num1++, num2++; //num1++num2++�� 1, 2���� �״��� num1�� num2�� 2, 3
	printf("%d ", num1), printf("%d ", num2), printf("\n");
	return 0;
}

int main(void)
{
	int result;
	int num1, num2;

	printf("���� one: ");
	scanf_s("%d", &num1); //num1�̶�� ������ 10���� �������� �Է�
	printf("���� two: ");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;
}

int main(void)
{
	int result;
	int num1, num2, num3;

	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3); //���ÿ� �� ���� �� �ٸ� ���·� �Է� ����, ������ �������� �����ϱ⶧���� ���ͳ� �����̽��ٳ� ��Ű ������� ��
	
	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d", num1, num2, num3, result);
	return 0;
}

int main(void)
{
	int result1, result2;
	int num1, num2;

	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	
	result1 = num1 + num2;
	result2 = num1 - num2;
	printf("%d + %d = %d \n", num1, num2, result1);
	printf("%d - %d = %d \n", num1, num2, result2);
	return 0;
}

int main(void)
{
	int result;
	int num1, num2, num3;

	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 * num2 + num3;
	printf("%d*%d+%d=%d \n", num1, num2, num3, result);
	return 0;
}

int main(void)
{
	int result;
	int num1;

	printf("���� �Է�: ");
	scanf_s("%d", &num1);

	result = num1*num1;
	printf("������ ���: %d", result);
	return 0;
}

int main(void)
{
	int result1, result2;
	int num1, num2;

	printf("���� �� �� �Է�: ");
	scanf_s("%d %d", &num1, &num2);

	result1 = num1 / num2;
	result2 = num1 % num2;
	printf("��: %d ������: %d", result1, result2);
	return 0;
}
*/
int main(void)
{
	int result;
	int num1, num2, num3;

	printf("�� ���� �Է�:");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("���: %d", result);
	return 0;
}