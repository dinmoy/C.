#include <stdio.h>
#include <stdlib.h>
stuct vector{
	float x,y;
};
struct vector get_vector_sum(struct vector a, struct vector b);
void main() {
	struct vector a = { 2,3,1,1 };
	struct vector b = { 4.0.3.2 };
	struct vector sum;

	sum = get_vector_sum(a, b);
	printf("백터의 합은 (%4.1f,%4.1f)입니다\n", sum.x, sum.y);
	system("pause");
}

struct vector get_vector_sum(struct vector a, struct vector b) {
	struct vector result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;
	return result;
}