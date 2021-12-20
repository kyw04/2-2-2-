#include "stdio.h"

struct point
{
	int xpos, ypos;
};
struct person
{
	char name[20], phone[20];
	int age;
};

int main()
{
	struct point pos1 = { 10, 20 };
	struct point pos2 = { 100, 200 };
	struct person man = { "김영웅", "010-1234-5678", 18 };
	// 구조체에 선언한 순서대로 초기화
	printf("x좌표 : %d y좌표 : %d\n", pos1.xpos, pos1.ypos);
	printf("이름 : %s 전화번호 : %s 나이 : %d\n", man.name, man.phone, man.age);

	struct point* pptr = &pos1;
	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	printf("[%d, %d]\n", (*pptr).xpos, (*pptr).ypos);
	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d]\n", pptr->xpos, pptr->ypos);

	// (*pptr).xpos == pptr->xpos

	return 0;
}