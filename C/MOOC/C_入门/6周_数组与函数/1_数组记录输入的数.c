//如何写一个程序计算用户输入的数字的平均数，并输出所有大于平均数的数
#include <stdio.h>
int main(void)
{
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];//定义的number这个变量是数组。这个数组里每一个单元都是int，数组的大小是100，即这个数组里可以放100个int
    scanf("%d", &x);
    while (x != -1) {//while循环中随着x的不断读入，只要x不是-1，就把它放入number这个数组中去，放进去的位置随着cnt的递增不断往后放。
        number[cnt] = x;//cnt不断递增，number数组cnt这个位置上的单元让它 = x
        sum += x;
        cnt++;
        scanf("%d", &x);
    }
    if (cnt > 0) {
        printf("%f\n", sum/cnt);
        int i;//用循环去遍历数组，输出数组中大于平均数的数字
        for(i = 0; i < cnt; i++) {//此时cnt表达的是这个数组中有多少个数
            if (number[i] > sum/cnt) {
                printf("%d", number[i]);
            }
        }
    }
    return 0;
}