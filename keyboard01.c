#include <stdio.h>
#include <time.h>
#include<windows.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	time_t now;
	struct tm* d;
	while (!_kbhit())
	{
		now = time(NULL);
		d = localtime(&now);
		printf("현재 날짜와 시간: %s\n", asctime(d));
		Sleep(500);
	}
	system("pause");
}