#include <stdio.h>
/*
//문자 출력 함수
int main(void)
{
	int putchar(int c); //인자로 전달된 문자를 모니터로 출력하는 함수
	int fputc(int c, FILE * stream); //문자를 전송할 스트림 지정 가능 //stdout뿐만 아니라 파일 대상으로도 데이터 전송 가능 //stream은 문자를 출력할 스트림의 지정에 사용 //이 인자에 stdout전달하면 putchar과 동일한 함수
} //함수 호출 성공 시 쓰여진 문자정보가, 실패 시 EOF 반환

//문자 입력 함수
int main(void)
{
	int getchar(void); //키보드로부터 하나의 문자 입력 받는 함수
	int fgetc(FILE * stream); //문자 입력받을 스트림 지정 가능
} //파일의 끝에 도달하거나 함수호출 실패 시 EOF 반환

int main(void)
{
	int ch1, ch2;

	ch1 = getchar(); //문자 입력 함수 //문자를 정수로
	ch2 = fgetc(stdin); //문자 입력 함수 //문자를 정수로 //인자가 stdin이므로 키보드로 입력 //엔터키 입력: 엔터키도 아스키 코드값 10인 '\n'

	putchar(ch1); //문자 출력 함수 //정수를 문자로 (아스키 코드)
	fputc(ch2, stdout); //문자 출력 함수 //정수를 문자로 //하지만 반환형은 int (네 개 다): EOF는 -1로 정의된 상수인데, 이것을 제대로 출력하기 위해 //엔터키 입력 //뒤에 \n 포함
	return 0;
}

//문자 입출력에서의 EOF
int main(void)
{
	int ch;

	while (1)
	{
		ch = getchar(); //문자 입력 //문자열 입력하면 반복문이기 때문에 문자열의 문자 수만큼 getchar 함수 호출되므로 문자열 그대로 출력
		if (ch == EOF) //getchar 함수가 EOF 반환할 떄: 1. 함수 호출 실패 2. Windows에서 CTRL+Z 키, Linux에서 CTRL+D 키가 입력
			break;
		putchar(ch);
	}
	return 0;
}
*/
//문제 21-1
int main(void)
{
	int ch; 
	ch = getchar();
	if (ch >= 65 && ch <= 90)
		putchar(ch + 32);
	else if (ch >= 97 && ch <= 122)
		putchar(ch - 32);
	else
		putchar(48);
	return 0;
}