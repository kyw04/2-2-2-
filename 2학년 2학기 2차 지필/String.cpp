#include "stdio.h"

int main()
{
	char ch1[30] = "1234567890";
	char ch2[30] = "Second";
	char ch3[30] = "Simple num : ";
	char ch4[30] = "1234567890";
	char ch5[5];

	// ���ڿ� ���� �Լ�
	strcpy(ch2, ch1);
	puts(ch2);
	strncpy(ch5, ch1, sizeof(ch5));
	puts(ch5);

	// ���ڿ� ���̴� �Լ�
	strcat(ch1, ch2);
	puts(ch1);
	strncat(ch3, ch4, 7);
	puts(ch3);

	// ���ڿ� ���Լ�
	printf("%d\n", strcmp("ABC", "ABC"));
	printf("%d\n", strcmp("ABC", "ABD"));
	printf("%d\n", strcmp("ABD", "ABC"));
	printf("%d\n", strcmp("AB", "ABC"));

	strcpy(ch1, ch2); // ch1�� ch2�� ���ڿ��� ����
	if (ch1 == ch2) puts("����"); // ���ڿ��� ù��° �ּ� �� ��
	else puts("�ٸ���");

	strcpy(ch1, "Simple");
	strcpy(ch2, "Simon");
	printf("%d\n", strcmp(ch1, ch2));
	if (!strcmp(ch1, ch2)) puts("����");
	else
	{
		puts("�ٸ���");
		if (!strncmp(ch1, ch2, 3))
			puts("�׷��� �� 3 ���ڴ� ����.");
	}
	return 0;
}