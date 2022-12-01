#include <stdio.h>
/*
typedef struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
}Student;

void ShowStudentInfo(Student* sptr)
{
	printf("학생 이름: %s \n", sptr->name); //구조체 안의 변수 일때 주소값 구조체 주소값->변수
	printf("학생 고유번호: %s \n", sptr->stdnum);
	printf("학교 이름: %s \n", sptr->school);
	printf("선택 전공: %s \n", sptr->major);
	printf("학년: %d \n", sptr->year);
}

int main(void)
{
	Student arr[7]; //구조체를 배열로 덩어리 만들 수 있음 7개 덩어리
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("이름: "); scanf_s("%s", arr[i].name, sizeof(arr[i].name)); //arr[i]를 구조체의 변수처럼
		printf("번호: "); scanf_s("%s", arr[i].stdnum, sizeof(arr[i].stdnum));
		printf("학교: "); scanf_s("%s", arr[i].school, sizeof(arr[i].school));
		printf("전공: "); scanf_s("%s", arr[i].major, sizeof(arr[i].major));
		printf("학년: "); scanf_s("%d", &arr[i].year);
	}

	for (i = 0; i < 7; i++)
	{
		ShowStudentInfo(&arr[i]);
	}

	return 0;
}
*/
typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct circle
{
	Point cen; //구조체 안에 구조체변수 사용 가능
	double rad;
}Circle;

void ShowCircleInfo(Circle* cptr)
{
	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos); //Circle 안의 cen안의 xpos
	printf("%g \n\n", cptr->rad);
}

int main(void)
{
	Circle c1 = { {1,2}, 3.5 }; //구조체 안의 구조체 또 중괄호 쳐줌
	Circle c2 = { 2,4, 3.9 }; //중괄호 안 치면 순서대로 초기화됨
	ShowCircleInfo(&c1); 
	ShowCircleInfo(&c2);
	return 0;
}