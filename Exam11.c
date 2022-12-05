//숫자 야구 게임
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {

	srand((unsigned int)time(NULL));
	int c1 = 0, c2 = 0, c3 = 0;
	int h1 = 0, h2 = 0, h3 = 0;
	int count = 0;
	int s = 0, b = 0;

	c1 = rand() % 9 + 1;
	do {
		c2 = rand() % 9 + 1;
	} while (c1 == c2);
	do {
		c3 = rand() % 9 + 1;
	} while (c3 == c1 || c3 == c2);

	for (count = 0; s != 3; count++) {
		s = 0, b = 0;
		printf("숫자 3개를 입력하세요: ");
		scanf_s("%d", &h1);
		scanf_s("%d", &h2);
		scanf_s("%d", &h3);

		if (h1 == c1) s++;
		else if (h1 == c2 || h1 == c3) b++;

		if (h2 == c2)s++;
		else if (h2 == c1 || h2 == c3) b++;

		if (h3 == c3) s++;
		else if (h3 == c1 || h3 == c2) b++;

		printf("%d s %d b \n\n", s, b);

	}
	printf("축하합니다 %d회 만에 정답을 맞추셨습니당", count);
}