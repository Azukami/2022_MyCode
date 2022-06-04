#include <stdio.h>
//程序作用是使用while循环计算1 + 2 + 3 + …… + 100的结果是多少
int main(void)
{
    int num = 1;
    int sum = 0;
    while(num <= 100)
    {
        sum = sum + num;
        num = num + 1;
    }
    printf("sum = %d", sum);

    return 0;
}