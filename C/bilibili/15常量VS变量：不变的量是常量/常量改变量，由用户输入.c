#include <stdio.h>

int main()
{
	int amount = 0;
	int price = 0;
	
	printf("请输入金额:（元）", amount);
	scanf("%d", &amount);

	printf("请输入售价:（元）", price);
	scanf("%d", &price);
	
	int zhaoling = amount - price;
	printf("找您%d元", zhaoling);
	
	return 0;
}
