#include <stdio.h>
/*
int main(main)
{
	int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);

	if (num < 0)
		printf("�Է°��� 0���� �۴�"); //�� ���̹Ƿ� �߰�ȣ ���� ����

	if (num > 0)
		printf("�Է°��� 0���� ũ��");

	if (num = 0)
		printf("�Է°��� 0�̴�");

	return 0;
}

int main(void)
{
	double num1, num2;
	int opt;

	printf("1.���� 2.���� 3.���� 4.������");
	scanf_s("%d", &opt);
	printf("�� ���� �Է�: ");
	scanf_s("%lf %lf", &num1, &num2);
	
	if (opt == 1) //==
		printf("%f+%f=%f", num1, num2, num1 + num2);
	
	if (opt == 2)
		printf("%f-%f=%f", num1, num2, num1 - num2);
	
	if (opt ==3)
		printf("%f*%f=%f", num1, num2, num1 * num2);
	
	if (opt ==4)
		printf("%f/%f=%f", num1, num2, num1 / num2);
	
	return 0;
}

int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if ((num % 3 == 0) || (num % 4 == 0)) //or=||
			printf("%d \n", num); //if ���� �� �ٿ� ���� ǥ���ǰ� �� �ٷ� �ν� �׷��Ƿ� for�� �߰�ȣ ���ص� ��
	}
	return 0;
}

int main(void)
{
	int num1, num2;
	printf("�� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		printf("num1�� num2���� Ů�ϴ�.");
		printf("%d>%d \n", num1, num2);
	}
	else
	{
		printf("num1�� num2���� ũ�� �ʽ��ϴ�.");
		printf("%d<=%d \n", num1, num2);
	}
	return 0;
}

int main(void)
{
	int num;

	printf("���� �Է�: ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("�Է°��� 0���� �۴�.");
	else
		printf("�Է°��� 0���� ���� �ʴ�.");
	return 0;
}

int main(void)
{
	int opt;
	double num1, num2;
	double result = 0;

	printf("1. + 2.- 3.* 4./");
	scanf_s("%d", &opt);
	printf("�� ���� �Է�: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;

	else if(opt == 2)
		result = num1 - num2;

	else if(opt == 3)
		result = num1 * num2;

	else                      //else if (opt==4)�� ����
		result = num1 / num2;

	printf("���� ���: %f", result);
	return 0;
} //������ �����Ǹ� else���ķ� �ǳʶڴ�

int main(void)
{
	int num, abs;

	printf("���� �Է�: ");
	scanf_s("%d", &num);

	abs = (num > 0) ? num : num * (-1); //����?������ ���϶� ��°�: ������ ������ �� ��°�
	printf("����: %d", abs);
	return 0;
}
//���� 1
int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 7 == 0 || num % 9 == 0)
			printf("%d \n", num);
	}
	return 0;
}

//���� 2
int main(void)
{
	int num1, num2, result;
	printf("�� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 < num2)
		result = num2 - num1;
	else
		result = num1 - num2;

	printf("���: %d", result);
	return 0;
}

//���� 3
int main(void)
{
	double kor, eng, math, avg;
	printf("����, ����, ���� ����: ");
	scanf_s("%lf %lf %lf", &kor, &eng, &math);
	avg = (kor + eng + math)/3;

	if (avg >= 90)
		printf("A");

	else if (avg >= 80) //90>avg>=80�� �ȵ�. �̷��� �� �Ÿ� avg<90&&avg>=80���� �ؾߵ�
		printf("B");
	
	else if (avg >= 70)
		printf("C");
	
	else if (avg >= 50)
		printf("D");
	
	else
		printf("F");

	return 0;
}

//���� 4
int main(void)
{
	int num1, num2, result;
	printf("�� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);

	result = num1 < num2 ? num2 - num1 : num1 - num2; //��ȣ �� �ٿ��� ��
	printf("���: %d", result);
	return 0;
}

int main(void)
{
	int num=0, sum = 0;

	while (1) //�׻� ��, ���� �ݺ�
	{
		sum += num; 
		if (sum > 5000)
			break; //�ݺ��� Ż��, break���� ���� �����̼� ���ΰ� �ִ� �ݺ��� Ż��(if�� Ż�� ����)
		num++;
	}
	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
	return 0;
}

int main(void)
{
	int num;

	for (num = 1; num < 20; num++) //�ݺ��� ���� ������ ������
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue; //�ݺ����� ���ǰ˻���ġ�� �̵�, �� �ڴ� ����
		printf("%d \n", num);
	}
	return 0;
}

//���� 1
int main(void)
{
	int dan, cur;

	for (dan = 2; dan < 10; dan++)
	{
		if (dan % 2 != 0)
			continue;
		for (cur = 1; cur < 10; cur++)
		{
			if (cur > dan)
				break;
			printf("%d*%d=%d \n", dan, cur, dan * cur);
		}
	}
	return 0;
}

//���� 2
int main(void)
{
	int a, z;
	int result = 0;

	for (a = 0; a < 10; a++)
	{
		for (z = 0; z < 10; z++)
		{
			result = ((a * 10 + z) + (z * 10 + a));
			if (result != 99)
				continue;
			printf("A: %d, Z: %d \n", a, z);
		}
	}
	return 0;
}

int main(void)
{
	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1: //�����ݷ� �ƴ϶� �ݷ� //�Էµ� ���� 1�̸� ����
		printf("1�� ONE");
		break; //�̰� ������ switch �� ���������� �ڿ��� �� ����
	case 2: 
		printf("2�� TWO");
		break;
	case 3:
		printf("3�� THREE");
		break;
	case 4:
		printf("4�� FOUR");
		break;
	case 5:
		printf("5�� FIVE");
		break;
	default: //���� �� �ƴϸ�
		printf("I don't know! \n"); //������ �����̹Ƿ� break �ʿ� ����
	}
	return 0;
}

int main(void)
{
	char sun;
	printf("M ����, A ����, E ����: \n");
	scanf_s("%c", &sun);

	switch (sun)
	{
	case 'M': //���ڿ� ''
	case 'm': //break ����
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;
	case 'E': case 'e': //�̷��� �ٿ��ᵵ ��
		printf("Evening \n");
		break;
	}
	return 0;
}

int main(void)
{
	int n;
	printf("���� �Է�: ");
	scanf_s("%d", &n);

	switch (n/10)
	{
	case 0: //switch���� ���� �� �ִ´�
		printf("0 �̻� 10 �̸�");
		break;
	case 1:
		printf("10 �̻� 20 �̸�");
		break;
	case 2:
		printf("20 �̻� 30 �̸�");
		break;
	default:
		printf("30 �̻�");
	}
	return 0;
}
*/
int main(void)
{
	int num;
	printf("�ڿ��� �Է�: ");
	scanf_s("%d", &num);

	if (num == 1)
		goto ONE; //�ش� ��ġ�� �̵�
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE: //������ ����� �ƴ϶� ��ġǥ���ϻ��̹Ƿ� ��������
	printf("1�� �Է��ϼ̽��ϴ�! \n");
	goto END;
TWO:
	printf("2�� �Է��ϼ̽��ϴ�! \n");
	goto END;
OTHER:
	printf("3 Ȥ�� �ٸ� ���� �Է��ϼ̱���! \n");

END:
	return 0;
}