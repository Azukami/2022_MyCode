#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int x = 1;
    int a = 1;
    while (x <= n)
    {
        a = a * x;
        x++;
    }
    printf("%d", a);
    return 0;
}