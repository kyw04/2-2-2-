#include "stdio.h"

int main()
{
	char ch1, ch2;
	
	ch1 = getchar(); // �Է��� �ٹٲ����� ���� ��
	ch2 = fgetc(stdin); // ���۰� ����

	putchar(ch1);
	fputc(ch2, stdout);

	return 0;
}