#include <stdio.h>
//输入两个数a和b，输出它们的最大公约数
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i;
    int j;
    for (i = a; i >= 1; i--) {
        int m = a % i;
        for (j = b; j >= 1; j--) {
            int n = b % j;
            if ( m == n == 0) {
                printf("最大公约数是%d", n);
                goto out;
            }
        }
    }
out:
    return 0;
}