#include <stdio.h>
void main() {
	int number, sum, count;
	double average;
	FILE* in;
	char ch;
	//1.���Ͽ���
	in = fopen("Grade.txt", "r");
	sum = 0;
	count = 0;
	//2.������ ������ �б�
	while (fscanf(in, "%d", &number) != -1) {
		sum = sum + number;
		count = count + 1;
	}
	//3.�հ�� ���� ���ϱ�

	//4. ���� ���Ĵ�� ����ϱ� ���� �ݱ�
	printf("�������� ���� %d\n", count);
	printf("�������� �հ� %d\n", sum);
	average = (double)sum / count;
	printf("�������� ��� %5.2lf\n", average);
	fclose(in);
	system("pause");
}