#include <stdio.h>

int main()
{
	int price,amount = 0;
	printf("��������ֵ��Ԫ����\n");
	scanf("%d", &amount);
	
	printf("�������Ԫ����\n");
	scanf("%d", &price);
	
	int change = amount - price;
	printf("����%dԪ��\n", change);
	
	return 0;
}
