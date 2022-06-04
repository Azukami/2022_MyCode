//clock()函数：捕捉从程序开始运行到clock()被调用时所耗费的时间。这个时间单位是clock tick，即“时钟打点”。
//跟函数clock()配套的是常数CLK_TCK(或CLOCKS_PER_SEC)：机器时钟每秒所走的时钟打点数
//这个数字不同的机器都不一样，这两个东西配合在一起，就可以计算出一个函数到底跑了多少秒。
#include <stdio.h>
#include <time.h>
clock_t start, stop;
//clock_t是clock()函数返回的变量类型
double duration;
int main()
{
    start = clock();    //开始计时
    //Myfunction();       //自己写的函数
    stop = clock();     //停止计时
    duration = ((double)(stop - start))/CLK_TCK;    //计算运行时间
    printf("%lf\n", duration);
    printf("%lf\n", CLK_TCK);

    return 0;
}