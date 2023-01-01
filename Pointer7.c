#include <stdio.h>
#define DATA 5

void arr_print(char* name, int* a, int size)
{
	int i;
	printf("%s[]= ", name);
	for (i = 0; i < size; i++) printf("%d ", a[i]);
	printf("\n");

}
void merge(int* A, int* B, int* C, int size)
{
	int i,a, b, c;
	for (a = 0, b = 0, c = 0; a < size && b < size;) {
		if (A[a] <= B[b]) C[c++] = A[a++];
		else C[c++] = B[b++];
	}
	for (i = a; i < size; i++) C[c++] = A[i];
	for (i = b; i < size; i++) C[c++] = B[i];
	
	
}
void main() {

	int A[] = { 0,2,5,7,8 };
	int B[] = { 1,3,4,6,9 };
	int C[10]={0};
	merge(A, B, C, 5);

	arr_print("C",C, 10);
}