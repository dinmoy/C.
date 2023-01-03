#include <stdio.h>
void main() {
	char s[20] = "abcd";
	char* t = "홍미림";
	printf("문자열 s의 길이: %d\n", strlen(s));
	printf("sizeof(s): %d\n", sizeof(s));
	printf("문자열 1의 길이:%d\n", strlen(t));
	printf("sizeof(t): %d\n", sizeof(t));
	system("pause");
}