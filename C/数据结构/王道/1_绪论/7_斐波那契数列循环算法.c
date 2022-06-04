//斐波那契数列循环算法
//递归算法是自顶向下将大问题拆解成小问题求解，
//循环算法则是逆向思维，自底向上，先求出小问题的解，再向上一步一步的求取最终问题的解。
#include <stdio.h>
int fib_loop(int n)
{
    if (n<=1) { //斐波那契数列前两项0和1直接返回
        return n;
    }
    int fibs[n+1];
    for (int i=0; i<n+1; i++) { //初始化fibs数组
        fibs[i] = 0;
    }
    fibs[1] = 1;
    for (int i=2; i<=n+1; i++) {    //从数组下标为2的元素开始
        fibs[i] = fibs[i-1] + fibs[i-2];    //斐波那契数列
    }
    return fibs[n]; //返回第n个数字
}