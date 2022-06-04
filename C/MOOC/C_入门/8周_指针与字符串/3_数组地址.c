//取数组地址
//取数组单元地址
//取相邻的数组单元的地址
#include <stdio.h>
int main(void)
{
    int a[10];

    printf("%p\n", &a);     //把a交给取地址符，取出它的地址
    printf("%p\n", a);      //直接把a拿来作为一个地址
    printf("%p\n", &a[0]);  //取出a[]中第一个元素的地址
    printf("%p\n", &a[1]);  //取出a[]中第二个元素的地址

    return 0;
}