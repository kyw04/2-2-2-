#include "stdio.h"

int main()
{
	char ch;
	while (true)
	{
		ch = getchar();
		if (ch == EOF) break;
		putchar(ch);
	}
	return 0;
}
// ^Z(ctrl + z)�� ��ǥ���� EOF�̴�.