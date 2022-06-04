//要访问整个结构，直接用结构变量的名字
//对于整个结构，可以做赋值、取地址，也可以传递给函数参数
//p1 = (struct point){5,10};
//将{5,10}强制类型转换为struct。告诉编译器要将{5，10}强制转换为point这种结构的变量，然后把它赋给p1。
//还可以让p1 = p2。
#include <stdio.h>
struct date
{
    int month;
    int day;
    int year;
};
int main(int argc, char const *argv[])
{
    struct date today;
    today = (struct date){07,31,2022};

    struct date day;
    day = today;

    printf("Today's date is %i-%i-%i.\n", today.year,today.month,today.day);
    printf("The day's date is %i-%i-%i.\n", day.year,day.month,day.day);

    return 0;
}