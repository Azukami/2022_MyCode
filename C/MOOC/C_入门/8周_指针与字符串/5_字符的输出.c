//字符的输出及内部存储
#include <stdio.h>
int main()
{
    char c;
    char d;
    c = 1;  //此时c得到的是1，是一个整数
    d = '1';    //此时d得到的是'1'，是一个字符
    if (c == d) {
        printf("c和d相等。\n");
    } else {
        printf("不相等\n");
    }
    printf("c=%d\n", c);
    printf("d=%d\n", d);

    return 0;
}