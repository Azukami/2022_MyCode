#include <stdio.h>

int main()
{
    const double RATE = 8.25;/*基本小时薪资*/
    const int STANDARD = 40; /*基本工作时长*/
    double pay = 0.0;
    int hours;

    printf("请输入工作的小时数：\n");
    scanf("%d", &hours);
    printf("\n");
    if (hours > STANDARD) {
        pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
    } else {
        pay = hours * RATE;
    }
    printf("应付工资：%.2f\n", pay);

    return 0;
}