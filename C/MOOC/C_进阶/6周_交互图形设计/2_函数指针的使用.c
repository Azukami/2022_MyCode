#include <stdio.h>
void f(int i)
{
    printf("in f(), i=%d\n", i);
}
void g(int i)
{
    printf("in g(), i=%d\n", i);
}
void h(int i)
{
    printf("in h(), i=%d\n", i);
}
//应用函数指针
int main(void)
{
    int i = 0;
    void (*fa[])(int) = {f,g,h};    //定义了一个叫做fa的数组，是一个函数指针的数组
    //这个数组中每一项都是一个函数指针
    scanf("%d\n", &i);
    if(i>=0 && i<sizeof(fa)/sizeof(fa[0])) {
        (*fa[i])(0);
    }
    return 0;
}
/*普通方式
    if (i==0) {
        f(0);
    } else if (i==1) {
        g(0);
    }
或
    switch(i)
    {
        case 0:f(0);break;
        case 1:g(0);break;
        case 2:h(0);break;
    }
*/