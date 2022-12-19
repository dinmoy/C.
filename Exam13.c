#include <stdio.h>
int main(void) {
	int i,count=0;

	for (i = 1000; i < 10000; i++) {

		int result1 = i / 100 % 10;
		int result2 = i / 10 % 10;

		if ((result1==result2)&& (i % 9 == 0)) {
				count++;

				printf("%d ", i);

				if (count % 10 == 0) 
					printf("\n");	
		}
	}
	printf("정답은 총 %d개 입니다", count);

	return 0;
}
