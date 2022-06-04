//一个结构就是一个复合的数据类型，在里面可以有各种类型的成员，然后用一个变量来表达多个数据
#include <stdio.h>
int main(int argc, char const *argv[])
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 07;
    today.day = 31;
    today.year = 2022;

    printf("Today's date is %i-%i-%i.\n", today.year,today.month,today.day);

    return 0;   
}