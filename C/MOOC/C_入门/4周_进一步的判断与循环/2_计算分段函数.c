#include <stdio.h>
int main(void)
{
    int x;
    int fx;
    scanf("%d", &x);
    if (x < 0) {
        fx = -1;
    } else if (x == 0) {
        fx = 0;
    } else if (x > 0) {
        fx = 2 * x;
    }
    printf("%d", fx);
    return 0;
}