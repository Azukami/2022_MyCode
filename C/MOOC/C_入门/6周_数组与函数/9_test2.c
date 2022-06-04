//测试函数调用类型不匹配
#include <stdio.h>
void cheer(int i);
int main(void)
{
    cheer(2.4);
    return 0;
}
void cheer(int i)
{
    printf("cheer %d\n", i);
}