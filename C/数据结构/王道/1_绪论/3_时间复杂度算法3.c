//算法3——指数递增型爱你
#include <stdio.h>
void loveYou(int n);
int main()
{
    loveYou(300);

    return 0;
}
void loveYou(int n) //n为问题规模
{
    int i = 1;  //i为爱你的程度
    while(i<=n) {
        i = i*2;    //每次翻倍
        printf("I love You %d.\n", i);
    }
    printf("I Love You More Than %d.\n", n);
}