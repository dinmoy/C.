#include <stdio.h>
void save(int amount)
{

	//���� ����
	static int sum = 0;

	if (amount >= 0) printf("%d\t\t", amount);
	else printf("\t%d\t", -amount);

	sum += amount;
	printf("%d\n", sum);

}
int main(void)
{
	printf("==============================\n");
	printf("�Ա�\t���\t�ܰ�\n");
	printf("==============================\n");
	//�μ�(Argument)
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("===============================\n");
	return 0;
}