#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void move() {
	char ch1[3] = "��";
	int y, check = 24;
	do {
		for (y = 25 - check; y < 24; y += 3) //1~23
		{
			gotoxy(20, y);
			printf("%s", ch1);
			Sleep(100); //���� �ٴ����� �������� �ð� ����
			gotoxy(20, y); //y���� ��ȭ
			printf("   ");
		}
		check = (check - check / 2); //���� ���� ���
		for (y = 24; y > 24 - check; y -= 3) //24~0
		{
			gotoxy(20, y);
			printf("%s", ch1);
			Sleep(100); //���� �ٴڿ��� Ƣ�� ������ �ð�
			gotoxy(20, y);
			printf("   ");
		}
	} while (check != 1);
}
void main() {
	move();
}