#include <stdio.h>
/*
int main(void)
{
	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;

	printf("0xA7�� 10���� ���� ��: %d \n", num1); //%d�� 10���� ������ ������ִ� ���̹Ƿ� 10���� ������ ���´�
	printf("0x43�� 10���� ���� ��: %d \n", num2);
	printf("032�� 10���� ���� ��: %d \n", num3);
	printf("024�� 10���� ���� ��: %d \n", num4);

	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%d+%d=%d \n", num3, num4, num3 - num4);
	return 0;
}

int main(void)
{
	int i;
	float num = 0.0; //�Ǽ� ����

	for (i = 0; i < 100; i++)
		num += 0.1;
	
	printf("0.1�� 100�� ���� ���: %f \n", num); //%f: 10������ ���·� ���
	return 0;
}//�Ǽ� 100% ��Ȯ�� ǥ�� ����

int main(void)
{
	int num1 = 15; //00000000 00000000 00000000 00001111
	int num2 = 20; //00000000 00000000 00000000 00010100
	int num3 = num1 & num2; //�Ѵ� 1�̾�� 1��ȯ
	printf("AND ������ ���: %d \n", num3);
	return 0;
}

int main(void)
{
	int num1 = 15; 
	int num2 = 20;
	int num3 = num1 | num2; //���� �ϳ��� 1�̸� 1 ��ȯ
	printf("OR ������ ���: %d \n", num3);
	return 0;
}

int main(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 ^ num2; //�� ���� �ٸ��� 1 ��ȯ
	printf("XOR ������ ���: %d \n", num3);
	return 0;
}

int main(void)
{
	int num1 = 15;
	int num2 = ~num1; //0�̸� 1, 1�̸� 0 ��ȯ
	printf("NOT ������ ���: %d \n", num2);
	return 0;
}

int main(void)
{
	int num = 15;
	
	int result1 = num << 1; //num�� ��Ʈ���� �������� 1ĭ�� �̵�
	int result2 = num << 2; //                        2ĭ�� �̵�
	int result3 = num << 3;

	printf("1ĭ �̵� ���: %d \n", result1);
	printf("2ĭ �̵� ���: %d \n", result2);
	printf("3ĭ �̵� ���: %d \n", result3);
	return 0;
} //��Ʈ���� �������� �� ĭ�� �̵���ų ������ ������ ���� 2�谡 �ȴ� //�������� 2�� ����������

int main(void)
{
	int num = -16;
	printf("2ĭ ������ �̵��� ���: %d \n", num >> 2);
	printf("3ĭ ������ �̵��� ���: %d \n", num >> 3);
	return 0; 
} //�з����� ���� �������� �ڸ����� 1�� ä�����, 0���� ä����� �ִ�. �� ���� ��ȣ�� �����ϴ� 1�� ä�� ����̴�

int main(void)
{
	int num;

	printf("���� �Է�: ");
	scanf_s("%d", &num);

	num = ~num;
	num += 1; //������ ����� ������Ű�� ��� �Ȱ���
	printf("���: %d \n", num); 
	return 0;
}

int main(void)
{
	int num = 3;

	printf("���: %d \n", (num << 3) >> 2);
	return 0;
}

int main(void)
{
	int num = 10;
	int sz1 = sizeof(num);
	int sz2 = sizeof(int); //sizeof�� �Լ��� �ƴ� �������̴�
	return 0;
}

int main(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("���� ch�� ũ��: %d \n", sizeof(ch));
	printf("���� inum�� ũ��: %d \n", sizeof(inum));
	printf("���� dnum�� ũ��: %d \n", sizeof(dnum)); //������ ũ��

	printf("char�� ũ��: %d \n", sizeof(char));
	printf("int�� ũ��: %d \n", sizeof(int));
	printf("long�� ũ��: %d \n", sizeof(long));
	printf("long long�� ũ��: %d \n", sizeof(long long));
	printf("float�� ũ��: %d \n", sizeof(float));
	printf("double�� ũ��: %d \n", sizeof(double)); //�ڷ����� ũ��
	return 0;
}

int main(void)
{
	char num1 = 1, num2 = 2, result1;
	short num3 = 300, num4 = 400, result2;

	printf("size of num1&num2: %d, %d \n", sizeof(num1), sizeof(num2));
	printf("size of num3&num4: %d, %d \n", sizeof(num3), sizeof(num4));

	printf("size of char add: %d \n", sizeof(num1 + num2)); //int�� CPU�� ó���ϱ⿡ ���� �����ϹǷ� int������ �����Ѵ�. �׷��� 4����Ʈ
	printf("size of short add: %d \n", sizeof(num3 + num4));

	result1 = num1 + num2;
	result2 = num3 + num4;
	printf("size of result1&result2: %d, %d \n", sizeof(result1), sizeof(result2));
	return 0;
}

int main(void)
{
	double rad;
	double area;

	printf("���� ������ �Է�: ");
	scanf_s("%lf", &rad); //double �Է� ���� ���� %lf

	area = rad * rad * 3.1415;
	printf("���� ����: %f \n", area); //double ����� ���� %f
	return 0;
}

int main(void)
{
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1); //���� ���·� ���: %c
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	return 0;
}

int main(void)
{
	int leftx, lefty;
	int rightx, righty;
	int area;

	printf("�� ����� x, y ��ǥ �Է�: ");
	scanf_s("%d %d", &leftx, &lefty);
	printf("�� ����� x, y ��ǥ �Է�: ");
	scanf_s("%d %d", &rightx, &righty);

	area = (rightx - leftx) * (righty - lefty);
	printf("�� ����� x, y ��ǥ: %d %d \n", leftx, lefty);
	printf("�� ����� x, y ��ǥ: %d %d \n", rightx, righty);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�. \n", area);
	return 0;
}

int main(void)
{
	double num1, num2;

	printf("�� ���� �Ǽ� �Է�: ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("��: %f \n", num1 + num2);
	printf("��: %f \n", num1 - num2);
	printf("��: %f \n", num1 * num2);
	printf("��: %f \n", num1 / num2);
	return 0;
}

int main(void)
{
	char num;

	printf("���� �Է�: ");
	scanf_s("%d", &num);

	printf("�ƽ�Ű �ڵ� ����: %c", num);
	return 0;
}
*/
int main(void)
{
	char al;

	printf("���ĺ� �Է�: ");
	scanf_s("%c", &al);

	printf("�ƽ�Ű �ڵ� ��: %d", al);
	return 0;
}