#include <stdio.h>
void main() {
	char s[20] = "abcd";
	char* t = "ȫ�̸�";
	printf("���ڿ� s�� ����: %d\n", strlen(s));
	printf("sizeof(s): %d\n", sizeof(s));
	printf("���ڿ� 1�� ����:%d\n", strlen(t));
	printf("sizeof(t): %d\n", sizeof(t));
	system("pause");
}