#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void move2() {
	char ch1[3] = "��", ch2[3] = "��"; //3����Ʈ ũ��� ����
	int i, check = 1;
	for (i = 2; i < 30; i++)
	{
		gotoxy(i * 2, i); //x�� ����
			if (check == 1) {
				printf("%s", ch1);
				check = 0;
			}
			else {
				printf("%s", ch2);
				check = 1;
			}
			Sleep(200);
			gotoxy(i * 2, i);
			printf("   "); //��� �����
	}
	printf("\n");
}
void main()
{
	move2();
	//system("cls"); //ȭ�� �����
	//gotoxy(x, y); //Ŀ�� ��ġ �̵�
	//printf("��"); //��
	//Sleep(100); //�����̴� �ӵ� ����
}