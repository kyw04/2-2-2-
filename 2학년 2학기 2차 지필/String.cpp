#include "stdio.h"

int main()
{
	char ch1[30] = "1234567890";
	char ch2[30] = "Second";
	char ch3[30] = "Simple num : ";
	char ch4[30] = "1234567890";
	char ch5[5];

	// 문자열 복사 함수
	strcpy(ch2, ch1);
	puts(ch2);
	strncpy(ch5, ch1, sizeof(ch5));
	puts(ch5);

	// 문자열 붙이는 함수
	strcat(ch1, ch2);
	puts(ch1);
	strncat(ch3, ch4, 7);
	puts(ch3);

	// 문자열 비교함수
	printf("%d\n", strcmp("ABC", "ABC"));
	printf("%d\n", strcmp("ABC", "ABD"));
	printf("%d\n", strcmp("ABD", "ABC"));
	printf("%d\n", strcmp("AB", "ABC"));

	strcpy(ch1, ch2); // ch1과 ch2의 문자열을 같게
	if (ch1 == ch2) puts("같다"); // 문자열의 첫번째 주소 값 비교
	else puts("다르다");

	strcpy(ch1, "Simple");
	strcpy(ch2, "Simon");
	printf("%d\n", strcmp(ch1, ch2));
	if (!strcmp(ch1, ch2)) puts("같다");
	else
	{
		puts("다르다");
		if (!strncmp(ch1, ch2, 3))
			puts("그러나 앞 3 글자는 같다.");
	}
	return 0;
}