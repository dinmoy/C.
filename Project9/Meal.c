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
	printf("아무거나 누르면 메인 메뉴로 : ");
	_getch(); //문자 한 개 입력받기
}
int menu_display(void)
{
	int select;
	system("cls");
	printf("간식 만들기\n\n");
	printf("1. 햄버거\n");
	printf("2. 스파게티\n");
	printf("3. 프로그램 종료\n");
	printf("메뉴번호 입력>");
	select = _getch() - 48; //숫자 1~49,글자 안보임,scanf와 달리 엔터를 안쳐도 됨
	return select;
}
void hambuger(void) {
	system("cls");
	printf("햄버거 만드는 방법\n");
	printf("어쩌구 저쩌구\n");
	press_any_key();
}
void spaghetti(void)
{
	system("cls");
	printf("스파게티 만드는 방법\n");
	printf("어쩌구 저쩌구\n");
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
	printf("햄버거 만들기\n\n");
	printf("1. 치킨버거\n");
	printf("2. 치즈버거\n");
	printf("메인 메뉴로 이동\n\n");
	printf("메뉴번호 입력>");
	select = _getch() - 48;
	return select;
}
int sub_menu_display02(void)
{
	int select;
	system("cls");
	printf("스파게티 만들기\n\n");
	printf("1. 토마토 스파게티\n");
	printf("2. 크림 스파게티\n");
	printf("메인 메뉴로 이동\n\n");
	printf("메뉴번호 입력>");
	select = _getch() - 48;
	return select;
}
void chicken_burger(void)
{
	system("cls");
	printf("치킨버거 만드는 방법\n");
	printf("중략\n");
	press_any_key();
}
void chese_burger(void)
{
	system("cls");
	printf("치즈버거 만드는 방법\n");
	printf("중략\n");
	press_any_key();
}
void tomato_pasta(void)
{
	system("cls");
	printf("토마토 스파게티 만드는 방법\n");
	printf("토메토\n");
	press_any_key();
}
void cream_pasta(void)
{
	system("cls");
	printf("크림 파스타 만드는 방법\n");
	printf("중략\n");
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