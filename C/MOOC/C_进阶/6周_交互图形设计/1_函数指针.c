//�����������ַŵ�printf�У�������%p��ʽ�����
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