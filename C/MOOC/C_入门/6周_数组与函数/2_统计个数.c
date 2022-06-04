//写一个程序，输入数量不确定的[0,9]范围内的整数，统计每一种数字出现的次数，输入-1表示结束。
#include <stdio.h>
int main(void)
{
    const int number = 10;
    int x;
    int count[number];//count[0]代表0出现了多少次，count[9]代表9这个数字出现了多少次
    int i;
    for(i = 0; i < number; i++) {//既然定义数组，因此需要在适当的地方进行初始化。
        count[i] = 0;
    }
    scanf("%d", &x);
    while(x != -1) {
        if(x >= 0 && x <= 9) {//在有效范围内
            count[x]++;
        }
        scanf("%d", &x);
    }
    for(i = 0; i < number; i++) {//结束时要遍历数组以做输出
        printf("%d:%d\n", i, count[i]);//输出这个数字出现了多少次
    }
    return 0;
}