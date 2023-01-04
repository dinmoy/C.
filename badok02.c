#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

void gotoxy(int x, int y) {
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void draw_check02(int c, int r)
{
	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[12];
	for (i = 1; i < 12; i++)
		b[i] = 0xa0 + i;
	printf("%c%c ", a, b[3]); //포멧에 공백주기
	for (i = 0; i < c - 1; i++) {
		printf("%c%c ", a, b[1]); //ㅡ추가: 옆으로 열을 늘려줌
		printf("%c%c ", a, b[8]); //ㅜ
	}
	printf("%c%c ", a, b[1]); //ㅡ
	printf("%c%c ", a, b[4]); //┐
	printf("\n"); //엔터

	for (i = 0; i < r - 1; i++)
	{
		printf("%c%c ", a, b[2]);
		for (j = 0; j < c; j++)
		{
			printf("  ");// 공백
			printf("%c%c ", a, b[2]); // |: 옆칸으로 열을 늘려준다
		}
		printf("\n");
		printf("%c%c ", a, b[7]);
		for (j = 0; j < c - 1; j++)
		{
			printf("%c%c ", a, b[1]); // -
			printf("%c%c ", a, b[11]); // +
		}
		printf("%c%c ", a, b[1]); // 
		printf("%c%c ", a, b[9]); // ㅓ
		printf("\n");
	}
	printf("%c%c ", a, b[2]);

	for (i = 0; i < c; i++)
	{
		printf("  ");
		printf("%c%c ", a, b[2]);
	}
	printf("\n"); //엔터
	printf("%c%c ", a, b[6]);
	for (i = 0; i < c - 1; i++)
	{
		printf("%c%c ", a, b[1]); //
		printf("%c%c ", a, b[10]); // ㅗ
	}
	printf("%c%c ", a, b[1]); // ㅡ
	printf("%c%c ", a, b[5]); //┘
	printf("\n"); //엔터
	printf("입력 후 Enter>");

}
void main() {
	int row, column, count = 0;
	printf("<바둑판 그리기>\n\n");

	printf("가로의 길이를 입력하시오>");
	scanf("%d", &row);
	printf("세로의 길이를 입력하시오>");
	scanf("%d", &column);
	system("cls"); //화면 지우기
	
	for (int i = 0; i < 10; i++) {
		draw_check02(row, column);

		gotoxy(3, 2); //보기 좋은 위치

		srand((unsigned)time(NULL));
		char Apabet = rand() % 26 + 65;

		gotoxy((rand() % row + 2) * 2, rand() % column + 2);
		printf("%c", Apabet);

		gotoxy(1, row * 2 + 1); //종료 커서의 위치
		printf("♥");

		char result = getch();
		gotoxy(1, row * 2 + 4);
		printf("%c", result);


		gotoxy(1, row * 2 + 6);
		if (result == Apabet) printf("정답입니다\n");
		else printf("틀렸습니다\n");

		system("pause");
		system("cls");
	
	}
	system("pause");
}