//要根据输入的月份数字来输出相应的代表月份的单词，这个可以用字符串数组来实现。
//需要一个数组，它的每一个单元是一个字符串，它的数组下标代表了月份数字。
#include <stdio.h>
int main(void)
{
    char *a[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int i;
    int month;
    printf("请输入代表月份的数字：");
    scanf("%d", &month);
    for(i=0;i<12;i++) {
        if (month == i+1) {
            printf(a[i]);
        }
    }
    return 0;
}