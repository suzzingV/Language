#include <stdio.h>
/*
while (num < 10)
{
	printf("%d*%d=%d \n", dan, num, dan * num);
	num++;
} //while �ݺ���

do
{
	printf("%d*%d=%d \n", dan, num, dan * num);
	num++;
} while (num < 10); //�����Ŷ� �Ȱ���

int main(void)
{
	int tot = 0, num = 0;

	do
	{
		printf("���� �Է�:");
		scanf_s("%d", &num); //���⼭ �ʱ�ȭ�Ǳ� ������ num=0���� �ʱ�ȭ �� ���൵ ��
		tot += num;
	} while (num != 0);
	
	printf("�� ��: %d", tot);
	return 0;
} //do while ���� �ڿ�������

//���� 1
int main(void)
{
	int num = 1, tot = 0; //while�� ���ǿ� �µ��� �ʱ�ȭ

	while (num != 0)
	{
		printf("���� �Է�:");
		scanf_s("%d", &num);
		tot += num;
	}
	printf("�� ��: %d", tot);
	return 0;
}
*
int main(void)
{
	int num = 0, tot = 0;

	printf("���� �Է�:");
	scanf_s("%d", &num);
	tot += num;
	
	while (num != 0)
	{
		printf("���� �Է�:");
		scanf_s("%d", &num);
		tot += num;
	}
	printf("�� ��: %d", tot);
	return 0;
}
//���� 2
int main(void)
{
	int num = 0, tot = 0, i=1;

	do
	{
		num = 2 * i;
		tot += num;
		i++;
	}while(i <= 50);
	
	printf("�� ��: %d", tot);
	return 0;
}
//���� 3

int main(void)
{
	int cur = 2;
	int is = 0;

	do
	{
		is = 1;
		do
		{
			printf("%d*%d=%d \n", cur, is, cur * is);
			is++;
		} while (is < 10);
		cur++;
	} while (cur < 10);
	return 0;
}

int main(void)
{
	int num = 0;
	while (num < 3)
	{
		printf("Hi~");
		num++;
	}
}

int main(void)
{
	for (int num = 0; num < 3; num++)
		printf("Hi~"); //�����̸� �߰�ȣ ���� ����
	return 0;
} //���� while���� for������ �ٲٱ�

int main(void)
{
	int num;
	for (num = 0; num < 3; num++)
		printf("Hi~");
	return 0;
} //������ �������� �ʴ� �����Ϸ��� �־ ���� ��

int main(void)
{
	int num = 0, tot = 0;
	printf("0 �̻� ���� �Է�:");
	scanf_s("%d", &num);
	
	for (int i = 0; i <= num; i++)
		tot += i;

	printf("�� ��: %d", tot);
	return 0;
}

int main(void)
{
	double tot = 0;
	double num = 0;
	int i;

	for (i=1; num >= 0; i++) //����° ���� ������ ����α�, �߰��� ��� ���� ������ �� �ǹǷ� ���� ����, ù��°���� ����°���� ���� ����
	{
		tot += num; //������ �� ���Խ�Ű�� �ȵǹǷ� �̰� �տ� �д�
		printf("�Ǽ� �Է�:");
		scanf_s("%lf", &num); //�Ǽ� �Է� ���� ���� lf
	}
	printf("���: %f, i�� ��: %d", tot / (i-2),i);
	return 0;
}
//���� 1
int main(void)
{
	int num1=0;
	int num2 = 0, tot=0;

	printf("�� ���� ���� �Է�:");
	scanf_s("%d %d", &num1, &num2);

	for (; num1 <= num2; num1++)
		tot += num1;
	printf("�� �� ������ ���� %d�Դϴ�", tot);
	return 0;
}
//���� 2

int main(void)
{
	int num=0, tot=1;
	int i;

	printf("���� �Է�:");
	scanf_s("%d", &num);

	for (i = num; i>0; i--)
	{
		tot *= i;
	}
	printf("%d!=%d", num, tot);
}

int main(void)
{
	int dan, num;

	for (dan = 2; dan < 10; dan++)
	{
		for (num = 1; num < 10; num++)
		{
			printf("%d*%d=%d \n", dan, num, dan * num);
		}
	}
	return 0;
}
*/