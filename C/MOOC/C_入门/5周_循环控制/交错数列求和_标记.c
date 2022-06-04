#include <stdio.h>
int main()
{
    int n;
    int i;
    double sum = 0.0;
    int sign = 1;//正负标记

    scanf("%d", &n);
    for ( i = 1; i <= n; i++ ) {
        sum += sign*1.0/i;
        sign = -sign;
    }

    printf("f(%d)=%f\n", n, sum);

    return 0;
}