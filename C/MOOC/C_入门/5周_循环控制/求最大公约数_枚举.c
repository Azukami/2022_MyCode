#include <stdio.h>
/*算法：
1.设t为2；
2.如果u和v都能被t整除，则记下这个t
3.t加1后重复第2步，直到t等于u或v
4.那么，曾经记下的最大的可以同时整除u和v的t就是gcd*/
int main()
{
    int a, b;
    int min;
    scanf("%d %d", &a, &b);
    if(a < b) {
        min = a;
    } else {
        min = b;//min是a和b当中最小的那个
    }
    int ret = 0;
    int i;
    for (i = 1; i < min; i++) {//如果a和b没有最大公约数，则它们的最大公约数是1，因此循环从1开始
        if (a % i == 0) {//i最大也不要到a和b中最小的值
            if (b % i == 0 ) {//a和b同时可以被i整除
                ret = i;//一重循环是最小公约数
            }
        }
    }
    printf("%d和%d的最大公约数是%d。\n", a, b, ret);

    return 0;
}