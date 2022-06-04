#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d", &x);
    int i;
    int isPrime = 1;    //表明x是素数
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1) {
        printf("%d是素数\n", x);
    } else {
        printf("%d不是素数\n", x);
    }

    return 0;
}