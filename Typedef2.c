#include <stdio.h>
#include <stdlib.h>
typedef struct point {
	int x;
	int y;
} POINT;
POINT trans(POINT p, POINT delta);
void main() {
	POINT p = { 3,4 };
	POINT delta = { 10,10 };
	POINT result;
	result = trans(p, delta);

	printf("(%d %d)+(%d %d)->(%d %d)\n", p.x, p.y, delta.x, delta.y, result.x, result.y);
	system("pause");
}
POINT trans(POINT p, POINT delta) {
	POINT new_p;
	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;
	return new_p;
}