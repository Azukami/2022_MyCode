/*当把一个指针作为参数的时候，就可以这样写：
void f(int *p);
f函数要一个int的指针，当我们去调用这个f函数的时候，就要交给它一个地址：
int i = 0;
f(&i);
而不能交给它那个变量本身或者交给它那个变量的值。
必须用&符号取得某个变量的地址，把这个地址传给指针。
*/
#include <stdio.h>
void f(int *p);
void g(int k);

int main(void)
{
    int i = 6;
    printf("&i=%p\n", &i);
    f(&i);
    g(i);
    return 0;
}

void f(int *p)
{
    printf(" p=%p\n", p);
    printf("*p=%d\n", *p);
    *p = 26;
}
void g(int k)
{
    printf("k=%d\n", k);
}