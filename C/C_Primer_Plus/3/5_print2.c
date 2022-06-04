/*print2.c -- 更多printf()的特性*/
#include <stdio.h>
int main(void)
{
    unsigned int un = 3000000000;/*int 为32为和short为16位的系统*/
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    //sizeof()运算符，作用是计算整数类型的大小，单位是字节
    printf("int size = %d\n", sizeof(int));
    printf("short int size = %d\n", sizeof(short));
    printf("long int size = %d\n", sizeof(long));
    printf("long long int size = %d\n", sizeof(long long));
    printf("char size = %d\n", sizeof(char));

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);
    
    return 0;
}