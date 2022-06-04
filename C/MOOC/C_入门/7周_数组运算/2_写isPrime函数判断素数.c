#include <stdio.h>
int isPrime(int x);

int main(void)
{
    int x;
    scanf("%d", &x);
    if (isPrime(x)) {
        printf("%d是素数\n", x);
    } else {
        printf("%d不是素数\n", x);
    }
    return 0;
}
int isPrime(int x)
{
    int ret = 1;
    int i;
    if (x==1 || (x%2 == 0 && x!= 2)) {  //如果它能被某个偶数整除那么它必定是偶数
        ret = 0;    //去掉1和所有的偶数
    }
    for (i=3; i<x; i+=2) {  //用从3开始的所有奇数来判断素数
        if (x%i == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}