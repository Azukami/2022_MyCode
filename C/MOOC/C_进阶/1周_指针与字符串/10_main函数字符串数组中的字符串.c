//字符串数组还可以作为main函数的参数。
//main函数的括号中其实是有东西都，它的括号中有两个参数，一个是整数argc，另一个是字符串数组argv*[]
//整数是用来告诉用户后面的那个数组中到底有多少个字符串。
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for (i=0; i<argc; i++) {
        printf("%d:%s\n", i, argv[i]);
    }

    return 0;
}