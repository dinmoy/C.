//01. �簢���� ���ο� ���θ� �Է¹޾� ���̸� ���ϴ� ���α׷�
//�⺻ ����
#include <stdio.h>
//����
 int main( )
{
	//���� ����
	 int width,height;

	 printf("���� ���� �Է�: ");
	 scanf_s("%d", &width);

	 printf("���� ���� �Է�: ");
	 scanf_s("%d", &height);

	 //width �� width�� &width�� width�� �ּҰ�
	 printf("���� %d,���� %d, ���� %d \n",width, height, width + height);
	
	 
	 
	 return 0;
}
 // &�� �ּ�
 //����: �׻� �Ȱ���.�ڵ带 �����ϰ� �ٽ� ������,�����ؾ� �ٲ�� �� 
 // ����:�ڵ忡 �� �ȴ�� ���� ��Ű���� ���� �����ϴ��Ŀ� ���� �ٲ�� ��
 //scanf ����ڷκ��� �Է¹޾� �ּҷ� ã�ư�