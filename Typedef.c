#include <stdio.h>
#include <stdlib.h>

typedef struct point {
	int x;
	int y;
} POINT;
//typedef struct point POINT �����ڷ���  ���ο� �ڷ���
void main() {
	POINT p = { 1,2 };
	system("pause");
}