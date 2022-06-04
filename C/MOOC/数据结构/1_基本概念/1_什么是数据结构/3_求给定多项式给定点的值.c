//给定一个多项式，计算给定点x处多项式的值
#include <stdio.h>
#include <math.h>
double f1(int n, double a[], double x);
double f2(int n, double a[], double x);
int main(void)
{
    double a[] = {1,2,3,4,5,6,7,8,9};
    double x;
    printf("请输入给定点x:");
    scanf("%lf", &x);
    int n = 9;
    double f1(n, a, x);
    printf("%f",f1);

    return 0;
}
double f1(int n, double a[], double x)
{
    int i;
    double p = a[0];
    for (i=1; i<=n; i++)
    {
        p += a[i]*pow(x,i);
    }
    return p;
}
double f2(int n, double a[], double x)
{
    int i;
    double p = a[n];
    for (i=n; i>0; i--) {
        p = a[i-1] + x*p;
    }
    return p;
}