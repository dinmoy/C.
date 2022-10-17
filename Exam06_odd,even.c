//while문을 이용해서 -1,3,-5,7,-9,11~~~ 99를 출력하고 총합을 출력하시오

#include <stdio.h>
int main(void) {

	int i = 1;
	int sum=0;
	while (i < 100) {
		if (i % 2 == 0) {
			sum += i;
			printf("\+ %d ", i);
			
		}
		else {
			sum -= i;
			printf("\- %d ", i);
		}
		//괄호안에 증감식을 써야함 꼭!!!!
		i++;
	}
	printf("= %d", sum);
}