#include <stdio.h>
void num(int* n1, int* n2) {
	scanf_s("%d %d",n1, n2);
}
void main() {

	int x, y;
	num(&x, &y);
	printf("������ ���� %d\n", x + y);
}