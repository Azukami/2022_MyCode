#include <stdio.h>

int main()
{
	int price,pluce = 0;

	printf("请输入价格（元）：");
	scanf("%d", &price);

	printf("请输入付款额（元）：");
	scanf("%d", &pluce);

	int charge = pluce - price;

	printf("找您%d元。\n", charge);

	return 0;
}
