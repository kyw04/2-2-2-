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
	struct person man = { "�迵��", "010-1234-5678", 18 };
	// ����ü�� ������ ������� �ʱ�ȭ
	printf("x��ǥ : %d y��ǥ : %d\n", pos1.xpos, pos1.ypos);
	printf("�̸� : %s ��ȭ��ȣ : %s ���� : %d\n", man.name, man.phone, man.age);

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