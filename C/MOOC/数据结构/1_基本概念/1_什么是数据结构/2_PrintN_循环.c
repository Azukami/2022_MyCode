//写程序实现一个函数PrintN，使得传入一个正整数为N的参数后，能顺序打印从1到N的全部正整数
#include <stdio.h>
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
    int i;
    for (i=1; i<=a; i++) {
        printf("%d ", i);
    }
    return 0;
}