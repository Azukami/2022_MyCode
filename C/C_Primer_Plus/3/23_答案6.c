#include <stdio.h>
#define MASS_PER_MOLE 3.0e-23
#define MASS_PER_QUART 950

int main(void)
{
    double quart, molecules;

    printf("Please enter a quart for water:");
    scanf("%lf", &quart);
    //1夸脱水大约是950克;
    //1个水分子质量约为3.0*10^(-23)克;
    molecules = quart * MASS_PER_QUART / MASS_PER_MOLE;
    printf("%g quart water includes %e water molecules.\n", quart, molecules);

    return 0;
}