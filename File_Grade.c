#include <stdio.h>

void main() {
	FILE* fp;
	int num;
	char name[20];
	int score;
	char ch;
	fp = fopen("sam01.txt", "w");
	if (fp == NULL) {
		printf("���� ���� sam01.txt�� ���� �����ϴ�");
		exit(1);
	}
	do {
		printf("\n�й�: ");
		scanf("%d", &num);
		printf("�̸�: ");
		scanf("%s", &name);
		printf("����: ");
		scanf("%d", &score);
		fprintf(fp, "%d %s %d\n", num, name, score);
		printf("\n������ �߰� �Լ� (y/n) : ");
		ch = getche();
	} while (ch != 'n');
	fclose(fp);
	system("pause");
}