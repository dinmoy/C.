#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include<stdlib.h>

int menu_display(void);
int sub_menu_display01(void);
void sub_main01(void);
void chicken_burger(void);
void chese_burger(void);
void press_any_key(void);

void press_any_key(void)
{
	printf("\n\n");
	printf("�ƹ��ų� ������ ���� �޴��� : ");
	_getch(); //���� �� �� �Է¹ޱ�
}
int menu_display(void)
{
	int select;
	system("cls");
	printf("���� �����\n\n");
	printf("1. �ܹ���\n");
	printf("2. ���İ�Ƽ\n");
	printf("3. ���α׷� ����\n");
	printf("�޴���ȣ �Է�>");
	select = _getch() - 48; //���� 1~49,���� �Ⱥ���,scanf�� �޸� ���͸� ���ĵ� ��
	return select;
}
void hambuger(void) {
	system("cls");
	printf("�ܹ��� ����� ���\n");
	printf("��¼�� ��¼��\n");
	press_any_key();
}
void spaghetti(void)
{
	system("cls");
	printf("���İ�Ƽ ����� ���\n");
	printf("��¼�� ��¼��\n");
	press_any_key();
}
void sub_main01(void)
{
	int c;
	while ((c = sub_menu_display01()) != 3)
	{
		switch (c)
		{
		case 1: chicken_burger();
			break;
		case 2: chese_burger();
			break;
		default:
			break;
		}
	}
}
int sub_menu_display01(void)
{
	int select;
	system("cls");
	printf("�ܹ��� �����\n\n");
	printf("1. ġŲ����\n");
	printf("2. ġ�����\n");
	printf("���� �޴��� �̵�\n\n");
	printf("�޴���ȣ �Է�>");
	select = _getch() - 48;
	return select;
}
int sub_menu_display02(void)
{
	int select;
	system("cls");
	printf("���İ�Ƽ �����\n\n");
	printf("1. �丶�� ���İ�Ƽ\n");
	printf("2. ũ�� ���İ�Ƽ\n");
	printf("���� �޴��� �̵�\n\n");
	printf("�޴���ȣ �Է�>");
	select = _getch() - 48;
	return select;
}
void chicken_burger(void)
{
	system("cls");
	printf("ġŲ���� ����� ���\n");
	printf("�߷�\n");
	press_any_key();
}
void chese_burger(void)
{
	system("cls");
	printf("ġ����� ����� ���\n");
	printf("�߷�\n");
	press_any_key();
}
void tomato_pasta(void)
{
	system("cls");
	printf("�丶�� ���İ�Ƽ ����� ���\n");
	printf("�����\n");
	press_any_key();
}
void cream_pasta(void)
{
	system("cls");
	printf("ũ�� �Ľ�Ÿ ����� ���\n");
	printf("�߷�\n");
	press_any_key();
}
void main()
{
	int c;
	while ((c = menu_display()) != 3)
	{
		switch (c)
		{
		case 1: sub_menu_display01();
			if (c == 1) chicken_burger();
			else if (c == 2) chese_burger();
			break;
		case 2: sub_menu_display02();
			if (c == 1) tomato_pasta();
			else if (c == 2) cream_pasta();
			break;
		default: 
			break;
		}
	}
	system("pause");
}