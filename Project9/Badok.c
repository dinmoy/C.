#include <stdio.h>
void draw_basic_square(int width, int height)
{
	unsigned char a = 0xa6;
	unsigned char b[12]; //�ٵ���
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
	printf("�ٵ��� �׸���\n\n");
	printf("���� ������ ���̸� space��\n");
	printf("�и��Ͽ� �Է��ϰ� Enter>");
	scanf("%d %d", &w,&h);
	draw_basic_square(w,h);
	system("pause");
}