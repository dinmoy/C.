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
	//배열에 배열은 넣을 수 없으므로 a.player = "홍길동" 대신 strucpy
	strucpy(a.player.name, "홍길동");
	printf("%d % s\n", a.player.num, a.player.name);
	a.event = (char*)malloc(20);
	strcpy(a.event, "축구");
	printf("%s\n", a.event);

	a.player.skill = (char*)malloc(20);
	scanf_s("%s", a.player.skill);
	printf("특기:%s\n", a.player.skill);
	system("pause");
}