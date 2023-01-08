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
		printf("%2d번 문자: %c", i + 1, output[i]);
		input[i] = getch();
		if (output[i] == input[i])
		{
			total++;
			check[i] = 1;
		}
		else check[i] = 0;
	}
	gotoxy(4, 10);
	printf("자판연습이 끝났습니다 \n");
	gotoxy(4, 11);
	printf("결과를 보려면 아무키나 누르시오");
	getch();
	system("cls");
	practice_result(output, input, check, total);
}