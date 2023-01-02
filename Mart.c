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
		printf("상품의 이름: ");
		gets_s(pitem ->itemName, 30);
		printf("상품의 가격: ");
		scanf_s("%f", &pitem->price);
		printf("상품의 개수: ");
		scanf_s("%d", &pitem->qty);
		getchar();
	
		//총합계
		pitem->amount = (float)pitem->qty * pitem->price;
		tot += pitem->amount;
		printf("=======================\n\n");
		}
	for (int i = 0; i < 3; i++) {
		pitem = &itm[i];
		printf("상품의 이름: %10s 상품의 가격: %10f 상품의 개수: %7d\n", pitem->itemName, pitem->price, pitem->qty);
		}
		
		
		printf("합계 : %4.0f\n", tot);
	
}