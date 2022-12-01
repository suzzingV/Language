#include <stdio.h>
int front_is_smaller(char* str1, char* str2)
{
	int i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			break;
		i++;
	}
	if (str1[i] - str2[i] < 0)
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	char* min;
	int	i;
	int j;

	i = 1;
	min = argv[1];
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (front_is_smaller(argv[j + 1], argv[j]))
			{
				min = argv[j + 1];
				argv[j + 1] = argv[j];
				argv[j] = min;
			}
			j++;
		}
		i++;
	}

	i = 0;
	while (i < argc)
		printf("%s \n", argv[i++]);
	return 0;
}