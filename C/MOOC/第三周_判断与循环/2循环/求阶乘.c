#include <stdio.h>

//while循环求阶乘
int main()
{
    int n;
    printf("请输入一个正整数：");
    scanf("%d", &n);
    int x = 1;

    int i = 1;
    while (x <= n) {
        i = x * i;
        x++;
    }
    pritnf("输入数字的阶乘是：%d。\n", i);

    return 0;
}

//for循环求阶乘
int main()
{
    int n;/*输入数*/
    printf("请输入一个正整数：");
    scanf("%d", &n);
    int fact = 1;/*所求阶乘*/

    int i = 1;
    for ( i = 1; i <= n; i++ ) {
        fact = fact * i;
    }

    printf("%d!=%d", n, fact);

    return 0;
}