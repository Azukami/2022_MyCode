//Flag(标志)有四种
//-表示左对齐
#include <stdio.h>
void Flag1(void)
{
    printf("%9d\n", 123);
    printf("%-9d\n", 123);
}
//+表示前面有加号或减号
void Flag2(void)
{
    printf("%+9d\n", 123);
    printf("%+-9d\n", -123); //可以又有加号又左对齐
}
//0表示填充
void Flag3(void)
{
    printf("%09d\n", 123);
    printf("%-09d\n", -123);
}
int main(int argc, char const *argv[])
{
    Flag1();
    Flag2();
    Flag3();
    return 0;
}