//对于union来说，经常用union的一个场合是这个：
//可以用union得到一个整数内部的各个字节
#include <stdio.h>
typedef union {
    int i;
    char ch[sizeof(int)];
} CHI;

int main(int argc, char const *argv[])
{
    CHI chi;
    int i;
    chi.i = 1234;
    for ( i = 0; i < sizeof(int); i++)
    {
        printf("%02hhX", chi.ch[i]);
    }
    printf("\n");
    
    return 0;
}