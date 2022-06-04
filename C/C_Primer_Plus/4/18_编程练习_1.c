#include <stdio.h>
int main(void)
{
    char name[40];
    char xing[40];
    printf("请输入您的名:\n");
    scanf("%s", name);
    printf("请输入您的姓:\n");
    scanf("%s", xing);
    printf("%s,%s", name, xing);

    return 0;
}