#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(Void)
{
	int i;
	int score[SIZE];

	for (i = 0; i < SIZE; i++) {
		score[i] = rand()%100;
		printf("score[%d]=%d\n", i, score[i]);
	}
	return 0;
}