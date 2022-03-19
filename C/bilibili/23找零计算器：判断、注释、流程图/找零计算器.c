#include <stdio.h>

int main()
{
// 初始化
	int payment = 0;
	int amount  = 0;
// 读入金额和票面
	printf("请输入购买金额和支付票面：\n");
	scanf("%d %d", &payment, &amount);
	printf("金额为%d，票面为%d\n", payment, amount);
// 计算找零
	int zero = amount - payment;

	if (zero < 0) {
		printf("余额不足。");
	}
	else {
		printf("找您%d元", zero);
	}
	
	return 0;
}
