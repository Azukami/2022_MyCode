#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sign;
    if(n < 0) {
        sign = -1;
    } else if(n > 0) {
        sign = 1;
    }else {
        sign = 0;
    }
    printf("sign(%d) = %d", n, sign);

    return 0;
}