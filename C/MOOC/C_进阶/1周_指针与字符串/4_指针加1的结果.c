//给一个指针加1表示要让指针指向下一个变量
//如果指针不是指向一片连续分配的空间，如数组，则这种运算没有意义
#include <stdio.h>
int main(void)
{
    char ac[] = {88,1,2,3,4,5,6,7,8,9,};
    char *p = ac;   //指针p指向了数组ac的第一个单元。
    char *p1 = &ac[5];

    printf("p  =%p\n", p);
    printf("p+1=%p\n", p+1);
    printf("p1-p=%d\n", p1-p);

    int ai[] = {32,1,2,3,4,5,6,7,8,9,};
    int *q = ai;   //指针q指向了数组ai的第一个单元。
    int *q1 = &ai[6];

    printf("q  =%p\n", q);
    printf("q+1=%p\n", q+1);
    printf("q1-q=%d\n", q1-q);

    return 0;
}