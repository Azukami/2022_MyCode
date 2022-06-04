#include <stdio.h>
//实现一个函数PrintN，使得传入一个正整数为N的参数后，能顺序打印从1到N的全部正整数
int PrintN(int a);
int main()
{
    int a;
    printf("请输入一个正整数:");
    scanf("%d", &a);
    PrintN(a);

    return 0;
}

int PrintN(int a)
{
    if (a > 0) {
        PrintN(a - 1);
        printf("%d ", a);
    }
    return 0;
}