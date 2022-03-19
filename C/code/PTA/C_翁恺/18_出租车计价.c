#include <stdio.h>

int main()
{
    double km;/*里程*/
    int wait;/*等待时间*/
    scanf("%lf %d", &km, &wait);
    int payment;/*应付车费，四舍五入，保留到元*/
    if(wait < 5){
        if (km <= 3.0) {
        payment = 10;
        printf("%d", payment);
        } else if (km <= 13) {
            int mile = km - 3.0;
            payment = 10 + mile * 2;
            int point = payment % 1;
            if (point >= 5) {
                payment++;
                printf("%d", payment);
            } else {
                printf("%d", payment);
            }
        } else{
            int mile2 = km - 13.0;
            payment = 10 + 10 * 2 + mile2 * 3;
            int point = payment % 1;
            if ( point >=5 ) {
                payment++;
                printf("%d", payment);
            } else{
                printf("%d", payment);
            }
        }
    } else{
        int pay2 = 0;
        for(int i = wait; i > 5; i = i - 5){
            pay2 = pay2 + 2;
        }
        if (km <= 3.0) {
            payment = 10 + pay2;
            printf("%d", payment);
        } else if (km <= 13) {
            int mile = km - 3.0;
            payment = 10 + mile * 2 + pay2;
            int point = payment % 1;
            if (point >= 5) {
                payment++;
                printf("%d", payment);
            } else {
                printf("%d", payment);
            }
        } else{
            int mile2 = km - 13.0;
            payment = 10 + 10 * 2 + mile2 * 3 + pay2;
            int point = payment % 1;
            if ( point >=5 ) {
                payment++;
                printf("%d", payment);
            } else{
                printf("%d", payment);
            }
        }
    }

    return 0;
}