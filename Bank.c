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
		printf("\n<%dȸ ����>\n", cnt);
		printf("����: ");
		scanf_s("%d", &cash);
		printf("�Ա�\t���\t�ܾ�\n");
		inout(cash);
	}
	printf("\n �� %dȸ ���� �� ���α׷� ����\n", cnt - 1);
	system("pause");
}