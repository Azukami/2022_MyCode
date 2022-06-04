/*showf_pt.c -- 以两种方式显示float类型的值 */
#include <stdio.h>
int main(void)
{
    float aboat = 32000.0f;
    double abet = 2.14e9;
    long double dip = 5.32e-5L;

    printf("%f can be written %e\n", aboat, aboat);
    //下一行要求编译器支持C99或其中的相关特性
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);
    //上溢示例
    float toobig = 3.4E38 * 100.0f;
    printf("%e\n", toobig);
    
    return 0;
}