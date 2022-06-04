#include <stdio.h>
#include <time.h>
#include <math.h>
clock_t start, stop;
double duration;
#define MAXN 101
#define MAXK 1e5
double a[MAXN];
double f1(int n, double a[], double x);
double f2(int n, double a[], double x);
void test(double (*f)(int, double [], double));

int main(int argc, char const *argv[])
{
    int i;
    for (i=0; i<MAXN; i++) {
        a[i] = (double) i;
    }
    test(f1);
    test(f2);

    return 0;
}

double f1(int n, double a[], double x)
{
    int i;
    double p = a[0];
    for (i=0; i<100; i++) {
        p += pow(x,i)/i;
    }
    return p;
}
double f2(int n, double a[], double x)
{
    int i;
    double p = 1/n;
    for(i=n;i>0;i--) {
        p = (1/a[i-1]) +x*p;
    }
}

void test(double (*f)(int, double [], double))
{
    start = clock();
    for (int i=0; i<MAXK; i++) {    //重复调用函数MAXK次以获得充分多的时间打点数
        (*f)(MAXN-1, a, 1.1);
    }
    stop = clock();
    duration = ((double)(stop - start))/CLK_TCK/MAXK;
    printf("ticks = %f\n", (double)(stop - start));
    printf("duration = %6.2e\n", duration);
}