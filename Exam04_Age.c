//04. switch ~case문을 이용한 연령대 맞추기
#include <stdio.h>
int main()
{
	int age;
	printf("나이 입력: ");
	scanf_s("%d", &age);

	age = age / 10;

	if (age<0 || age>200) {
		printf("나이를 다시 입력해 주세요 \n");

	}
	else {

		switch (age) {
		case 0:
		case 1:
			printf("당신은 10대이하 입니다\n"); break;
		case 2:
			printf("당신은 20대 입니다\n"); break;
		case 3:
			printf("당신은 30대 입니다\n"); break;
		case 4:
			printf("당신은 40대 입니다\n"); break;
		default:
			printf("당신은 50대 이상입니다\n"); break;

		}

	}

	return 0;
}
//defaul
// break
//정수: switch ~case괄호에는 정수가 들어가야한다.(문자열,실수X)