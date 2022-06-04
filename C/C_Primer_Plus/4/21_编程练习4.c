#include <stdio.h>
int main(void)
{
    float high;
    printf("请输入你的身高:\n");
    scanf("%f", &high);
    char name[40];
    printf("请输入你的姓名:\n");
    scanf("%s", name);
    printf("%s, yuo are %f feet tall", name, high);

    return 0;
}