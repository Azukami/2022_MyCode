#include <stdio.h>
//number��ʾ��С�ַ���
void width1(void)
{
    printf("%9.2f\n", 123.0);
}
//*��ʾ��һ���������ַ���
void width2(void)
{
    printf("%*d\n", 6, 123);
}
int main(int argc, char const *argv[])
{
    width1();
    width2();
    return 0;
}
