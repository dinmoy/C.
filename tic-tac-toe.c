#include <stdio.h>
void main() {
	char board[3][3];
	int x, y, k, i;

	for (x = 0; x < 3; x++) 
		for (y = 0; y < 3; y++)
			board[x][y]=' ';
	
	for (k = 0; k < 9; k++) {
		printf("(x,y) 좌표: ");
		scanf_s("%d %d", &x, &y);

		if (board[x][y] != ' ') {
			printf("중복입니당\n");
			k--;

		}
		else{
			for (i = 0; i < 3; i++) {
				if (k % 2 != 0) board[x][y] = 'o';
				else board[x][y] = 'x';

				printf("!---!---!---!\n");
				printf("|%c  |%c  |%c  |\n", board[i][0], board[i][1], board[i][2]);
			}
		}
	}
	system("pause");
}