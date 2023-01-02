#include <stdio.h>
#include <stdlib.h>

typedef struct point {
	int x;
	int y;
} POINT;
//typedef struct point POINT 기존자료형  새로운 자료형
void main() {
	POINT p = { 1,2 };
	system("pause");
}