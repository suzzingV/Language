#include <stdio.h>

typedef struct book
{
	char title[20];
	char writer[20];
	int page;
}Book;

int main(void)
{
	Book infor[3];
	int i;
	printf("도서 정보 입력 \n");
	
	for (i = 0; i < 3; i++)
	{
		printf("저자: "); fgets(infor[i].writer, sizeof(infor[i].writer), stdin); 
		printf("제목: "); fgets(infor[i].title, sizeof(infor[i].title), stdin); //공백 포함 문자열 받을 수 있다 //\n도 포함되어있다
		printf("페이지 수: "); scanf_s("%d", &infor[i].page);
		getchar();
	}
	
	printf("도서 정보 출력 \n");
	for (i = 0; i < 3; i++)
	{
		printf("book %d \n", i + 1);
		printf("저자: %s", infor[i].writer);
		printf("제목: %s", infor[i].title);
		printf("페이지 수: %d \n", infor[i].page);
	}
	return 0;
}