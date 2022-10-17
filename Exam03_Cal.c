/*산수 퀴즈01 : 철수와 영희는 사과를 가지고 있다.철수가 영희에게 
사과를 한 개 주면 둘이 가지고 있는 사과의 개수는 같아지고 영희가
철수에게 사과를 한개 주면 철수는 영희의 사과 개수의 2배가 된다. 철수와 영희는 몇 개의 사과를 가지고 있는가?*/

#include <stdio.h>
void main()
{
	int ch,young;

	for (ch = 1; ch < 101; ch++) {
		for (young = 1; young < 101; young++) {
			if (((ch - 1) == (young + 1))&& ((ch + 1) == (young - 1) * 2)) 
					printf("철수 = %d ,영희 = %d \n",ch, young);
			
		}//for영희
		

	}//for 철수

}