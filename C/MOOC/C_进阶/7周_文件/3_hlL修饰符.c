//修饰符是用来修饰类型的，比如hh表示把它当作单个字节来输出
//%n表示输出读入或写出的个数
#include <stdio.h>
void hlL(void)
{
    int num;
    printf("%hhd%n\n", 12345, &num);
    printf("\n");
    printf("%d\n", num);
}
int main(int argc, char const *argv[])
{
    hlL();
    return 0;
}