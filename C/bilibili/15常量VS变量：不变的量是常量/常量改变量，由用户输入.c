#include <stdio.h>

int main()
{
	int amount = 0;
	int price = 0;
	
	printf("��������:��Ԫ��", amount);
	scanf("%d", &amount);

	printf("�������ۼ�:��Ԫ��", price);
	scanf("%d", &price);
	
	int zhaoling = amount - price;
	printf("����%dԪ", zhaoling);
	
	return 0;
}
