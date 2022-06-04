//如何让main()函数放在最上面
#include <stdio.h>
void sum(int begin, int end);//函数的原型声明

int main(void)
{
    sum(1,10);
    sum(20,30);
    sum(35,45);

    return 0;
}

void sum(int begin, int end)//函数定义
{
    int i;
    int sum = 0;
    for(i = begin; i<=end; i++ ) {
        sum += i;
    }
    printf("%d到%d的和是%d\n", begin, end, sum);
}