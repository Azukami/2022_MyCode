//结构变量的名字并不是结构变量的地址，而数组变量的名字就是数组变量的地址
//因此对数组变量是否取&都是一样的，结构都是它的地址，但是对于结构变量取地址，就必须使用&运算符。
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
    struct date *pDate = &today;

    printf("Today's date is %i-%i-%i.\n", today.year,today.month,today.day);
    printf("The day's date is %i-%i-%i.\n", day.year,day.month,day.day);

    printf("address of today is %p\n", pDate);

    return 0;
}