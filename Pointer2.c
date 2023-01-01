#include <stdio.h>
//void swap(int* pa, int* pb)
//{
//	int temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
void print_arr(int* pa,int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += pa[i];
	}
	printf("%d\t", sum);
}
void main(void) {
	/*int arr[3];
	int i;
	*(arr + 0) = 10;
	*(arr + 1) = 20;
	*(arr + 2) = 30;
	for (i = 0; i < 3; i++)
	{
		printf("arr[%d]=%d\n", i, arr[i]);
		printf("arr[%d]=%d\n", i, *(arr+i));
		printf("arr[%d]=%d\n", i, *&(arr[i]));

	}*/

	/*int arr[5] = { 10,20,30,40,50 };
	int* ptr;
	ptr = arr;
	for (int i = 0; i < 5; i++) printf("%d\t", arr[i]);
	printf("\n");
	for (int i = 0; i < 5; i++) printf("%d\t", ptr[i]);
	printf("\n");
	for (int i = 0; i < 5; i++) printf("%d\t",*(arr+i));
	printf("\n");
	for (int i = 0; i < 5; i++) printf("%d\t", *&(arr[i]));
	printf("\n");
	for (int i = 0; i < 5; i++) printf("%d\t", *&(ptr[i]));*/

	int arr[5] = { 10,20,30,40,50 };
	int arr2[7] = { 1,2,3,4,5,6,7 };
	print_arr(arr, sizeof(arr) / sizeof(arr[0]));
	printf("\n");
	print_arr(arr2, sizeof(arr2) / sizeof(arr2[0]));
	system("pause");
}