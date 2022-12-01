#include <stdio.h>
//파일 위치 지시자
//FILE의 구조체 멤버 중 파일의 위치 정보 저장 멤버 있음. 이 멤버 값 fgets, fputs, fread, fwrite같은 함수 호출될 때마다 참조, 갱신
//이 멤버 가리키는 위치 시작으로 문자열 읽어들임
//20바이트 문자열 읽혀졌으면 20바이트 뒤 가리킴
//파일 처음 개방되면 무조건 파일의 맨 앞부분 가리킴

//파일위치지시자의 이동: fseek
//int fseek(FILE*stream, long offset, int wherefrom);
//stream으로 전달된 파일 위치 지시자를 wherefrom에서부터 offset바이트만틈 이동
//offset 음수면 파일 시작 향하여 이동
// 
//wherefrom에 올 수 있는 상수
//SEEK_SET(0): 파일 맨 앞부터 이동 시작
//SEEK_CUR(1): 현재 위치부터 이동 시작
//SEEK_END(2): 파일 맨 끝부터 이동 시작
//SEEK_END 전달 시 마지막 데이터 아닌 EOF부터 이동 시작
/*
int main(void)
{
	FILE* fp;
	fopen_s(&fp, "C:\\Users\\skylim\\Documents\\건국대 슈찡비\\text.txt", "wt");

	fputs("123456789", fp);
	fclose(fp);

	fopen_s(&fp, "C:\\Users\\skylim\\Documents\\건국대 슈찡비\\text.txt", "rt");
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));
	fclose(fp);
	return 0;
}
*/
//현재 파일 위치 지시자의 위치: ftell
//long ftell(FILE*stream);
//맨 첫번째 가리키고 있다면 0, 세번째면 2

int main(void)
{
	int fpos;
	int i;

	FILE* fp;
	fopen_s(&fp, "C:\\Users\\skylim\\Documents\\건국대 슈찡비\\text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	fopen_s(&fp, "C:\\Users\\skylim\\Documents\\건국대 슈찡비\\text.txt", "rt");
	for (i = 0; i < 4; i++)
	{
		putchar(fgetc(fp));
		fpos = ftell(fp); //위에서 읽었으므로 위에서 읽은 거+1의 값 저장됨
		fseek(fp, -1, SEEK_END);
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);
	}
	fclose(fp);
	return 0;
}