#include <stdio.h>
void draw_basic_square(void) {
	unsigned char a = 0xa6;
	unsigned char b[7];
	for (int i = 1; i < 7; i++)
		b[i] = 0xa0 + i;
	printf("%c%c", a, b[3]); //¦£
	printf("%c%c", a, b[4]); //¦¤
	printf("\n");
	printf("%c%c", a, b[6]); //¦¦
	printf("%c%c", a, b[5]); // ¦¥
	printf("\n");
}
void main() {
	draw_basic_square();
	system("pause");
}