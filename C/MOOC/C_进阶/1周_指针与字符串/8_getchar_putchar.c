//putchar函数表示向标准输出写一个字符，返回写了几个字符，EOF(-1)表示写失败
//getchar函数表示从标准输入读入一个字符，返回类型是int是为了返回EOF(-1)
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ch;
    
    while ( (ch = getchar()) != EOF ) { //将getchar得到的结果交给ch变量，如果不是EOF，就在循环中输出ch的值
        putchar(ch);
    }
    printf("EOF\n");

    return 0;
}