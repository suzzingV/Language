#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[10001], b[10001];
	int result[10001] = { 0 };
	int i, lenA=0, lenB=0;
	scanf_s("%s", a, sizeof(a));
	scanf_s("%s", b, sizeof(b));
	lenA= strlen(a);
	lenB = strlen(b);

	for (i = len; i >= 0; i--)
	{
		if ((a[i]-'0') + (b[i]-'0') >= 10)
		{
			result[i -9999] += 1;
			result[i-10000] += (a[i] - '0') + (b[i] - '0') - 10;
		}
		else
			result[i - 10000] += (a[i] - '0') + (b[i] - '0');
	}

	return 0;
}