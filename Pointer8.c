#include <stdio.h>
#include <string.h>
void main() {
	/*char a[5][10] = { "dog","cat","tiger","lion","red" };
	char* pa[5] = { a[0],a[1],a[2],a[3],a[4]};
	int size = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < size; i++) printf("%s\t", pa[i]);*/

	/*char* animal[] = { "dog","cat","tiger","lion","red_drangonfily" };
	int size = sizeof(animal) / sizeof(animal[0]);
	printf("%d\n", size);
	for (int i = 0; i < size; i++) printf("%s\t", &(animal[i]));*/

	/*char* fruit[] = { "cherry","strawberry","apple","pear","watermelon" };
	int size = sizeof(fruit) / sizeof(fruit[0]);
	printf("%d\n", size);
	for (int i = 0; i < size; i++) {
		printf("%x.\t%s\n", fruit[i], fruit[i]);
	}*/

	char name[5][10];
	char* address[5];

	strcpy(name[0], "홍길동");
	strcpy(name[1], "이길동");
	strcpy(name[2], "김길동");
	strcpy(name[3], "조길동");
	strcpy(name[4], "정길동");
	
	address[0] = "서울시 관악구 신림동";
	address[1] = "서울시";
	address[2] = "경기도 용인시 수지구";
	address[3] = "경기도 성남시";
	address[4] = "서울시 은평구 불광동 190 번지";


	for (int i = 0; i < 5; i++) {
		printf("%s ", name[i]);
		printf("%s\n", address[i]);
	}
	
	system("pause");

}