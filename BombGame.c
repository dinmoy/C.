#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
	int board[10][10] = { 0 };
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (rand() % 100 < 10) board[i][j] = 1;
		}
		printf("\n");
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			if (board[i][j])
				printf("@ ");
			else
				printf("    ");
			printf("\n");
		
	}
	system("pause");
}
