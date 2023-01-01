#include <stdio.h>

void main() {
	char board[10][10];
	int xpos = 1, ypos = 1;

	//보드 초기화
	for (int y = 0; y < 10; y++)
		for (int x = 0; x < 10; x++) board[y][x] = '.';

	board[9][9] = 'G';
	board[5][5] = 'M';
	board[6][7] = 'M';

	

	while (1) {
		system("cls"); 
		printf("왼쪽 이동:a, 오른쪽 이동:d, 위쪽 이동:w, 아래쪽 이동:s\n");
		if (xpos == 9 && ypos == 9) break;
		

		for (int y = 0; y < 10; y++) {
			for (int x = 0; x < 10; x++) printf("%c", board[y][x]);
					`	printf("\n");
		}

		board[ypos][xpos] = '.';

		int ch = getch();
		if (ch == 'a') xpos--;
		else if (ch == 's') ypos++;
		else if (ch == 'd') xpos++;
		else if (ch == 'w') ypos--;

		
		if (board[ypos][xpos] == 'M') {
			xpos = 1;
			ypos = 1;
		}
		board[ypos][xpos] = '#';

	}



	system("pause");
}