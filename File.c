#include <stdio.h>
void main() {
	FILE* fp = NULL; //������ ����Ű�� ������
	fp = fopen("sam01.txt", "w"); //���� ���� sam01.txt�� ����
	if (fp == NULL) printf("���Ͽ��� ����\n");
	else printf("���Ͽ��� ����\n");
	fclose(fp); //fopen() �� �ݵ�� fclose
	system("pause");
}