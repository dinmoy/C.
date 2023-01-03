#include <stdio.h>
#include <string.h>
#define TITLE_SIZE 50
#define NAME_SIZE 50
#define PUBLISHER_SIZE 50

typedef struct Book {
	char title[TITLE_SIZE];
	char author[NAME_SIZE];
	char publisher[PUBLISHER_SIZE];
}Book;
void add_record(Book library[], int count) {
	getchar();
	printf("������ �̸�: ");
	gets(library[count].title);
	printf("����: ");
	gets(library[count]. author);
	printf("���ǻ�: ");
	gets(library[count].publisher);
} //�߰�
void memu() {
	printf("=====================\n");
	printf("1. �߰� \n");
	printf("2. ��� \n");
	printf("3. �˻� \n");
	printf("4. ���� \n");
	printf("=====================\n");
}//�޴�����
int get_input() {
	int num;
	printf("�������� �Է��Ͻÿ�: ");
	scanf("%d", &num);
	return num;
}//�޴����ù�ȣ
void print_record(Book library[], int count) {
	int i;
	fflush(stdin);
	for (i = 0; i < count; i++)
	{
		printf("����: %s\n", library[i].title);
		printf("����: %s\n", library[i].author);
		printf("���ǻ�: %s\n", library[i].publisher);
	}
}//���
void search_record(Book library[], int count) {
	int i;
	char title[TITLE_SIZE];
	getchar();
	printf("����: ");
	gets(title);

	for (i = 0; i < count; i++) {
		if (strcmp(title, library[i].title)==0) {
			printf("���ǻ�� %s\n", library[i].publisher);
			return;
		}
	}
	printf("ã�� å�� ���̺� �����ϴ�");
} //�˻�

void main() {
	int num, count = 0;
	Book library[30] = { '\n' };
	while (1) {
		menu();
		num = get_input();
		switch (num){
		case 1://�߰�
			add_record(library, count);
			count++;
			continue;
		case 2: //���
			print_record(library, count);
			continue;
		case 3: //�˻�
			search_record(library, count);
			continue;
		case 4: //����
			return 1;
			}
		return 0;
	}
	system("pause");
}