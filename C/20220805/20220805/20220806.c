#include <stdio.h>

typedef struct phonebook
{
	char name[20];
	char phonenum[20];
}PHONEBOOK;

int main(void)
{
	FILE* fp;
	fopen_s(&fp, "C:/Users/skylim/Documents/건국대 슈찡비/phonebook.txt", "rt");

	PHONEBOOK pb[10];
	char select[20];
	int c = 0, i = 0, j = 0, k = 0, m = 0;
	
	while (fgets(pb[i].name, sizeof(pb[i].name), fp)!=NULL&&fgets(pb[i].phonenum, sizeof(pb[i].phonenum), fp)!=NULL)
	{
		i++;
	}
	fclose(fp); //읽기 모드인 파일을 닫아줘야함

	while (1)
	{
		printf("*****MENU*****\n");
		printf("1. Insert\n2. Delete\n3. Search\n4. Print All\n5.Exit\nChoose the item: ");
		scanf_s("%d", &c); getchar();
		if (c == 1)
		{
			puts("[ INSERT ]\n");
			puts("Input Name: "); fgets(pb[i].name, sizeof(pb[i].name), stdin);
			puts("Input Tel Number: "); fgets(pb[i].phonenum, sizeof(pb[i].phonenum), stdin);
			puts("                 Data Inserted\n");
			i++;
		}
		else if (c == 2)
		{
			puts("[ DELETE ]\n");
			puts("Input Name: "); fgets(select, sizeof(select), stdin);
			for (j = 0; j <= i; j++)
			{
				m = 0;
				while (1)
				{
					if (select[m] != pb[j].name[m] || (select[m] == 0 && pb[j].name[m] != 0) || (select[m] != 0 && pb[j].name[m] == 0))
						break;
					else if (select[m] == 0 && pb[j].name[m] == 0)
					{
						for (k = 0; pb[j].name[k] != 0; k++)
							pb[j].name[k] = 0;
						for (k = 0; pb[j].phonenum[k] != 0; k++)
							pb[j].phonenum[k] = 0;
						printf("삭제되었습니다.\n");
						break;
					}
					m++;
				}
			}
		}
		else if (c == 3)
		{
			puts("[ SEARCH ]\n");
			puts("Input Name: "); fgets(select, sizeof(select), stdin);
			for (j = 0; j <= i; j++)
			{
				m = 0;
				while (1)
				{
					if (select[m] != pb[j].name[m] || (select[m] == 0 && pb[j].name[m] != 0) || (select[m] != 0 && pb[j].name[m] == 0))
						break;
					else if (select[m] == 0 && pb[j].name[m] == 0)
					{
						printf("Name: %s\n", pb[j].name);
						printf("Tel: %s\n", pb[j].phonenum);
						break;
					}
					m++;
				}
			}
		}
		else if (c == 4)
		{
			puts("[ Print All Data ]");
			for (j = 0; j < i; j++)
			{
				if (pb[j].name[0] != 0)
				{
					printf("Name: %s\n", pb[j].name);
					printf("Tel: %s\n", pb[j].phonenum);
				}
			}
		}
		else
		{
			fopen_s(&fp, "C:/Users/skylim/Documents/건국대 슈찡비/phonebook.txt", "wt");
			for (j = 0; j < i; j++)
			{
				if (pb[j].name[0] != 0)
				{
					fputs(pb[j].name, fp);
					fputs(pb[j].phonenum, fp);
				}
			}
			fclose(fp); //쓰기모드 파일 닫아줌

			printf("프로그램 종료\n");
			break;
		}
	}
	return 0;
}
//FILE포인터는 하나의 파일 가리키는 거다
//이걸 쓰기모드 읽기모드를 따로 포인터 지정하는 거 오류
//읽을 때 열고 닫고 쓸 때 열고 닫고