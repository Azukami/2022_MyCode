#include <stdio.h>

int main()
{
    int x;
    //scanf("%d", &x);
    x = 700;
    int digit;//digit表示x的每一位。
    int ret = 0;//结果
    while(x > 0) {
        digit = x % 10;
        printf("%d", digit);
        ret = ret * 10 + digit;//原来的结果往左移一位再加上digit
        //printf("x = %d, digit = %d, ret = %d\n", x, digit, ret);//调试
        x /= 10;//丢掉最右边（已取出的）那一位。
    }
    //printf("%d", ret);

    return 0;
}