#include <stdio.h>
void keyboard_practice(void)
{
	int i, total = 0;
	char output[15], check[15], input[15];
	srand(time(NULL));
	system("cls");
	display_keyboard();
	for (i = 0; i < 15; i++)
	{
		output[i] = rand() % 26 + 97;
		gotoxy(4, 9);
		printf("%2d�� ����: %c", i + 1, output[i]);
		input[i] = getch();
		if (output[i] == input[i])
		{
			total++;
			check[i] = 1;
		}
		else check[i] = 0;
	}
	gotoxy(4, 10);
	printf("���ǿ����� �������ϴ� \n");
	gotoxy(4, 11);
	printf("����� ������ �ƹ�Ű�� �����ÿ�");
	getch();
	system("cls");
	practice_result(output, input, check, total);
}