#include <stdio.h>
int main(void)
{
    float num1;
    scanf("%f", &num1);
    printf("The input is %.1f or %.1e.\n", num1, num1);
    printf("The input is %+.3f or %.3E.\n", num1, num1);

    return 0;
}