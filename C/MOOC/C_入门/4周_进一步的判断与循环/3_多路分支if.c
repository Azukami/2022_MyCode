#include <stdio.h>
int main(void)
{
    int type;
    scanf("%d", &type);
    if (type == 1) {
        printf("你好");
    } else if (type == 2) {
        printf("早上好");
    } else if (type == 3) {
        printf("晚上好");
    } else if (type == 4)
    {
        printf("再见");
    } else {
        printf("关注嘉然谢谢喵");
    }

    return 0;
}