#include <stdio.h>
int main(void)
{
    double price;

    printf("请输入金额（元）：");
    scanf("%lf", &price);

    double change = 100.0 - price;

    printf("找您%.3lf元。\n", change);

    return 0;
}