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
		printf("�޸��Ҵ� ����\n");
		exit(1);
	}

	p[0].sno = 0;
	strcpy(p[0].name, "�Ϸиӽ�ũ");
	strcpy(p[0].dept, "���̵�����Ʈ�����");

	p[1].sno = 1;
	strcpy(p[1].name, "�����̸�");
	strcpy(p[1].dept, "���̵�����ַ��");

	p[2].sno = 2;
	strcpy(p[2].name, "��Ƽ���⽺");
	strcpy(p[2].dept, "���̵�������");

	for (int i = 0; i < 3; i++) printf("�й�: %d\t�̸�: %s\t����: %s\n", p[i].sno, p[i].name,p[i].dept);
	free(p);
}