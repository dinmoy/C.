#include <stdio.h>
void main() {
	/*int x=100;
	int y=200;

	int* p;

	p = &x;
	
	printf("p�� ��=%p\n", p);
	printf("*p�� ��=%d\n", *p);

	p = &y;
	printf("p�� ��=%p\n");
	printf("*p�� ��=%d\n", *p);*/

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

	printf("������ pc=%p, pi=%p, pd=%p\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;
	printf("������ pc=%p, pi=%p, pd=%p\n", pc, pi, pd);*/

	//char ch;
	//int in;
	//double db;

	//char* pc = &ch;
	//int* pi = &in;
	//double* pd = &db;

	//printf("%d\tchar�� ������ �ּ� ũ��: %d\n", sizeof(ch), sizeof(&ch));
	//printf("%d\tint�� ������ �ּ� ũ��: %d\n", sizeof(in), sizeof(&in));
	//printf("%d\tdouble�� ������ �ּ� ũ��: %d\n", sizeof(db), sizeof(&db));

	//printf("char * �������� ũ��:%d\n", sizeof(pc));
	//printf("int * �������� ũ��:%d\n", sizeof(pi));
	//printf("double * �������� ũ��:%d\n", sizeof(pd));

	//printf("char * �����Ͱ� ����Ű�� ������ ũ��:%d\n", sizeof(*pc));
	//printf("int * �����Ͱ� ����Ű�� ������ ũ��:%d\n", sizeof(*pi));
	//printf("double * �����Ͱ� ����Ű�� ������ ũ��:%d\n", sizeof(*pd));

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