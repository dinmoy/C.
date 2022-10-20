#include <stdio.h>
void save(int amount)
{

	//정적 변수
	static int sum = 0;

	if (amount >= 0) printf("%d\t\t", amount);
	else printf("\t%d\t", -amount);

	sum += amount;
	printf("%d\n", sum);

}
int main(void)
{
	printf("==============================\n");
	printf("입금\t출금\t잔고\n");
	printf("==============================\n");
	//인수(Argument)
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("===============================\n");
	return 0;
}