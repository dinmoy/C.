#include <stdio.h>
void main() {
	FILE* fp = NULL;
	char str[100];
	fp = fopen("sam01.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "������ �� �� �����ϴ�");
		exit(1);
	}
	do {
		gets_s(str, sizeof(str)); //ǥ�� �Է����� ���ڿ� �б�
		fputs(str, fp); //���ڿ� ���
	} while (strlen(str) != 0);
	fclose(fp);
	system("pause");
}