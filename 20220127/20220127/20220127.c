#include <stdio.h>
/*
int main(void)
{
	int num = 7;
	int* pnum; //������ ���� pnum ����
	pnum = &num; //num�� �ּҰ��� pnum�� ����
}

int main(void)
{
	int* pnum1; //int�� ������ ����Ű�� pnum1�� ���� //type*ptr //int�� ������ ���� pnum1
	double* pnum2; //double�� ������ ����Ű�� pnum2�� ���� //double�� ������ ���� pnum2
	unsigned int* pnum3; //unsigned int�� ������ ����Ű�� pnum3�� ���� //unsigned int�� ������ ���� pnum3
}

int main(void)
{
	int num = 5; 
	int* pnum = &num; //&�������� �ǿ����ڴ� �������� �Ѵ�. ��� �ȵ�

	int num1 = 5;
	double* pnum1 = &num1; //������ �ڷ����� ������ ������ �ڷ����� ���ƾ��Ѵ�
	
	double num2 = 5;
	int* pnum2 = &num2;
}

int main(void)
{
	int num = 10;
	int* pnum = &num; //������ ���� pnum�� ���� num�� ����Ű�� �ϴ� ����
	*pnum = 20; //pnum�� ����Ű�� ������ 20�� �����ض�
	printf("%d", *pnum); 
	return 0;
}

int main(void)
{
	int num1 = 100, num2 = 100; //int num, *pnum ����: �� ���� �ȿ��� ���ÿ� ���� ����
	int* pnum;

	pnum = &num1; 
	(*pnum) += 30;
	
	pnum = &num2;
	(*pnum) -= 30;

	printf("num1: %d, num2: %d \n", num1, num2);
	return 0;
}

int main(void)
{
	double num = 3.14;
	int* pnum = &num; //4����Ʈ�� �о�鿩�� �̸� ������ �ؼ��Ѵ� //������ ���� ������ �̻��� �� ���
	printf("%d", *pnum); 
	return 0;
}

int main(void)
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;
	
	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);
	return 0;
}

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1, * ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("ptr1�� ����Ű�� ������ ����� ��: %d, ptr2: %d \n", *ptr1, *ptr2);
	return 0;
}

int main(void)
{
	int* ptr; //�߸��� ������ ��� //�ʱ�ȭ ���ϸ� �����Ⱚ���� �ʱ�ȭ
	*ptr = 200;
	return 0;
}

int main(void)
{
	int* ptr = 125; //�ʱ�ȭ �ϱ� ������ �����Ⱚ �ʱ�ȭ�� �Ͱ� �ٸ��� �ʴ� //125������ ����� �˰�..?
	*ptr = 10;
	return 0;
}

int main(void)
{
	int* ptr1 = 0; //0���� �ǹ����� ���� �ƹ����� ����Ű�� �ʴ´� //��������
	int* ptr2 = NULL; //NULL�� ��ǻ� 0 �ǹ� //���߿� �ּҰ� ���� �Ÿ� �̷��� �η� �ʱ�ȭ�Ѵ� //��������
}
*/
int main(void)
{
	int arr[3] = { 1,2,3 };
	printf("�迭�� �̸�: %p \n", arr); //�ּҰ� ��� ���Ĺ���: %p
	printf("ù ��° ���: %p \n", &arr[0]);
	printf("�� ��° ���: %p \n", &arr[1]);
	printf("�� ��° ���: %p \n", &arr[2]);
	//arr=&arr[i]; //�� ������ ������ ������ ����Ų��
	return 0;
}