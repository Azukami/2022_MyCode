#include <stdio.h>

int main()
{
    int x;
    int n = 0;

    scanf("%d", &x);

    n = n + 1;
    x = x / 10;
    while (x > 0) {
        n = n + 1;
        x = x / 10;
    }
    printf("%d\n", n);

    return 0;
}