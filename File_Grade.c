#include <stdio.h>

void main() {
	FILE* fp;
	int num;
	char name[20];
	int score;
	char ch;
	fp = fopen("sam01.txt", "w");
	if (fp == NULL) {
		printf("성적 파일 sam01.txt를 열수 없습니다");
		exit(1);
	}
	do {
		printf("\n학번: ");
		scanf("%d", &num);
		printf("이름: ");
		scanf("%s", &name);
		printf("성적: ");
		scanf("%d", &score);
		fprintf(fp, "%d %s %d\n", num, name, score);
		printf("\n데이터 추가 게속 (y/n) : ");
		ch = getche();
	} while (ch != 'n');
	fclose(fp);
	system("pause");
}