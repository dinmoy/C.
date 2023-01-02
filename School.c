#include <stdio.h>
#include <stdlib.h>

struct Student {
	int sno;
	char name[12];
	char dept[30];
};
void main() {
	struct Student* p;
	p = (struct Student*)malloc(3 * sizeof(struct Student));
	if (p == NULL) {
		printf("메모리할당 오류\n");
		exit(1);
	}

	p[0].sno = 0;
	strcpy(p[0].name, "일론머스크");
	strcpy(p[0].dept, "뉴미디어소프트웨어과");

	p[1].sno = 1;
	strcpy(p[1].name, "폰노이만");
	strcpy(p[1].dept, "뉴미디어웹솔루션");

	p[2].sno = 2;
	strcpy(p[2].name, "스티븐잡스");
	strcpy(p[2].dept, "뉴미디어디자인");

	for (int i = 0; i < 3; i++) printf("학번: %d\t이름: %s\t전공: %s\n", p[i].sno, p[i].name,p[i].dept);
	free(p);
}