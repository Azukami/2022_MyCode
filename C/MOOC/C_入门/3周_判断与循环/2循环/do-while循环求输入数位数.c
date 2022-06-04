#include <stdio.h>

int main()
{
    int x;
    int n = 0;
    scanf("%d", &x);

    do
    {
        n++;
        x /= 10;
    } while (x > 0);
    
    printf("输入数字有%d位。\n", n);

    return 0;
}