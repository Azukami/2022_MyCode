//算法思想：
//1.计算机随机想一个数，记在变量number里；
//2.一个负责计数的变量count初始化为0；
//3.让用户输入一个数字a；
//4.count自增1；
//5.判断a与number的关系，如果a大，就输出“大”，如果a小，就输出“小”；
//6.如果a和number是不相等的（无论是大还是小），程序转回到第三步；
//7.否则，程序输出“猜中”和次数，然后结束。
//注：循环条件是a和number不相等。
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));//为了让随机数看上去真的像随机数一样。需要调用stdlib库和time库。
    int number = rand()%100 + 1;//每次召唤rand()就得到一个随机的整数。rand和printf、scanf一样，都是系统库里的函数。
    int count = 0;
    int a = 0;
    printf("我已经想好了一个1到100之间的数。");
    do {
        printf("请猜一猜这个1到100之间的数字：");
        scanf("%d", &a);
        count ++;
        if ( a > number ) {
            printf("你猜的数大了。");
        } else if ( a < number ) {
            printf("你猜的数小了。");
        }
    } while ( a != number);
    printf("太好了，你用了%d次就猜到了答案。\n", count);

    return 0;
}