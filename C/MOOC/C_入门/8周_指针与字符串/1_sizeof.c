//C语言给出了一个工具，有一个运算符叫做sizeof，sizeof可以给出某个类型或某个变量在内存中所占据的字节数
#include <stdio.h>
int main()
{
    int a;
    a = 6;
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(a)=%ld\n", sizeof(a));
    printf("sizeof(double)=%ld\n", sizeof(double));

    return 0;
}