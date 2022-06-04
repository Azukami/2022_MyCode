//将函数的名字放到printf中，让它做%p形式的输出
#include <stdio.h>
void f(int i)
{
    printf("in f, i=%d\n", i);
}
int main(void)
{
    int a;
    void (*pf)() = f;
    f(20);
    (*pf)(10);
    printf("%p\n", main);
    printf("%p\n", f);
    printf("%p\n", &a);
    return 0;
}