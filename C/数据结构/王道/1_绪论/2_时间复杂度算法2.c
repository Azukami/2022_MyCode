//算法2——嵌套循环型爱你
#include <stdio.h>
void loveYou(int n);    //n为问题规模
int main()
{
    loveYou(300);

    return 0;
}
void loveYou(int n)
{
    int i = 0;  //爱你的程度
    while (i<n) {
        i++;
        printf("I Love You %d.\n", i);
        for (int j=0; i<n; j++) {   //嵌套两层循环
            printf("I am Iron Man.\n");
        }
    }
    printf("I Love You More Than %d.\n", n);
}