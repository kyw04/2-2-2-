#include "stdio.h"

int main()
{
	char str[10];

	gets_s(str);
	puts(str); // �ڵ� �� �ٲ�
	puts("Good");

	fgets(str, sizeof(str), stdin);
	fputs(str, stdout); // �ڵ� �� �ٲ� ����
	fputs("Good", stdout);

	char perID[7], name[10];

	fputs("�ֹι�ȣ �� 6�ڸ� �Է� : ", stdout);
	fgets(perID, sizeof(perID), stdin);
	// �ֹι�ȣ 6�ڸ��� �Է��ϰ� ���͸� ������
	// ���۰� ���� �̸��� ���Ͱ� ����.
	// ���Ͱ� ���� �Է� ��
	fputs("�̸� �Է� : ", stdout);
	fgets(name, sizeof(name), stdin);
	printf("�ֹι�ȣ �� 6�ڸ� : %s\n", perID);
	printf("�̸� : %s\n", name);

	puts("�ֹι�ȣ �� 6�ڸ� �Է� : ");
	gets_s(perID);
	// 6�ڸ� �� �Է��� �ϰ� ���͸� ������
	// ���ʹ� ���ۿ� ���� �ʴ´�.
	puts("�̸� �Է� : ");
	gets_s(name);
	printf("�ֹι�ȣ �� 6�ڸ� : %s\n", perID);
	printf("�̸� : %s\n", name);

	return 0;
}
// gets�� visual studio������ ������ ������
// dev C++���� ���ڿ��� �Ѿ �Է��� ��
// �ٹٲ� �Է� �ȵ�

// fgets�� ���� ������ �ε����� NULL
// ���ڸ� �߰���(�ִ� n - 1 ���� �Է� ����)
// �ٹٲ޵� �Է� ��