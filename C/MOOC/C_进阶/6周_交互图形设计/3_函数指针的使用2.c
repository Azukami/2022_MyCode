//函数的参数也可以是函数指针
#include <stdio.h>

int plus(int a, int b)
{
    return a+b;
}
int minus(int a, int b)
{
    return a-b;
}
void cal(int (*f)(int, int))
{
    printf("%d\n", (*f)(2,3));
}

int main(void)
{
    cal(plus);
    cal(minus);

    return 0;
}