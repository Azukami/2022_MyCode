#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c = 0x80000000; //һ��4�ֽ��������ܱ��������
    unsigned int b = 0x80000000;
    printf("c=%d\n", c);
    printf("b=%u\n", b);
    printf("c>>1=%d\n", c>>1);
    printf("b>>1=%u\n", b>>1);
    
    return 0;
}