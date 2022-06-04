#include <stdio.h>
int main(void)
{
    long sc = 3.156e7;
    int age;
    printf("请输入您的年龄:");
    scanf("%d", &age);
    printf("您的秒数为:%ld秒。\n", sc * age);

    return 0;
}