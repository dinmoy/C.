#include <stdio.h>
void main() {
	int number, sum, count;
	double average;
	FILE* in;
	char ch;
	//1.파일열기
	in = fopen("Grade.txt", "r");
	sum = 0;
	count = 0;
	//2.파일의 끝까지 읽기
	while (fscanf(in, "%d", &number) != -1) {
		sum = sum + number;
		count = count + 1;
	}
	//3.합계와 개수 구하기

	//4. 왼쪽 형식대로 출력하기 파일 닫기
	printf("정수들의 개수 %d\n", count);
	printf("정수들의 합계 %d\n", sum);
	average = (double)sum / count;
	printf("정수들의 평균 %5.2lf\n", average);
	fclose(in);
	system("pause");
}