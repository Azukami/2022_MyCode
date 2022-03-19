#include <stdio.h>

int main()
{
    int time1,time2;
    scanf("%d %d", &time1, &time2);/*输入起始时间和流逝时间*/
    int hour = time1 / 100;
    int minute1 = time1 % 100;
    int minute = minute1 + time2;

    for(minute = minute1 + time2; minute >= 60; minute = minute - 60) {
        hour = hour + 1;
    }
    int time = hour*100 + minute;
    if (minute >= 0) {
        if(hour != 0) {
            printf("%d", time);
        } else {
            printf("0%d", minute);
        }
    } else {
        if( hour - 1 >= 0 ) {
            printf("%d", hour*100 + (60-minute));
        } else {
            printf("0%d", (60+minute));
        }
    }

    return 0;
}