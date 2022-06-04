#include <stdio.h>
int main(void)
{
    float inch;
    printf("请输入身高(英寸):");
    scanf("%f", &inch);
    float cm = inch * 2.54;
    printf("你的身高是%f厘米。\n", cm);

    return 0;
}