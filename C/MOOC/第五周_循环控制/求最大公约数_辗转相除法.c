#include <stdio.h>
/*算法
1.如果b等于0，计算结束，a就是最大公约数
2.否则，计算a除以b的余数，让a等于b，而b等于那个余数
3.回到第一步
推演：
a   b   t       t是a/b的余数
12  18  12      18 != 0
18  12  6       12 != 0
12  6   0       6  != 0
6   0           0  =  0,6为最大公约数*/
int main()
{
    int a, b, t;
    scanf("%d %d", &a, &b);

    while( b != 0 ) {
        t = a % b;
        a = b;
        b = t;
    }
    printf("最大公约数=%d\n", a);
    
    return 0;
}