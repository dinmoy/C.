#include <stdio.h>
#include <stdlib.h>
struct profile {
	int num;
	char name[20];
	char* skill;
};
struct sports {
	struct profile player;
	char* event;
};
void main() {
	struct sports a;

	a.player.num = 1;
	//�迭�� �迭�� ���� �� �����Ƿ� a.player = "ȫ�浿" ��� strucpy
	strucpy(a.player.name, "ȫ�浿");
	printf("%d % s\n", a.player.num, a.player.name);
	a.event = (char*)malloc(20);
	strcpy(a.event, "�౸");
	printf("%s\n", a.event);

	a.player.skill = (char*)malloc(20);
	scanf_s("%s", a.player.skill);
	printf("Ư��:%s\n", a.player.skill);
	system("pause");
}