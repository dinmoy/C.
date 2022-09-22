//01. 사각형의 가로와 세로를 입력받아 넓이를 구하는 프로그램
//기본 반찬
#include <stdio.h>
//세팅
 int main( )
{
	//변수 선언
	 int width,height;

	 printf("가로 길이 입력: ");
	 scanf_s("%d", &width);

	 printf("세로 길이 입력: ");
	 scanf_s("%d", &height);

	 //width 면 width값 &width면 width의 주소값
	 printf("가로 %d,세로 %d, 넓이 %d \n",width, height, width + height);
	
	 
	 
	 return 0;
}
 // &는 주소
 //정적: 항상 똑같다.코드를 수정하고 다시 컴파일,실행해야 바뀌는 것 
 // 동적:코드에 손 안대고 누가 시키느냐 언제 실행하느냐에 따라 바뀌는 것
 //scanf 사용자로부터 입력받아 주소로 찾아감