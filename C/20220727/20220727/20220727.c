#include <stdio.h>
/*
int main(void)
#include "header1.h" //#include 지시자: 파일의 내용 단순히 포함
#include "header2.h"

//헤더파일을 include 하는 두 가지 방법
//#include <헤더파일 이름> : 표준 헤더파일이 저장되어있는 디렉터리에서 파일 찾음
//#include "헤더파일 이름" : 이 문장 포함하는 소스파일이 저장된 디렉터리에서 헤더파일 찾음, 프로그래머가 정의하는 헤더파일 포함시킬 때/절대경로 명시해서 헤더파일을 지정할 수 있다 하지만 다른 컴퓨터에서 컴파일하는 게 번거로워지므로 #include 에서는 절대경로 사용 안함

//상대경로 지정 방법
//컴퓨터 옮겨도 지정된 경로 변경 안됨
//실행하는 컴퓨터따라 경로 바뀜
//#include "Release\header0.h"  //소스파일이 있는 디렉터리의 하위 디렉터리인 Release 디렉터리에 존재하는 header0.h 포함
//#include "..\CProg\header1.h" //한 단계 상위 디렉터리의 하위 디렉터리인 CProg에 존재하는 header1.h 포함
//#include "..\..\MyHeader\header2.h" //두 단계 상위 디렉터리의 하위 디렉터리인 MyHeader에 존재하는 header2.h 포함

#include "areaArith.h"
#include "roundArith.h"

int main(void)
{
	printf("삼각형 넓이 (밑변 4, 높이 2): %g \n", TriangleArea(4,2));
	printf("원 넓이 (반지름 3): %g \n", CircleArea(3));
	
	printf("직사각형 둘레 (밑변 2.5, 높이 5.2): %g \n", RectangleRound(2.5, 5.2));
	printf("정사각형 둘레 (변의 길이 3): %g \n", SquareRound(3));
	return 0;
}

typedef struct div
{
	int quotient;
	int reminder;
}Div; //컴파일은 파일 단위로 이뤄지므로 또 선언해야됨, 구조체 선언은 헤더파일로 하는 게 좋다

extern Div IntDiv(int num1, int num2);

int main(void)
{
	Div val = IntDiv(5, 2);
	printf("몫: %d \n", val.quotient);
	printf("나머지: %d \n", val.reminder);
	return 0;
}

#include "stdiv.h" //헤더파일 하면 선언 또 안해도 됨

extern Div IntDiv2(int num1, int num2);

int main(void)
{
	Div val = IntDiv2(5, 2);
	printf("몫: %d \n", val.quotient);
	printf("나머지: %d \n", val.reminder);
	return 0;
}
*/
