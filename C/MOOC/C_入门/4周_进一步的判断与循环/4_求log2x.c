#include <stdio.h>
#include <math.h>
int main(void)
{
    int x;
    scanf("%d", &x);
    int i = 1000000;
    while (i >= 0) {
        if (pow(2,i) == x) {
            printf("log2x = %d", i);
        }
        i--;
    }
    return 0;
}
//较好的解法：
/*
#include <stdio.h>
int main(void)
{
    int x;
    int ret = 0;
    scanf("%d", &x);
    int i = x;
    while (i > 1) {
        i /= 2;
        ret++;    
    }
    printf("log2 of %d is %d." x, ret);
    return 0;
}
*/