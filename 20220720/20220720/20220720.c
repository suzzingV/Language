#include <stdio.h>
/*
//문제 1
int main(void)
{
	FILE* ms = 0;
	fopen_s(&ms, "C:\\Users\\skylim\\Documents\\건국대 슈찡비\\mystory.txt", "wt");

	if (ms == NULL)
	{
		puts("파일 호출 실패!");
		return -1;
	}

	fputs("#이름: 윤성우 \n", ms);
	fputs("#주민번호: 900208-1012589 \n", ms);
	fputs("#전화번호: 010-1111-2222 \n", ms);
	fclose(ms);
	return 0;
}

//문제 2
int main(void)
{
	FILE* ms = 0;
	fopen_s(&ms, "C:\\Users\\skylim\\Documents\\건국대 슈찡비\\mystory.txt", "at"); //"wt"로 하면 전에 있던 거 없어지고 출력됨

	if (ms == NULL)
	{
		puts("파일 호출 실패!");
		return -1;
	}
	
	fputs("#즐겨먹는 음식: 짬뽕, 탕수육 \n", ms);
	fputs("#취미: 축구 \n", ms);
	fputs("롤하고 싶다", ms);
	fclose(ms);
	return 0;
}
*/
//문제 3
int main(void)
{
	FILE* ms = 0;
	fopen_s(&ms, "C:\\Users\\skylim\\Documents\\건국대 슈찡비\\mystory.txt", "rt");
	char story[30];

	if (ms == NULL)
	{
		puts("파일 호출 실패!");
		return -1;
	}


	while (1)
	{
		if (feof(ms) != 0)
			break;
		else
		{
			fgets(story, sizeof(story), ms); //fgets: ms로부터 story에 있는 문자열 읽어들여서 ms에 저장 //fgets하면 다음 거 집어넣을 때 전에 거 없애고 집어넣음
			printf("%s", story);
		}
	}
	/*
	while(fgets(story, sizeof(story), fp)!=NULL) //while의 조건 안에 들어있어도 실행됨 //문자열은 NULL
		printf(story);
	*/
	fclose(ms);
	return 0;
}
