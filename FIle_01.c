#include <stdio.h>
void main() {
	FILE* fp = NULL;
	fp = fopen("sam01.txt", "rb");
	//fp = fopen("sam01.txt", "w"); �߰����

	int c, fg;
	if (fp == NULL) {
		fprintf(stderr,"���Ͽ��� ����\n");
		exit(1);
	}
	for (int i = 0; i < 10; i++) {
		fg = fgetc(fp);
		printf("%d ", fg);
	}
	fclose(fp);
	system("pause");
}