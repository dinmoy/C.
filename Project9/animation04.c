#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <Windows.h>

void intro_game(void) {

}
void keyboard_practice(void) {

}
void display_keyboard(void) {

}
void practice_result(char output[], char input[], char check[], int total) {

}
void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}