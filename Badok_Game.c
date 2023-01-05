#include <stdio.h>
#include <Windows.h>

void move_arrow_key(char chr, int* x, int* y, int x_b, int y_b);
void gotoxy(int x, int y);
void draw_check01(int c, int r);
void game_control(void);
void display_stone(int matrix[][20]);

int main(void)
{
	game_control();
	return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void draw_check01(int c, int r)
{
	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[12];
	for (i = 1; i < 12; i++)
		b[i] = 0xa0 + i;
	printf("%c%c", a, b[3]);//왼쪽상단
	printf("%c%c", a, b[1]);//
	for (i = 0; i < c - 1; i++) {
		printf("%c%c", a, b[8]);//우
		printf("%c%c", a, b[1]);//
	}
	printf("%c%c", a, b[4]);//오른쪽상단
	printf("\n");
	for (i = 0; i < r - 1; i++)
	{
		printf("%c%c", a, b[7]);//ㅏ
		printf("%c%c", a, b[1]);//ㅡ
		for (j = 0; j < c - 1; j++) {
			printf("%c%c", a, b[11]);//+
			printf("%c%c", a, b[1]);//
		}
		printf("%c%c", a, b[9]);//ㅓ
		printf("\n");
	}
	printf("%c%c", a, b[6]);//왼쪽하단
	printf("%c%c", a, b[1]);
	for (i = 0; i < c - 1; i++) {
		printf("%c%c", a, b[10]);//ㅗ
		printf("%c%c", a, b[1]);
	}
	printf("%c%c", a, b[5]);
	printf("\n");
}

void game_control(void)
{
	int x = 1, y = 1,other=0,matrix[2][20][20] = { 0 };
	char key;
	char* stone[2] = { "○","●" };

	do
	{
		gotoxy(1, 1);
		draw_check01(18, 18); // 바둑판크기
		gotoxy(x, y);
		printf("%s",stone[other]);
		display_stone(matrix);
		gotoxy(1, 20);
		printf("방향키로 움직이고 ");
		printf("스페이스 키를 누르시오.");
		gotoxy(1, 21);
		printf("돌을 놓았으면 상대방 차례입니다");
		key = getch();
		if (key == 27) // esc 키
			exit(0);
		else if (key == 32) { // space 키
			matrix[other][(x + 1) / 2][y] = 1;
			other = 1 - other;
		}
		else if (key >= 72)// 방향키
			move_arrow_key(key, &x, &y, 37, 19);
		// x 최대 37, y 최대 19
	} while (1);
}
void display_stone(int matrix[][20][20])
{
	int i,x, y;
	char* stone[2] = { "○","●" };
	
	for(i=0;i<2;i++)
		for (x = 1; x < 20; x++)
			for (y = 1; y < 20; y++)
			{
				if (matrix[i][x][y] == 1)
				{
					gotoxy(x * 2 - 1, y);

					printf("%s",stone[i]);
				}
			}
}
void move_arrow_key(char key, int* x1, int* y1, int x_b, int y_b)
{
	switch (key)
	{
	case 72:
		*y1 = *y1 - 1;
		if (*y1 < 1) *y1 = 1;
		break;
	case 75:
		*x1 = *x1 - 2;
		if (*x1 < 1) *x1 = 1;
		break;
	case 77:
		*x1 = *x1 + 2;
		if (*x1 > x_b) *x1 = x_b;
		break;
	case 80:
		*y1 = *y1 + 1;
		if (*y1 > y_b) *y1 = y_b;
		break;
	default:
		return;
	}
}
