#include <stdio.h>
/*
int main(void)
{
	int num = 0, rep = 1;

	printf("���� ���� �Է�:");
	scanf_s("%d", &num);

	while (rep < num+1)
	{
		printf("Hello world! \n");
		rep++;
	}
	return 0;
}

int main(void)
{
	int num = 0, rep=1;

	printf("���� ���� �Է�:");
	scanf_s("%d", &num);

	while (rep < num + 1)
	{
		printf("%d \n",3 * rep);
		rep++;
	}
	return 0;
}

int main(void)
{
	int num = 1, sum = 0;
	
	while (num != 0) //����Ǵ� ������ �־�� ��
	{
		printf("���� ���� �Է�:");
		scanf_s("%d", &num);
		sum += num;
	}
	printf("%d", sum);
	return 0;
}

int main(void)
{
	int dan = 0, num=9;

	printf("���� �Է�:");
	scanf_s("%d", &dan);

	while (num >0)
	{
		printf("%d*%d=%d \n", dan, num, dan * num);
		num--;
	}
	return 0;
}

int main(void)
{
	int num = 0, rep = 0, sum=0, ind=0;

	printf("�� ���� ������ �Է�?:");
	scanf_s("%d", &num);

	while (rep < num)
	{
		printf("���� �Է�:");
		scanf_s("%d", &ind);
		sum += ind;
		rep++; //while ���� ��ȣ�� rep ��� ���� ���� �ִ�
	}
	printf("%f", (double)sum / num); //�Ǽ��� �ٲ�����Ѵ�
	return 0;
}
*/
int main(void)
{
	int cur = 2;
	int is = 0;

	while(cur < 10)
	{
		is = 1;
		while(is < 10)
		{
			printf("%d*%d=%d \n", cur, is, cur * is);
			is++;
		}
		cur++;
	}
	return 0;
}