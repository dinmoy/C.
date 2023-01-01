#include <stdio.h>
void print(int* money, int* bonus,int size) {

	printf("월급:");
	for (int i = 0; i < size; i++) printf("%d ", money[i]);
	printf("\n보너스:");
	for (int i = 0; i < size; i++) printf("%d ", bonus[i]);
}
void get_money(int* money, int* bonus,int size) {

	int result[10];

	printf("월급+보너스:");
	for (int i = 0; i < size; i++) {
		result[i] = money[i] + bonus[i];
		printf("%d ", money[i] + bonus[i]);
	}
}
void main() {


	int month[10] = { 100,150,200,250,300,250,300,350,400,450};
	int bonus[10] = {50,50,50,50,50,50,50,50,50,50};
	int result[10];

	print(&month, &bonus,10);
	printf("\n");
	get_money(&month, &bonus,10);
}