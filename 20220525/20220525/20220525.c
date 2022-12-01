#include <stdio.h>
//문제 3
int main(void)
{
	char str1[20];
	char str2[20];
	int i = 0, j=0;
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);

	while (1)
	{
		if (str1[i] != str2[i])
		{
			puts("이름이 다릅니다");
			break;
		}
		if (str1[i] == 32 && str2[i] == 32)
		{
			puts("이름이 같습니다");
			break;
		}
		i++;	
	}

	for (i = 0; str1[i] != 32; i++);
	for (j = 0; str2[j] != 32; j++);

	while (1)
	{
		if (str1[i] != str2[j])
		{
			puts("나이가 다릅니다");
			break;
		}
		if (str1[i] == 0 && str2[j] == 0)
		{
			puts("나이가 같습니다");
			break;
		}
		i++; j++;
	}
	return 0;
}