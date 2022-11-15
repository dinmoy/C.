#include <stdio.h>
int main(void) {
	
	int i,j,temp=0;
	int arr[10]={0};

	printf("----------------------------\n");
	for (i = 0; i < 10; i++)  scanf_s("%d", &arr[i]);

	int min = arr[0];
	int max = arr[0];

	for (i = 1; i < 10; i++) if (arr[i] < min) min = arr[i];

	for (i = 1; i < 10; i++) {
		if (arr[i] > max) max = arr[i];
	}

	printf("----------------------------\n");
	printf("ÃÖ¼Ú°ª : %d\n", arr[0]);
	printf("ÃÖ´ñ°ª : %d\n", arr[10]);
}