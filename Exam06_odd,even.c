//while���� �̿��ؼ� -1,3,-5,7,-9,11~~~ 99�� ����ϰ� ������ ����Ͻÿ�

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
		//��ȣ�ȿ� �������� ����� ��!!!!
		i++;
	}
	printf("= %d", sum);
}