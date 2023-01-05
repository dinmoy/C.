#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void move2() {
	char ch1[3] = "☆", ch2[3] = "★"; //3바이트 크기로 설정
	int i, check = 1;
	for (i = 2; i < 30; i++)
	{
		gotoxy(i * 2, i); //x값 보정
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
			printf("   "); //대상 지우기
	}
	printf("\n");
}
void main()
{
	move2();
	//system("cls"); //화면 지우기
	//gotoxy(x, y); //커서 위치 이동
	//printf("●"); //공
	//Sleep(100); //움직이는 속도 조절
}