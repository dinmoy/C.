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

	strcpy(name[0], "ȫ�浿");
	strcpy(name[1], "�̱浿");
	strcpy(name[2], "��浿");
	strcpy(name[3], "���浿");
	strcpy(name[4], "���浿");
	
	address[0] = "����� ���Ǳ� �Ÿ���";
	address[1] = "�����";
	address[2] = "��⵵ ���ν� ������";
	address[3] = "��⵵ ������";
	address[4] = "����� ���� �ұ��� 190 ����";


	for (int i = 0; i < 5; i++) {
		printf("%s ", name[i]);
		printf("%s\n", address[i]);
	}
	
	system("pause");

}