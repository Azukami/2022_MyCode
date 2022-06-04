//[]运算符既可以对数组做，也可以对指针做
//数组变量是特殊的指针，数组变量本身表达的就是地址。
#include <stdio.h>

void minmax(int a[], int len, int *max, int *min);

int main(void)
{
    int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
    int min,max;
    printf("main sizeof(a[])=%lu\n", sizeof(a));
    printf("main a=%p\n", a);
    int len = sizeof(a) / sizeof(a[0]);
    minmax(a, len, &min, &max);
    printf("min=%d,max=%d\n", min, max);
    int *p = &min;  //让指针p指向变量min
    printf("*p=%d\n", *p);  
    //指针p中保存的是min的地址，对p做运算符*，用来访问p所指的变量，因此输出*p的值就是输出变量min的值。
    printf("p[0]=%d\n", p[0]);  //p[0]相当于*p
    return 0;
}

void minmax(int a[], int len, int *min, int *max)
{
    int i;
    printf("minmax sizeof(a[])=%lu\n", sizeof(a));
    printf("minmax a=%p\n", a);
    *min = *max = a[0];
    for(i=1; i<len; i++) {
        if(a[i] < *min) {
            *min = a[i];
        } else if(a[i] > *max) {
            *max = a[i];
        }
    }
}