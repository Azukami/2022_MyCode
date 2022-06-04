//如何输入'1'这个字符给char c？
//scanf("%c". &c);——>1
//scanf("%d", &i);——>49
#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    //然后让c以两种形式来做输出
    printf("c=%d\n", c);
    printf("c='%c'\n", c);

    return 0;
}