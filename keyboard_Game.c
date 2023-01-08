#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

void keyboard_intro_game(void);
void keyboard_practice(void);
void display_keyboard(void);
void practice_result(char output[],char input[],char check[],int total);
void gotoxy(int x, int y);

int keyboard_Game(void)
{
	keyboard_intro_game();
	keyboard_practice();
	system("pause");
}