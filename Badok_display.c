#include <stdio.h>
void display_stone(int matrix[][20][20])
{
	int i, x, y;
	char* stone[2] = { "¡Û","¡Ü" };

	for (i = 0; i < 2; i++)
		for (x = 1; x < 20; x++)
			for (y = 1; y < 20; y++)
			{
				if (matrix[i][x][y] == 1)
				{
					gotoxy(x * 2 - 1, y);

					printf("%s", stone[i]);
				}
			}
}