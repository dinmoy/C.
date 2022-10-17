//1~100사이의 숫자 중 3의 배수이면서 5의 배수의 갯수와 합을 출력

#include <stdio.h>
int main(void)
{
	int count = 0,sum = 0;
	for ( int i = 1; i < 101; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			count++;
			sum += i;
		}
	}
	printf("1~100사이의 숫자 중 3의 배수이면서 5의 배수인 수의 갯수 : %d\n", count);
	printf("1~100사이의 숫자 중 3의 배수이면서 5의 배수인 수의 합 : %d\n", sum);

}