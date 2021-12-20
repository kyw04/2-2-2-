#include "stdio.h"

int main()
{
	char str[10];

	gets_s(str);
	puts(str); // 자동 줄 바꿈
	puts("Good");

	fgets(str, sizeof(str), stdin);
	fputs(str, stdout); // 자동 줄 바꿈 없음
	fputs("Good", stdout);

	char perID[7], name[10];

	fputs("주민번호 앞 6자리 입력 : ", stdout);
	fgets(perID, sizeof(perID), stdin);
	// 주민번호 6자리를 입력하고 엔터를 누르면
	// 버퍼가 남아 이름에 엔터가 들어간다.
	// 엔터가 들어가면 입력 끝
	fputs("이름 입력 : ", stdout);
	fgets(name, sizeof(name), stdin);
	printf("주민번호 앞 6자리 : %s\n", perID);
	printf("이름 : %s\n", name);

	puts("주민번호 앞 6자리 입력 : ");
	gets_s(perID);
	// 6자리 다 입력을 하고 엔터를 누르면
	// 엔터는 버퍼에 남지 않는다.
	puts("이름 입력 : ");
	gets_s(name);
	printf("주민번호 앞 6자리 : %s\n", perID);
	printf("이름 : %s\n", name);

	return 0;
}
// gets는 visual studio에서는 오류가 나지만
// dev C++에선 문자열을 넘어도 입력이 됨
// 줄바꿈 입력 안됨

// fgets는 가장 마지막 인덱스에 NULL
// 문자를 추가함(최대 n - 1 문자 입력 가능)
// 줄바꿈도 입력 됨