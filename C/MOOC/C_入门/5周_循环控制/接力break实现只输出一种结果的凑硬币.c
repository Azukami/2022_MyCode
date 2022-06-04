#include <stdio.h>

int main()
{
    int x;//欲拼凑金额（元）
    int one, two, five;//1角钱，2角钱，5角钱
    int exit = 0;//标记
    scanf("%d", &x);//读入欲拼凑金额
    for(one = 1; one < x*10; one++) {
        for(two = 1; two < x*10/2; two++) {
            for(five = 1; five < x*10/5; five++) {
                if(one*1 + two*2 + five*5 == x*10) {
                    printf("可以用%d个1角和%d个2角和%d个5角凑出%d元钱\n", one, two, five, x);
                    exit = 1;//标记退出
                    break;//只输出一种排列组合结果
                }
            }
            if(exit == 1) break;
        }
        if(exit == 1) break;//if(exit)相当于if(exit == 1)
    }

    return 0;
}