#include <stdio.h>
//number表示最小字符数
void width1(void)
{
    printf("%9.2f\n", 123.0);
}
//*表示下一个参数是字符数
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
