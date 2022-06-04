//分别用clock()来测试f1和f2两个函数能跑多长时间：
/*
f1：
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
f2：
double f2(int n, double a[], double x)
{
    int i;
    double p = a[n];
    for (i=n; i>0; i--) {
        p = a[i-1] + x*p;
    }
    return p;
}
*/
#include <stdio.h>
#include <time.h>
#include <math.h>
clock_t start, stop;
double duration;
#define MAXN 10     //多项式最大项数，即多项式阶数+1,待测的9阶多项式有10个系数
#define MAXK 1e7    //被测函数最大重复调用次数为10的7次方
double f1(int n, double a[], double x);
double f2(int n, double a[], double x);

int main()
{
    int i;
    double a[MAXN]; //存储多项式的系数
    for (i=0; i<MAXN; i++) {
        a[i] = (double)i;   //遍历数组赋值
    }   //准备好存储多项式系数的数组

    start = clock();
    for (i=0; i<MAXK; i++) {    //重复调用函数MAXK次以获得充分多的时间打点数
        f1(MAXN-1, a, 1.1);
    }
    stop = clock();
    duration = ((double)(stop - start))/CLK_TCK/MAXK;   //计算函数单次运行的时间
    printf("ticks1 = %f\n", (double)(stop - start));
    printf("duration1 = %6.2e\n", duration);

    start = clock();
    for (i=0; i<MAXK; i++) {    //重复调用函数MAXK次以获得充分多的时间打点数
        f2(MAXN-1, a, 1.1);
    }
    stop = clock();
    duration = ((double)(stop - start))/CLK_TCK/MAXK;   //计算函数单次运行的时间
    printf("ticks2 = %f\n", (double)(stop - start));
    printf("duration2 = %6.2e\n", duration);

    return 0;
}
double f1(int n, double a[], double x)
{
    int i;
    double p = a[0];
    for (i=1; i<=n; i++) {
        p += a[i] * pow(x,i);
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