#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct item
{
	char itemName[30];
	int qty;
	float price;
	float amount;
} MYITEM;

void main() {

	MYITEM itm[100];
	MYITEM* pitem;
	float tot = 0;

	for (int i = 0; i < 3; i++) {
		pitem = &itm[i];
		printf("=======================\n");
		printf("��ǰ�� �̸�: ");
		gets_s(pitem ->itemName, 30);
		printf("��ǰ�� ����: ");
		scanf_s("%f", &pitem->price);
		printf("��ǰ�� ����: ");
		scanf_s("%d", &pitem->qty);
		getchar();
	
		//���հ�
		pitem->amount = (float)pitem->qty * pitem->price;
		tot += pitem->amount;
		printf("=======================\n\n");
		}
	for (int i = 0; i < 3; i++) {
		pitem = &itm[i];
		printf("��ǰ�� �̸�: %10s ��ǰ�� ����: %10f ��ǰ�� ����: %7d\n", pitem->itemName, pitem->price, pitem->qty);
		}
		
		
		printf("�հ� : %4.0f\n", tot);
	
}