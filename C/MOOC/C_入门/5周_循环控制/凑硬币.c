#include <stdio.h>

int main()
{
    int x;//欲拼凑金额（元）
    int one, two, five;//1角钱、2角钱、5角钱
    scanf("%d", &x);//读入欲拼凑金额
    for(one = 1; one < x*10; one++) {//如果是两块，最多可以用20个1角
        for(two = 1; two < x*10/2; two++) {//如果是2块，最多可以用10个2角
            for(five = 1; five < x*10/5; five++) {//如果是2块，最多可以用4个5角
                if(one + 2*two + 5*five == x*10) {
                    printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", one, two, five, x);
                }
            }
        }
    }//通过3个for循环来做遍历
    
    return 0;
}