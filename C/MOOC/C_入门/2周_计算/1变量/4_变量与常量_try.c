//让用户输入变量AMOUNT的值，而不是使用固定的初始值
#include <stdio.h>
int main(void)
{
    int amount, price = 0;
    printf("请输入面值(元)：");
    scanf("%d", &amount);
    printf("请输入金额(元)：");
    scanf("%d", &price);

    int change = amount - price;
    printf("找您%d元。\n", change);

    return 0;
}