#include <stdio.h>
void Badok_game_control(void)
{
	int x = 1, y = 1, other = 0, matrix[2][20][20] = { 0 };
	char key;
	char* stone[2] = { "��","��" };

	do
	{
		gotoxy(1, 1);
		draw_check01(18, 18); // �ٵ���ũ��
		gotoxy(x, y);
		printf("%s", stone[other]);
		display_stone(matrix);
		gotoxy(1, 20);
		printf("����Ű�� �����̰� ");
		printf("�����̽� Ű�� �����ÿ�.");
		gotoxy(1, 21);
		printf("���� �������� ���� �����Դϴ�");
		key = getch();
		if (key == 27) // esc Ű
			return 0;
		else if (key == 32) { // space Ű
			matrix[other][(x + 1) / 2][y] = 1;
			other = 1 - other;
		}
		else if (key >= 72)// ����Ű
			move_arrow_key(key, &x, &y, 37, 19);
		// x �ִ� 37, y �ִ� 19
	} while (1);
}