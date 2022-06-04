#include <stdio.h>
/*输入一个非负整数，正序输出它的每一位数字
输入：13425
输出：1 3 4 2 5*/
int main()
{
    int x;
    scanf("%d", &x);
    int t = 0;//逆序x
    do {
        int d = x % 10;
        t = t *10 + d;
        x /= 10;
    }while(x > 0);
    //printf("t = %d\n", t);
    x = t;//循环结束后x为0，t为逆序的x，则将t赋值给x
    do {
        int d = x % 10;
        printf("%d", d);
        if(x >= 10) {//最后一个数字不输出空格
            printf(" ");
        }
        x /= 10;
    } while (x > 0);

    return 0;
}//但是对于x=700这类情况，会输出7而非007，因此先逆序再分解的方法不适用末尾有0的情况