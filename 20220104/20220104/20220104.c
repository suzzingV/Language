#include <stdio.h>
/*
int main(void)
{
	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));
	printf("literal char size: %d \n", sizeof('A')); //������ ������ 
	return 0;
}

int main(void)
{
	float num1 = 5.789; //���
	float num2 = 3.24 + 5.12; //���
	return 0;
}

int main(void)
{
	float num1 = 5.789f; //�ڿ� f �ٿ��ָ� ���� �� ��
	float num2 = 3.24F + 5.12F; //�빮�� �ص� ��
	return 0;
}

int main(void)
{
	double num1 = 245; //������ �Ǽ���
	int num2 = 3.1415; //�Ǽ��� ������ (�Ҽ��� ���� ������)
	int num3 = 129;
	char ch = num3; //����Ʈ ū ������ ����Ʈ ũ�Ⱑ ���� ������ (��ȣ �ٲ� ���� ����)

	printf("���� 245�� �Ǽ���: %f \n", num1);
	printf("�Ǽ� 3.1415�� ������: %d \n", num2);
	printf("ū ���� 129�� ���� ������: %d \n", ch);
	return 0;
}

int main(void)
{
	short num1 = 15, num2 = 25;
	short num3 = num1 + num2; //int�� �ڵ����� ���ؼ� ����(int�� ���� ����) num1+num2�� int
	return 0;

}

int main(void)
{
	int num1 = 3, num2 = 4;
	double divResult;
	divResult = num1 / num2; //�������� ���� �Ŷ� �Ҽ������� �ȳ���
	printf("������ ���: %f\n", divResult);
	return 0; 
}

int main(void)
{
	int num1 = 3, num2 = 4;
	double divResult;
	
	divResult = (double)num1 / num2; //(double)num1: num1�� double��. �׷� num2�� �ڵ����� ��ȯ��
	printf("������ ���: %f \n", divResult);
	return 0;
}

int main(void)
{
	int num1 = 3;
	double num2 = 2.5 * (double)num1; //num1 �ڵ����� double������ ������ִ� �� ����
	return 0;
}

int main(void)
{
	printf("I like programming \n");
	printf("I love puppy! \n");
	printf("I am so happy \n");
	return 0;
}

int main(void)
{
	int myAge = 12;
	printf("�� ���̴� 10������ %d��, 16������ %X���Դϴ�. \n", myAge, myAge);
	return 0;
}

int main(void)
{
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1); //��ȣ ���� 8���� ����, 8�����ٿ� 8����
	printf("%x %#x \n", num2, num2); //��ȣ ���� 16���� ����, 8�����ٿ� 8����
}

int main(void)
{
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234); //e ǥ���
	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);
	return 0;
}

int main(void)
{
	double d1 = 1.23e-3;
	double d2 = 1.23e-4;
	double d3 = 1.23e-5;
	double d4 = 1.23e-6;

	printf("%g \n", d1); //%g: �Ҽ��� �ڸ� �þ�� eǥ������� ���
	printf("%g \n", d2);
	printf("%g \n", d3);
	printf("%g \n", d4);
	return 0;
}

int main(void)
{
	printf("%s, %s, %s \n", "AAA", "BBB", "CCC"); //���ڿ� ���
	return 0;
}

int main(void)
{
	printf("%-8s %14s %5s \n", "�� ��", "�����а�", "�г�"); //%8s: �ʵ����� 8ĭȮ���ϰ� ������ ���� ������ ���� ����
	printf("%-8s %14s %5d \n", "�赿��", "���ڰ���", 3);
	printf("%-8s %14s %5d \n", "������", "�ε�����", 2);
	printf("%-8s %14s %5d \n", "�Ӽ���", "���������", 3);
	return 0;
}

int main(void)
{
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %o %x", &num1, &num2, &num3);
	
	printf("�Էµ� ���� 10���� ���: ");
	printf("%d %d %d", num1, num2, num3);
	return 0;
}
*/
int main(void)
{
	float num1;
	double num2;
	long double num3;

	printf("�Ǽ� �Է�1(e ǥ�������): ");
	scanf_s("%f", &num1); //float�� ������ �Է�
	printf("�Էµ� �Ǽ� %f \n", num1); //float ���

	printf("�Ǽ� �Է�2(e ǥ�������): ");
	scanf_s("%lf", &num2); //double�� ������ �Է�
	printf("�Էµ� �Ǽ� %f \n", num2); //double ���

	printf("�Ǽ� �Է�3(e ǥ�������): ");
	scanf_s("%Lf", &num3); //long double�� ������ �Է�
	printf("�Էµ� �Ǽ� %Lf \n", num3); //long double ���
	return 0;
}