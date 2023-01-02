#include <stdio.h>
void main() {
	FILE* fp = NULL; //파일을 가리키는 포인터
	fp = fopen("sam01.txt", "w"); //쓰기 모드로 sam01.txt를 연다
	if (fp == NULL) printf("파일열기 실패\n");
	else printf("파일열기 성공\n");
	fclose(fp); //fopen() 후 반드시 fclose
	system("pause");
}