/* 산수퀴즈 02 : 100미만의 연속된 두자릿수의 짝수 3개를 곱하였더니  4****2가 되었다.
* 이 세 개의 수는 어떤 수인지, 그리고 결과는 얼마인지 구하는 
* 프로그램을 for문을 이용해서 작성 하시오.
*/
#include <stdio.h>

int main(void)
{
	int i;
	int result=0;
	for (i =10; i < 100; i+=2) {
		result = i * (i + 2) * (i + 4);
		if (result / 100000 == 4 && result%10==2) {
			printf("%d %d %d\n", i, (i + 2), (i + 4));
			printf("세 수의 곱은: %d \n", result);
		}
	}
	return 0;
}