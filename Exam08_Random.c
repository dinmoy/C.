// ���� �߻� �Ѱ� ����
#include <stdio.h>
#include <stdlib.h>     //rand() �Լ��� ����ϱ� ���� ����� �߰�
#include <time.h>       //time() �Լ��� ����ϱ� ���� �ش��� �߰�
int main(void)                              
{

	//�ּ�1 : ������ ������ ���� ���� ������ �߻�
	/*printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());*/

	//�ּ�2 : srand(���尪)�� �̿��Ͽ� ���� �߻�
	//srand(23);  //���尪�� ������, ���� ������ �߻��Ѵٴ� ������
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	//printf("%d\n", rand());

	//�ð��� ������ �����Ƿ� usigned�� ��
	//�ּ�3: printf("%d",(unsigned int) time(NULL)); �ð��� �̿��Ͽ� ������ �߻�
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	
	/*srand((unsigned int)time(NULL));
	printf("%d\n", rand()%3+1);*/

	//1���� 100������ ������ ������ 100�� ����

	/*srand((unsigned int)time(NULL));
	for (int i = 1; i < 101; i++) printf("%d\n", rand()%100+1);*/

	srand((unsigned int)time(NULL));
	for (int i = 1; i < 7; i++) printf("%d \n", rand() % 45 + 1);

	return 0;

}
