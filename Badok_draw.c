#include <stdio.h>
void draw_check01(int c, int r)
{
	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[12];
	for (i = 1; i < 12; i++)
		b[i] = 0xa0 + i;
	printf("%c%c", a, b[3]);//왼쪽상단
	printf("%c%c", a, b[1]);//
	for (i = 0; i < c - 1; i++) {
		printf("%c%c", a, b[8]);//우
		printf("%c%c", a, b[1]);//
	}
	printf("%c%c", a, b[4]);//오른쪽상단
	printf("\n");
	for (i = 0; i < r - 1; i++)
	{
		printf("%c%c", a, b[7]);//ㅏ
		printf("%c%c", a, b[1]);//ㅡ
		for (j = 0; j < c - 1; j++) {
			printf("%c%c", a, b[11]);//+
			printf("%c%c", a, b[1]);//
		}
		printf("%c%c", a, b[9]);//ㅓ
		printf("\n");
	}
	printf("%c%c", a, b[6]);//왼쪽하단
	printf("%c%c", a, b[1]);
	for (i = 0; i < c - 1; i++) {
		printf("%c%c", a, b[10]);//ㅗ
		printf("%c%c", a, b[1]);
	}
	printf("%c%c", a, b[5]);
	printf("\n");
}
