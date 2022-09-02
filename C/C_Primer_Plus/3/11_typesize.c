/*typesize.c -- ��ӡ���ʹ�С*/
#include <stdio.h>
int main(void)
{
    /*C99Ϊ���ʹ�С�ṩ%zdת��˵��*/
    printf("Type int has a size of %zd by tens.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
    float pi = 3.141592653582791;
    printf("pi = %f\n", pi);
    
    return 0;
}