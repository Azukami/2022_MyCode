//scanf的返回值是这次读入了几个变量进来。
//printf的返回值是说它这次输出了多少个字符。
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int i1 = scanf("%i", &num);
    int i2 = printf("%d\n", num);
    printf("%d:%d\n", i1, i2);
    
    return 0;
}