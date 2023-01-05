#include <stdio.h>
void draw_basic_square(int width, int height)
{
	unsigned char a = 0xa6;
	unsigned char b[12]; //바둑판
	for (int i = 1; i < 12; i++)
		b[i] = 0xa0 + i;
	printf("%c%c", a, b[3]);

	for (int i = 0; i < width - 1; i++) {
		printf("%c%c", a, b[1]);
		printf("%c%c", a, b[8]);
	}
	printf("%c%c", a, b[1]);
	printf("%c%c", a, b[4]);
	printf("\n");

	for (int i = 0; i < height - 1; i++) {
		printf("%c%c", a, b[7]);
		for (int i = 0; i < width - 1; i++) {
			printf("%c%c", a, b[1]);
			printf("%c%c", a, b[11]);
		}
		printf("%c%c", a, b[1]);
		printf("%c%c", a, b[9]);

		printf("\n");
	}
	printf("%c%c", a, b[6]);

	for (int i = 0; i < width - 1; i++) {
		printf("%c%c", a, b[1]);
		printf("%c%c", a, b[10]);
		
	}
	printf("%c%c", a, b[1]);
	printf("%c%c", a, b[5]);
	printf("\n");
}
void main() {
	int w,h;
	printf("바둑판 그리기\n\n");
	printf("가로 세로의 길이를 space로\n");
	printf("분리하여 입력하고 Enter>");
	scanf("%d %d", &w,&h);
	draw_basic_square(w,h);
	system("pause");
}