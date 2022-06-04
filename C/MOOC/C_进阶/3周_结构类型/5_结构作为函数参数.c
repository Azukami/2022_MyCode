//整个结构可以作为参数的值传入函数
//这时候是在函数内新建一个结构变量，并复制调用者的结构的值
//函数也可以返回一个结构
#include <stdio.h>
#include <stdbool.h>

struct date {
    int month;
    int day;
    int year;
};
bool isLeap(struct date d); //判断这天所在的年是不是闰年
int numberOfDays(struct date d);

int main(int argc, char const *argv[])
{
    struct date today, tomorrow;

    printf("Enter today's date (mm dd yyyy):");//用户输入今天的日期：月日年
    scanf("%i %i %i", &today.month, &today.day, &today.year);

    if ( today.day != numberOfDays(today)) { //如果这天不是这个月的最后一天
        tomorrow.day = today.day+1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    } else if (today.month == 12) { //如果这天是这一年的最后一天
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    } else { //在不是12月的某个月的最后一天
        tomorrow.day = 1;
        tomorrow.month = today.month+1;
        tomorrow.year = today.year;
    }

    printf("Tomorrow's date is %i-%i-%i.\n", tomorrow.year, tomorrow.month, tomorrow.day);

    return 0;
}

int numberOfDays(struct date d)
{
    int days;
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//表示每个月有多少天

    if (d.month == 2 && isLeap(d)) {    //如果是闰年，那么2月有29天
        days = 29;
    } else {
        days = daysPerMonth[d.month-1]; //数组下标从0开始，因此要减1
    }
    return days;
}

bool isLeap(struct date d)  //由结构变量d来判断是否是闰年
{
    bool leap = false;
    if( (d.year % 4 == 0 && d.year % 100 != 0) || d.year%400 == 0) {
        leap = true;
    }
    return leap;
}