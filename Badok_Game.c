#include <stdio.h>
#include <Windows.h>

void move_arrow_key(char chr, int* x, int* y, int x_b, int y_b);
void gotoxy(int x, int y);
void draw_check01(int c, int r);
void Badok_game_control(void);
void display_stone(int matrix[][20]);

void Badok_Game()
{
	Badok_game_control();
	return 0;
}