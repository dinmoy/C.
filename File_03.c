#include <stdio.h>
void main() {
	FILE* fp = NULL;
	char str[100];
	fp = fopen("sam01.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "파일을 열 수 없습니다");
		exit(1);
	}
	do {
		gets_s(str, sizeof(str)); //표준 입력으로 문자열 읽기
		fputs(str, fp); //문자열 출력
	} while (strlen(str) != 0);
	fclose(fp);
	system("pause");
}