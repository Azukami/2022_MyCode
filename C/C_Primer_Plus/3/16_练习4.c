#include <stdio.h>
int main(void)
{
    double lf = 0.0;
    scanf("%lf", &lf);
    printf("Enter a floating-point value: %.2f\n", lf);
    printf("fixed-point notation: %lf\n", lf);
    printf("exponential notation: %e\n", lf);
    printf("p notation: %a\n", lf);

    return 0;
}