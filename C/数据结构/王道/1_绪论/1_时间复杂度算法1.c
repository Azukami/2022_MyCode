//算法1——逐步递增型爱你
#include <stdio.h>
void loveYou(int n);
int main()
{
    loveYou(3000);

    return 0;
}
void loveYou(int n) //n为问题规模
{
    int i = 0;
    for(i=0; i<n; i++) {    //循环每轮多爱你一次
        printf("I Love You %d.\n", i);
    }
    printf("I Love You More Than %d.\n", n);
}