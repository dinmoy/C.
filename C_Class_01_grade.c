#include <stdio.h>
#define STUDENTS 5

int main(void)
{
	int score[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++)
	{
		printf("�л����� ������ �Է��Ͻÿ� : ");
		scanf_s("%d", &score[i]);
		sum += score[i];
	}
	average = sum / STUDENTS;
	printf("�������=%d\n", average);

	return 0;
}