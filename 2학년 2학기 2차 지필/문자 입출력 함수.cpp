#include "stdio.h"

int main()
{
	char ch1, ch2;
	
	ch1 = getchar(); // 입력을 줄바꿈으로 했을 때
	ch2 = fgetc(stdin); // 버퍼가 남음

	putchar(ch1);
	fputc(ch2, stdout);

	return 0;
}