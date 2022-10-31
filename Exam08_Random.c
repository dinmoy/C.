// 난수 발생 총괄 정리
#include <stdio.h>
#include <stdlib.h>     //rand() 함수를 사용하기 위해 헤더를 추가
#include <time.h>       //time() 함수를 사용하기 위해 해더를 추가
int main(void)                              
{

	//주석1 : 실행할 때마다 같은 값이 난수로 발생
	/*printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());*/

	//주석2 : srand(씨드값)을 이용하여 난수 발생
	//srand(23);  //씨드값이 같으면, 같은 난수가 발생한다는 문제점
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	//printf("%d\n", rand());

	//시간은 음수가 없으므로 usigned를 씀
	//주석3: printf("%d",(unsigned int) time(NULL)); 시간을 이용하여 난수를 발생
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	
	/*srand((unsigned int)time(NULL));
	printf("%d\n", rand()%3+1);*/

	//1에서 100사이의 임의의 정수를 100개 생성

	/*srand((unsigned int)time(NULL));
	for (int i = 1; i < 101; i++) printf("%d\n", rand()%100+1);*/

	srand((unsigned int)time(NULL));
	for (int i = 1; i < 7; i++) printf("%d \n", rand() % 45 + 1);

	return 0;

}
