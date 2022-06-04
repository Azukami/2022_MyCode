#include <stdio.h>

#define RADTODEG1(x) (x * 57.29578)
#define RADTODEG2(x) (x) * 57.29578
#define RADTODEG3(x) ((x) * 57.29578)

int main(int argc, char const *argv[])
{
    printf("%f\n", RADTODEG1(5+2));
    printf("%f\n", 180/RADTODEG2(1));
    printf("%f\n", RADTODEG3(5+2));
    printf("%f\n", 180/RADTODEG3(1));
    return 0;
}
