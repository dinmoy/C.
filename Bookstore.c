#include <stdio.h>
#include <stdlib.h>
struct Book {
	int number;
	char title[100];
};
void main() {
	struct Book* p;
	p = (struct Book*)malloc(2 * sizeof(struct Book));
	if (p == NULL) {
		printf("�޸� �Ҵ����\n");
		exit(1);
	}
	p[0].number = 1;
	strcpy(p[0].title, "C���");
	p[1].number = 2;
	strcpy(p[1].title, "JAVA���");
	for (int i = 0; i < 2; i++) printf("%d : %s\n", p[i].number, p[i].title);
	free(p);
	system("pause");
}