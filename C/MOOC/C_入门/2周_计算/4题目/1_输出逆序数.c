//程序每次读入一个正3位数，然后输出按位逆序的数字。
#include <stdio.h>
int main(void)
{
    int a;//输入一个正3位数
    scanf("%d", &a);//读入输入的正三位数
    int b = a / 100;//取出a的百位
    int c = (a % 100) / 10;//取出a的十位
    int d = a % 10;//取出a的个位
    int e = d * 100 + c * 10 + b;//逆序
    printf("%d", e);//输出逆序数

    return 0;
}