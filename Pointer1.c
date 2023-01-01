#include <stdio.h>
void main() {
	/*int x=100;
	int y=200;

	int* p;

	p = &x;
	
	printf("p의 값=%p\n", p);
	printf("*p의 값=%d\n", *p);

	p = &y;
	printf("p의 값=%p\n");
	printf("*p의 값=%d\n", *p);*/

	/*int i = 10;
	int* p;
	p = &i;
	printf("i=%d\n", i);

	*p = 20;
	printf("i=%d\n", i);*/

	/*char* pc;
	int* pi;
	double* pd;

	pc = (char*)10;
	pi = (int*)20;
	pd = (double*)30;

	printf("증가전 pc=%p, pi=%p, pd=%p\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;
	printf("증가후 pc=%p, pi=%p, pd=%p\n", pc, pi, pd);*/

	//char ch;
	//int in;
	//double db;

	//char* pc = &ch;
	//int* pi = &in;
	//double* pd = &db;

	//printf("%d\tchar형 변수의 주소 크기: %d\n", sizeof(ch), sizeof(&ch));
	//printf("%d\tint형 변수의 주소 크기: %d\n", sizeof(in), sizeof(&in));
	//printf("%d\tdouble형 변수의 주소 크기: %d\n", sizeof(db), sizeof(&db));

	//printf("char * 포인터의 크기:%d\n", sizeof(pc));
	//printf("int * 포인터의 크기:%d\n", sizeof(pi));
	//printf("double * 포인터의 크기:%d\n", sizeof(pd));

	//printf("char * 포인터가 가리키는 변수의 크기:%d\n", sizeof(*pc));
	//printf("int * 포인터가 가리키는 변수의 크기:%d\n", sizeof(*pi));
	//printf("double * 포인터가 가리키는 변수의 크기:%d\n", sizeof(*pd));

	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;
	printf("%d\n", num);
	(*ptr1)++;
	printf("%d\n", num);
	(*ptr2)++;
	printf("%d\n", num);

	system("pause");

}