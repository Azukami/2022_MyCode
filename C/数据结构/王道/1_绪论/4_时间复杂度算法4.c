//算法4——搜索数字型爱你
#include <stdio.h>
void loveYou(int flag[], int n);    //n为问题规模
int main()
{
    int n = 300;
    int flag[n];
    int i;
    for(i=1; i<=n; i++) {       //flag数组中存放了1~n这些数
        flag[i] = i;
    }
    loveYou(flag, n);

    return 0;
}
void loveYou(int flag[], int n)
{
    printf("I Am Iron Man.\n");
    for (int i=0; i<n; i++) {   //从数组第一个元素开始查找
        if(flag[i] == n) {
            printf("I Love You %d.\n", n);
            break;              //找到后立即跳出循环
        }
    }
}