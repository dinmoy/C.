#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

void gotoxy(int x, int y) {
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void draw_check02(int c, int r)
{
	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[12];
	for (i = 1; i < 12; i++)
		b[i] = 0xa0 + i;
	printf("%c%c ", a, b[3]); //���信 �����ֱ�
	for (i = 0; i < c - 1; i++) {
		printf("%c%c ", a, b[1]); //���߰�: ������ ���� �÷���
		printf("%c%c ", a, b[8]); //��
	}
	printf("%c%c ", a, b[1]); //��
	printf("%c%c ", a, b[4]); //��
	printf("\n"); //����

	for (i = 0; i < r - 1; i++)
	{
		printf("%c%c ", a, b[2]);
		for (j = 0; j < c; j++)
		{
			printf("  ");// ����
			printf("%c%c ", a, b[2]); // |: ��ĭ���� ���� �÷��ش�
		}
		printf("\n");
		printf("%c%c ", a, b[7]);
		for (j = 0; j < c - 1; j++)
		{
			printf("%c%c ", a, b[1]); // -
			printf("%c%c ", a, b[11]); // +
		}
		printf("%c%c ", a, b[1]); // 
		printf("%c%c ", a, b[9]); // ��
		printf("\n");
	}
	printf("%c%c ", a, b[2]);

	for (i = 0; i < c; i++)
	{
		printf("  ");
		printf("%c%c ", a, b[2]);
	}
	printf("\n"); //����
	printf("%c%c ", a, b[6]);
	for (i = 0; i < c - 1; i++)
	{
		printf("%c%c ", a, b[1]); //
		printf("%c%c ", a, b[10]); // ��
	}
	printf("%c%c ", a, b[1]); // ��
	printf("%c%c ", a, b[5]); //��
	printf("\n"); //����
	printf("�Է� �� Enter>");

}
void main() {
	int row, column, count = 0;
	printf("<�ٵ��� �׸���>\n\n");

	printf("������ ���̸� �Է��Ͻÿ�>");
	scanf("%d", &row);
	printf("������ ���̸� �Է��Ͻÿ�>");
	scanf("%d", &column);
	system("cls"); //ȭ�� �����
	
	for (int i = 0; i < 10; i++) {
		draw_check02(row, column);

		gotoxy(3, 2); //���� ���� ��ġ

		srand((unsigned)time(NULL));
		char Apabet = rand() % 26 + 65;

		gotoxy((rand() % row + 2) * 2, rand() % column + 2);
		printf("%c", Apabet);

		gotoxy(1, row * 2 + 1); //���� Ŀ���� ��ġ
		printf("��");

		char result = getch();
		gotoxy(1, row * 2 + 4);
		printf("%c", result);


		gotoxy(1, row * 2 + 6);
		if (result == Apabet) printf("�����Դϴ�\n");
		else printf("Ʋ�Ƚ��ϴ�\n");

		system("pause");
		system("cls");
	
	}
	system("pause");
}