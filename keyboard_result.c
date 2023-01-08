#include <stdio.h>
void practice_result(char output[], char input[], char check[], int total)
{
	int i;
	printf("     출력문자\t입력문자\tOX\n");
	printf("-----------------------------------\n");
	for (i = 0; i < total; i++) {
		printf("%2d.\t", i + 1);
		printf("%c\t", output[i]);
		printf("%c\t\t", input[i]);
		if (check[i] == 0) printf("X\n");
		else  printf("O\n");
	}

}