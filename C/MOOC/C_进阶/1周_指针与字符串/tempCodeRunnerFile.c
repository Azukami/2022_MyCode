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