#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
	int id; //도서번호
	char name[30]; //책 제목
	char  author[30]; // 저자
} MYL;
MYL library[1000];
void main() {
	char name[30], author[30];
	int select = 0; //메뉴선택
	int nbooks = 0; //책목록 첨자

	while (select != 6)
	{
		int select;
		printf("==========================================\n");
		printf("1.도서 번호로 책 찾기\n");
		printf("2.저자이름으로 책 찾기\n");
		printf("3.제목으로 책 찾기\n");
		printf("4.새로운 책 추가\n");
		printf("5.도서관이 소장한 도서 표시\n");
		printf("6.종료\n");
		printf("==========================================\n");
		printf("메뉴 중에서 하나를 선택하시오 : \n");
		scanf_s("%d", &select);
		getchar(); //엔터를 읽음

		switch (select) {
		case 1:
			printf("도서번호를 입력하시오 : ");
			scanf("%d", &library[nbooks].id);
			for (int i = 0; i < nbooks; i++) {
				if (library[nbooks].id == library[i].id)
					printf("%d %s %s\n", library[i].id, library[i].name, library[i].author);
			}
			break;
		case 2:
			printf("저자 이름을 입력하시오 : ");
			scanf("%s", author);
			for (int i = 0; i < nbooks; i++) {
				if (strcmp(author, library[i].author) == 0)
					printf("%s %s\n", library[i].name, library[i].author);
			}
			break;
		case 3:
			printf("책 이름을 입력하시오 : ");
			scanf("%s", name);
			for (int i = 0; i < nbooks; i++) {
				if (strcmp(name, library[i].name) == 0)
					printf("%s %s\n", library[i].name, library[i].author);
			}
			break;
		case 4:
			printf("책 이름 = ");
			gets_s(library[nbooks].name, 30);
			printf("저자 이름 = ");
			gets_s(library[nbooks].author, 30);
			library[nbooks].id = nbooks; //책번호를 도서번호로
			nbooks++;
			break;

		case 5:
			for (int i = 0; i < nbooks; i++) {
				printf("\n책이름 = %s", library[i].name);
				printf("\t저자 = %s", library[i].author);
			}
			printf("\n");
			break;

		case 6:
			exit(0);
		}
	}
}
