#include <stdio.h>
/*
int main(void)
{
	int oneDimarr[4]; //�ڷ���/�̸�/����
	int arr1[7]; //���̰� 7�� int�� 1���� �迭 arr1
	float arr2[10]; //�迭�� ���̴� ������ �����
	double arr3[12];
}

int main(void)
{
	int arr[3];
	arr[0] = 10; //�� ����
	arr[1] = 12;
	arr[2] = 25;
}

int main(void)
{
	int arr[5];
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	
	for (i = 0; i < 5; i++)
		sum += arr[i];
	
	printf("�迭��ҿ� ����� ���� ��: %d \n", sum);
	return 0;
}

int main(void)
{
	int arr1[5] = { 1,2,3,4,5 }; //�迭 �ʱ�ȭ
	int arr2[] = { 1,2,3,4,5,6,7 }; //�ʱ�ȭ�� ������ �ʱ�ȭ�� ����ŭ ���� ����, ���� ���� ����
	int arr3[5] = { 1,2 }; //���̰� �ʱ�ȭ�� ������ ũ�� ���ʺ��� ä������ �������� 0
	int ar1len, ar2len, ar3len, i;

	printf("arr1�� ũ��: %d \n", sizeof(arr1)); //����!=ũ��
	printf("arr2�� ũ��: %d \n", sizeof(arr2));
	printf("arr3�� ũ��: %d \n", sizeof(arr3));

	ar1len = sizeof(arr1) / sizeof(int); //sizeof(int): int�� ũ��, int�� ũ��� 4����Ʈ
	ar2len = sizeof(arr2) / sizeof(int);
	ar3len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1len; i++)
		printf("%d ", arr1[i]); //�迭�� �ε��� 0���� ����
	printf("\n");

	for (i = 0; i < ar2len; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	for (i = 0; i < ar3len; i++)
		printf("%d ", arr3[i]);
	printf("\n");
	return 0;
}

int main(void)
{
	int arr[5];
	int i, max, min;
	int tot = 0;

	for (i = 0; i < 5; i++)
	{
		printf("���� �Է�: ");
		scanf_s("%d", &arr[i]); //�Է¹����� �̷��� �ε����� ����
	}

	max=min=arr[0]
	for (i = 1; i < 5; i++)
	{
		if (max < arr[i]) //�� ���� max�� ��
			max = arr[i]; 
		else
			continue;
	}

	for (i = 1; i < 5; i++)
	{
		if (min > arr[i])
			min = arr[i];
		else
			continue;
	}

	for (i = 0; i < 5; i++)
		tot += arr[i];
	//�� �� �� �ϳ��� ���� �� �ִ�

	printf("�ִ�: %d \n", max);
	printf("�ּڰ�: %d \n", min);
	printf("����: %d \n", tot);
	return 0;
}

int main(void)
{
	char arr[9] = { 'G', 'o','o','d',' ', 't','i','m','e' }; //���鵵 �ϳ��� ���ڿ��� ���� //�ϳ��� ���ڴ� ���� ����ǥ��
	int i;
	
	for (i = 0; i < 9; i++)
		printf("%c", arr[i]);
	return 0;
}

int main(void)
{
	char str[] = "Good morning!"; //���ڿ��� ū ����ǥ
	printf("�迭 str�� ũ��: %d \n", sizeof(str)); //���ڿ��� ũ��� ����� �ι��� ���� //���� �ϳ��� 1����Ʈ
	printf("�� ���� ������ ���: %c \n", str[13]); //�� ���� �������� �ƹ��͵� ��� �ȵ�
	printf("�� ���� ������ ���: %d \n", str[13]); //�� ���� �ƽ�Ű�ڵ尪�� 0

	str[12] = '?'; //str�� ����� ���ڿ� ������ ���� ����
	printf("���ڿ� ���: %s \n", str); //���ڿ� ��� ���Ĺ���: %s
	return 0;
}

int main(void)
{
	char nu = '\0';
	char sp = ' '; //������ �ƽ�Ű �ڵ� ���� 32
	printf("%d %d", nu, sp);
	return 0;
}

int main(void)
{
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է�: ");
	scanf_s("%s", str); //���ڿ� �Է� ���Ĺ���: %s //���ڿ� �Է¹��� �� &����� ��
	printf("�Է¹��� ���ڿ�: %s \n", str);

	printf("���� ���� ���: ");
	while (str[idx] != '\0') //\0 �ϳ��� ���ڷ� �ν� //�Է¹��� ���ڿ��� ���� \0�� �ִ�
	{
		printf("%c", str[idx]); 
		idx++;
	}
	printf("\n");
	return 0;
}

int main(void)
{
	char arr1[] = { 'H','i','~' }; //�������� �� ���� �����Ƿ� ���� �迭
	char arr2[] = { 'H','i','~','\0' }; //�������� �� ���� �����Ƿ� ���ڿ�
}

int main(void)
{
	char str[50] = "I like C programming";
	printf("string: %s \n", str);

	str[8] = '\0'; //'\0'=0 : \0�� �ƽ�Ű �ڵ� ���� 0�̹Ƿ�
	printf("string: %s \n", str); //�� ���ڰ� ���ڿ��� ��
	
	str[6] = '\0';
	printf("string: %s \n", str);

	str[1] = '\0';
	printf("string: %s \n", str);
	return 0;
}

int main(void)
{
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է�: ");
	scanf_s("%s", str, sizeof(str)); //���ڿ��� ũ�⸦ �Է¹ް��� �� ���� ���ڿ��� ũ�⸦ �߰������ �Ѵ�
	printf("�Է¹��� ���ڿ�: %s \n", str);

	while (str[idx] != '\0') //scanf �Լ��� �����͸� �������� ������ �����̹Ƿ� ���� ���Ե� ���ڿ��� ������ �������� �������� ���ڿ��� �Է��� ������ �ν��ؼ� �� ���� ���ڿ��� ��µȴ�
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}

//���� 1
int main(void)
{
	char str[50];
	int idx = 0;
	
	printf("�ܾ� �Է�: ");
	scanf_s("%s", str, sizeof(str));
	
	while (str[idx] != '\0')
		idx++;
	
	printf("���ܾ��� ����: %d \n", idx);
	return 0;
}

//���� 2
int main(void)
{
	char str[50];
	int len=0;
	int idx;
	printf("���ܾ� �Է�: ");
	scanf_s("%s", str, sizeof(str));
	
	while (str[len] != '\0')
		len++;

	for (idx = len; idx >= 0; idx--)
		printf("%c", str[idx]);
	return 0;
}
*/
//���� 3
int main(void)
{
	char str[50];
	int len=0;
	int idx, max;
	printf("���ܾ� �Է�: ");
	scanf_s("%s", str, sizeof(str));
	
	while (str[len] != '\0')
		len++;
	
	max = str[0];
	for (idx = 1; idx < len; idx++)
	{
		if (max < str[idx])
			max = str[idx];
		else //else ��� ��
			continue;
	}
	printf("�ƽ�Ű �ڵ� ���� ���� ū ����: %c", max);
	return 0;
}