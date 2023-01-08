#include <stdio.h>
void Badok_game_control(void)
{
	int x = 1, y = 1, other = 0, matrix[2][20][20] = { 0 };
	char key;
	char* stone[2] = { "○","●" };

	do
	{
		gotoxy(1, 1);
		draw_check01(18, 18); // 바둑판크기
		gotoxy(x, y);
		printf("%s", stone[other]);
		display_stone(matrix);
		gotoxy(1, 20);
		printf("방향키로 움직이고 ");
		printf("스페이스 키를 누르시오.");
		gotoxy(1, 21);
		printf("돌을 놓았으면 상대방 차례입니다");
		key = getch();
		if (key == 27) // esc 키
			return 0;
		else if (key == 32) { // space 키
			matrix[other][(x + 1) / 2][y] = 1;
			other = 1 - other;
		}
		else if (key >= 72)// 방향키
			move_arrow_key(key, &x, &y, 37, 19);
		// x 최대 37, y 최대 19
	} while (1);
}