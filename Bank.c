#include <stdio.h>
void inout(int cash)
{
	static int balance = 0;
	if (cash >= 0) printf("%d\t\t", cash);
	else printf("\t%d\t", -cash);

	balance += cash;
	printf("%d\n", balance);
}
void main()
{
	int cnt, cash = 0;
	for (cnt = 1; cnt < 3; cnt++)
	{
		printf("\n<%d회 실행>\n", cnt);
		printf("현금: ");
		scanf_s("%d", &cash);
		printf("입금\t출금\t잔액\n");
		inout(cash);
	}
	printf("\n 총 %d회 실행 후 프로그램 종료\n", cnt - 1);
	system("pause");
}