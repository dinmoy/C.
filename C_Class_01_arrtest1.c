#include <stdio.h>
int main(void)
{
	int score[5];
	score[0] = 10;
	score[1] = 20;
	score[2] = 30;
	score[3] = 40;
	score[4] = 50;

	for (int i = 0; i < 5; i++)		printf("score[%d]=%d\n", i, score[i]);

}