#include <stdio.h>

//문자 한개 읽어서 출력하기 - fgetc()
void main() {
	FILE* fp = NULL; 
	int c;
	fp = fopen("sam01.txt", "r");
	if (fp == NULL) {
		fprintf(stderr, "파일을 열 수 없습니다");
		exit(1);
	}
	while ((c = fgetc(fp) != -1)) {
		putchar(c);
	}
	fclose(fp);
	system("pause");
}
