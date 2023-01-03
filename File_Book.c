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
	printf("도서의 이름: ");
	gets(library[count].title);
	printf("저자: ");
	gets(library[count]. author);
	printf("출판사: ");
	gets(library[count].publisher);
} //추가
void memu() {
	printf("=====================\n");
	printf("1. 추가 \n");
	printf("2. 출력 \n");
	printf("3. 검색 \n");
	printf("4. 종료 \n");
	printf("=====================\n");
}//메뉴선택
int get_input() {
	int num;
	printf("정수값을 입력하시오: ");
	scanf("%d", &num);
	return num;
}//메뉴선택번호
void print_record(Book library[], int count) {
	int i;
	fflush(stdin);
	for (i = 0; i < count; i++)
	{
		printf("제목: %s\n", library[i].title);
		printf("저자: %s\n", library[i].author);
		printf("출판사: %s\n", library[i].publisher);
	}
}//출력
void search_record(Book library[], int count) {
	int i;
	char title[TITLE_SIZE];
	getchar();
	printf("제목: ");
	gets(title);

	for (i = 0; i < count; i++) {
		if (strcmp(title, library[i].title)==0) {
			printf("출판사는 %s\n", library[i].publisher);
			return;
		}
	}
	printf("찾는 책이 테이블에 없습니다");
} //검색

void main() {
	int num, count = 0;
	Book library[30] = { '\n' };
	while (1) {
		menu();
		num = get_input();
		switch (num){
		case 1://추가
			add_record(library, count);
			count++;
			continue;
		case 2: //출력
			print_record(library, count);
			continue;
		case 3: //검색
			search_record(library, count);
			continue;
		case 4: //종료
			return 1;
			}
		return 0;
	}
	system("pause");
}