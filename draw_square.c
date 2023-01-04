#include <stdio.h>
void draw_basic_square(int size) {
	unsigned char a = 0xa6;
	unsigned char b[7];
	int i, j;

	for (i = 1; i < 7; i++)
		b[i] = 0xa0 + i;
	printf("%c%c", a, b[3]); //┌

	for(i=0;i<size;i++)
		printf("%c%c", a, b[1]); // ㅡ
	printf("%c%c", a, b[4]); //┐
	printf("\n");
	
	for (i = 0; i < size; i++) {
		printf("%c%c", a, b[2]); //└
		for (j = 0; j < size; j++)
			printf(" ");
		printf("%c%c", a, b[2]); //└
		printf("\n");
	}
	printf("%c%c", a, b[6]); //└
	for(i=0;i<size;i++)
		printf("%c%c", a, b[1]); // ㅡ
	printf("%c%c", a, b[5]); // ┘
	printf("\n");
}
void main() {
	int n;
	printf("사각형 그리기\n\n");
	printf("사각형의 세로길이 입력\n");
	printf("입력하고 Enter>");
	scanf("%d", &n);
	draw_basic_square(n);
	system("pause");
}