#include <stdio.h>

int main()
{
    int year,month,day;
    scanf("%d/%d/%d", &year, &month, &day);
    int date;
    if ((year / 4 == 0 && year / 100 != 0) || year / 400 == 0) {
        if (month = 1){
            date = day;
        } else if (month == 2) {
            date = 31 + day;
        } else if (month == 3) {
            date = 31 + 29 + day;
        } else if (month == 4) {
            date = 31 + 29 + 31 + day;
        } else if (month == 5) {
            date = 31 + 29 + 31 + 30 + day;
        } else if (month == 6) {
            date = 31 + 29 + 31 + 30 + 31 + day;
        } else if (month == 7) {
            date = 31 + 29 + 31 + 30 + 31 + 30 + day;
        } else if (month == 8) {
            date = 31 + 29 + 31 + 30 + 31 + 30 + 31 + day;
        } else if (month == 9) {
            date = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day;
        } else if (month == 10) {
            date = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
        } else if (month == 11) {
            date = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
        } else if (month == 12) {
            date = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
        }
        printf("%d", date);
    }
    else {
        if (month == 1){
            date = day;
        } else if (month == 2) {
            date = 31 + day;
        } else if (month == 3) {
            date = 31 + 28 + day;
        } else if (month == 4) {
            date = 31 + 28 + 31 + day;
        } else if (month == 5) {
            date = 31 + 28 + 31 + 30 + day;
        } else if (month == 6) {
            date = 31 + 28 + 31 + 30 + 31 + day;
        } else if (month == 7) {
            date = 31 + 28 + 31 + 30 + 31 + 30 + day;
        } else if (month == 8) {
            date = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
        } else if (month == 9) {
            date = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
        } else if (month == 10) {
            date = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
        } else if (month == 11) {
            date = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
        } else if (month == 12) {
            date = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
        }
        printf("%d", date);
    }

    return 0;
}