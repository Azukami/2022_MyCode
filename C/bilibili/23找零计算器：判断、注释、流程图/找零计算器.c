#include <stdio.h>

int main()
{
// ��ʼ��
	int payment = 0;
	int amount  = 0;
// �������Ʊ��
	printf("�����빺�����֧��Ʊ�棺\n");
	scanf("%d %d", &payment, &amount);
	printf("���Ϊ%d��Ʊ��Ϊ%d\n", payment, amount);
// ��������
	int zero = amount - payment;

	if (zero < 0) {
		printf("���㡣");
	}
	else {
		printf("����%dԪ", zero);
	}
	
	return 0;
}
