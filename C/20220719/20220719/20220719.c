#include <stdio.h>
/*
//int fputc(int c, FILE*stream) : 문자 출력
//int fgetc(FILE*stream) : 문자 입력
//int fputs(const char *s, FILE*stream) : 문자열 출력
//char *fgets(char *s, int n, FILE *stream) : 문자열 입력
int main(void)
{
	FILE* fp = 0;
	fopen_s(&fp, "C:\\Users\\skylim\\Documents\\건국대 슈찡비\\simple.txt", "wt"); //문자열 출력이므로 텍스트 모드로 개방
	if (fp == NULL)
	{
		puts("파일 호출 실패!");
		return -1;
	}

	fputc('A', fp); 
	fputc('B', fp);
	fputs("My name is Sujin \n", fp);
	fputs("Your name is Yoonseok \n", fp);
	fclose(fp);
	return 0;
}

int main(void)
{
	int ch;
	char str[30];

	FILE* fp = 0;
	fopen_s(&fp, "C:\\Users\\skylim\\Documents\\건국대 슈찡비\\simple.txt", "rt");
	if (fp == NULL)
	{
		puts("파일 호출 실패!");
		return -1;
	}

	ch = fgetc(fp); //한 글자 읽고 
	printf("%c \n", ch);
	ch = fgetc(fp); //다음 글자 하나 읽고
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp); //읽었던 문자 다음부터 읽음 //str에 fp가 가리킨 문자열 읽기 //\n이 나오면 문자열 끝났다고 생각함 //파일 출력할 때 널문자는 같이 안 감
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str); 
	fclose(fp);
	return 0;
}

//파일 끝인지 확인
//int feof(FILE*stream); //파일 끝이면 0이 아닌 값 반환
int main(void)
{
	int ch;
	FILE* src = 0;
	FILE* des = 0;
	fopen_s(&src, "C:\\Users\\skylim\\Documents\\건국대 슈찡비\\simple.txt", "rt");
	fopen_s(&des, "C:\\Users\\skylim\\Documents\\건국대 슈찡비\\des.txt", "wt");

	if (src == 0 || des == 0)
	{
		puts("파일 호출 실패!");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF) //fgetc는 EOF반환할 때까지 계속 됨 //파일의 끝 도달, 오류 발생 시 EOF 반환
		fputc(ch, des); //des에 src에서 읽어들인 값 복사

	if (feof(src) != 0) //src포인터 가리키고 있는 곳
		puts("파일 복사 완료!"); //파일의 끝이 아닌 오류때문에 EOF 떴을 수도 있으므로 파일 끝 확인
	else
		puts("파일 복사 실패!");
	
	fclose(src);
	fclose(des);
	return 0;
}

int main(void)
{
	char str[20];
	FILE* src = 0;
	FILE* des = 0;
	fopen_s(&src, "C:\\Users\\skylim\\Documents\\건국대 슈찡비\\simple.txt", "rt");
	fopen_s(&des, "C:\\Users\\skylim\\Documents\\건국대 슈찡비\\des.txt", "wt");

	if (src == NULL || des == NULL)
	{
		puts("파일 호출 실패!");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL) //fgets함수 파일의 끝에 도달, 오류 NULL 반환
		fputs(str, des);
	if (feof(src) != 0)
		puts("파일 복사 완료!");
	else
		puts("파일 복사 실패!");
	fclose(src);
	fclose(des);
	return 0;
}
*/
