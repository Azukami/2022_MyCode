/*print2.c -- ����printf()������*/
#include <stdio.h>
int main(void)
{
    unsigned int un = 3000000000;/*int Ϊ32Ϊ��shortΪ16λ��ϵͳ*/
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    //sizeof()������������Ǽ����������͵Ĵ�С����λ���ֽ�
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