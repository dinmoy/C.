#include <stdio.h>

//���� �Ѱ� �о ����ϱ� - fgetc()
void main() {
	FILE* fp = NULL; 
	int c;
	fp = fopen("sam01.txt", "r");
	if (fp == NULL) {
		fprintf(stderr, "������ �� �� �����ϴ�");
		exit(1);
	}
	while ((c = fgetc(fp) != -1)) {
		putchar(c);
	}
	fclose(fp);
	system("pause");
}
