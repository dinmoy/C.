#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
	int id; //������ȣ
	char name[30]; //å ����
	char  author[30]; // ����
} MYL;
MYL library[1000];
void main() {
	char name[30], author[30];
	int select = 0; //�޴�����
	int nbooks = 0; //å��� ÷��

	while (select != 6)
	{
		int select;
		printf("==========================================\n");
		printf("1.���� ��ȣ�� å ã��\n");
		printf("2.�����̸����� å ã��\n");
		printf("3.�������� å ã��\n");
		printf("4.���ο� å �߰�\n");
		printf("5.�������� ������ ���� ǥ��\n");
		printf("6.����\n");
		printf("==========================================\n");
		printf("�޴� �߿��� �ϳ��� �����Ͻÿ� : \n");
		scanf_s("%d", &select);
		getchar(); //���͸� ����

		switch (select) {
		case 1:
			printf("������ȣ�� �Է��Ͻÿ� : ");
			scanf("%d", &library[nbooks].id);
			for (int i = 0; i < nbooks; i++) {
				if (library[nbooks].id == library[i].id)
					printf("%d %s %s\n", library[i].id, library[i].name, library[i].author);
			}
			break;
		case 2:
			printf("���� �̸��� �Է��Ͻÿ� : ");
			scanf("%s", author);
			for (int i = 0; i < nbooks; i++) {
				if (strcmp(author, library[i].author) == 0)
					printf("%s %s\n", library[i].name, library[i].author);
			}
			break;
		case 3:
			printf("å �̸��� �Է��Ͻÿ� : ");
			scanf("%s", name);
			for (int i = 0; i < nbooks; i++) {
				if (strcmp(name, library[i].name) == 0)
					printf("%s %s\n", library[i].name, library[i].author);
			}
			break;
		case 4:
			printf("å �̸� = ");
			gets_s(library[nbooks].name, 30);
			printf("���� �̸� = ");
			gets_s(library[nbooks].author, 30);
			library[nbooks].id = nbooks; //å��ȣ�� ������ȣ��
			nbooks++;
			break;

		case 5:
			for (int i = 0; i < nbooks; i++) {
				printf("\nå�̸� = %s", library[i].name);
				printf("\t���� = %s", library[i].author);
			}
			printf("\n");
			break;

		case 6:
			exit(0);
		}
	}
}
