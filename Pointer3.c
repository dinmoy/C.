#include <stdio.h>
void print_arr(int* values, int n)
{
	printf("[");
	for (int i = 0; i < sizeof(values)/sizeof(values[0]); i++) printf("%d ", values[i]);
	printf("]\n");
}
double get_arr_avg(int* values, int n) {
	double sum = 0.0;
	for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) sum += values[i];
	printf("배열원소들의 합: %.4lf\n", sum);
	return sum /n;
}
void main() {
	int data[8] = { 10,20,30,40,50,9,8,67 };
	double result;
	print_arr(data, 8);
	result = get_arr_avg(data, 8);
	printf("배열원소들의 평균 = %.4lf\n", result);
	system("pause");
}