#include <stdio.h>
/*int main(void)
{
	int t, r, i, j, k, l;
	char str[20], pstr[100];
	scanf_s("%d", &t);

	for (i = 0; i < t; i++)
	{
		l = 0;
		scanf_s("%d", &r);
		scanf_s("%s", str, sizeof(str));
		for (j = 0; str[j] != '\0'; j++)
		{
			for (k = 0; k < r; k++)
			{
				pstr[l] = str[j];
				l++;
			}
		}
		pstr[l] = '\0';
		printf("%s \n", pstr);
	}
	return 0;
}

#include <stdio.h>
char voca[1000000];
int num[26];

int main(void)
{
	int i, r = 0, max = 0;
	scanf("%s", voca, sizeof(voca));

	for (i = 0; voca[i] != '\0'; i++)
	{
		if ((voca[i] >= 65) && (voca[i] <= 90))
			num[voca[i] - 65] += 1;
		else if ((voca[i] >= 97) && (voca[i] <= 122))
			num[voca[i] - 97] += 1;
	}

	for (i = 0; i < 26; i++)
	{
		if (num[max] < num[i])
			max = i;
	}

	for (i = 0; i < 26; i++)
	{
		if (num[max] == num[i])
			r++;
	}

	if (r == 1)
		printf("%c \n", max + 65);
	else
		printf("%c \n", '?');
	return 0;
}

char str[1000000];

int main(void)
{
	int i, vac = 0;
	scanf_s("%[^\n]s", str, sizeof(str)); 
	
	for (i = 0; str[i]!='\0'; i++)
	{
		if (str[i] == ' ')
			vac++;
	}
	
	if ((str[0] == ' ') && (str[i - 1] == ' '))
		printf("%d \n", vac-1);
	else if (((str[0] == ' ') && (str[i - 1] != ' ')) || ((str[0] != ' ') && (str[i-1] == ' ')))
		printf("%d \n", vac);
	else
		printf("%d \n", vac + 1);
	return 0;	
}
//2908

void ReverseNum(char num[])
{
	char p = 'a';
	p = num[0];
	num[0] = num[2];
	num[2] = p;
}

void Compare(int a, int b)
{
	if (a > b)
		printf("%d \n", a);
	else if (a < b)
		printf("%d \n", b);
}
int main(void)
{
	char num1[4], num2[4];
	int numA = 0, numB = 0;
	scanf_s("%s", num1, sizeof(num1));
	scanf_s("%s", num2, sizeof(num2)); 
	
	ReverseNum(num1);
	ReverseNum(num2);

	numA = (num1[0] - '0') * 100 + (num1[1] - '0') * 10 + (num1[2] - '0');
	numB = (num2[0] - '0') * 100 + (num2[1] - '0') * 10 + (num2[2] - '0');
	Compare(numA, numB);
	return 0;
}
*/