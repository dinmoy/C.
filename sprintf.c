#include <stdio.h>
void main() {
	char buf[40];
	int y = 25;
	double x = 3.14;
	sprintf(buf, "asprintf: v=%3d, x=%5.2f\n", y, x);
	printf("printf: v=%3d, x=%5.2f\n", y, x );
	puts(buf);

	system("pause");
}