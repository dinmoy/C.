#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define X_MAX 70
#define Y_MAX 25

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void move_arrow_key(char key,int* x1,int* y1,int x_b,int y_b) 
{
	switch (key)
	{
	case 72:
		*y1 = *y1 - 1;
		if (*y1 < 1) *y1 = 1;
		break;
	case 75:
		*x1 = *x1 - 1;
		if (*x1 < 1) *x1 = 1;
		break;
	case 77:
		*x1 = *x1 + 1;
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
void move(){
	char key;
	int x = 5, y = 5;
	do
	{
		gotoxy(x, y);
		printf("□");
		key = getch();
		do {
			move_arrow_key(key, &x, &y, X_MAX, Y_MAX);
			gotoxy(x, y);
			printf("□");
			Sleep(10);
			//system("cls");
		} while (!kbhit()); //키를 눌렀는지 확인
	} while (key != 27);
	}
void main() {
	move();
}