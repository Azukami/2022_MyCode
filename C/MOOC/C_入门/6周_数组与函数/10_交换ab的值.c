//这样的代码能交换a和b的值吗？
//不能，因为ab是局部变量，swap函数里面的ab和main函数里面的ab是不一样的变量
/*
#include <stdio.h>
void swap(int a, int b);

int main(void)
{
    int a = 5;
    int b = 6;

    swap(a,b);

    printf("a=%d b=%d\n", a, b);

    return 0;
}

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}
*/
#include <stdio.h>
void swap();

int main()
{
    int a = 5;
    int b = 6;

    swap(a,b);
    {
        int a = 0;
        printf("a=%d\n", a);
    }
    printf("a=%d b=%d\n", a, b);

    return 0;
}

void swap(double a, double b)
{
    int swap;
    int t = a;
    printf("in swap, a=%f,b=%f\n", a, b);
    a = b;
    b = t;
}