#include <stdio.h>
#include <float.h>
int main(void)
{
    double num1 = 1.0 / 3.0;
    float num2 = 1.0 / 3.0;
    printf("num1 = %.6lf ", num1);
    printf("num2 = %.6f\n", num2);
    printf("num1 = %.12lf ", num1);
    printf("num2 = %.12f\n", num2);
    printf("num1 = %.16lf ", num1);
    printf("num2 = %.16f\n", num2);
    printf("FLT_DIG = %d\n", FLT_DIG);
    printf("DBL_DIG = %d\n", DBL_DIG);
    //FLT_DIG����float��Чʮ��������λ��
    //DBL_DIG����double��Чʮ��������λ��

    return 0;
}