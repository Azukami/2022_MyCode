#include <stdio.h>

int main()
{
    int amount; /*票面*/
    int price; /*应付金额*/
    printf("请输入票面：\n");
    scanf("%d", &amount);
    printf("请输入应付金额：\n");
    scanf("%d", &price);
    if(amount - price > 0) {
        printf("抱歉，您的余额不足。\n");
    } else {
        printf("找您%d元。\n", amount - price);
    }

    return 0;
}