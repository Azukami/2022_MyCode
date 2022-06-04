//斐波那契数列递归算法
#include <stdio.h>
int fib_recur(int n)
{
    int n;
    if (n <= 1) {   //递归终止条件:n为斐波那契数列的前两项
        return n;
    }
    return fib_recur(n-1) + fib_recur(n-2); //向下递归
}
//用数组对递归算法进行优化
int dic[100];   //字典数组
int fib_recur_with_dic(int n)
{
    int dic[100];
    if (n <= 1) {   //递归终止条件
        return n;
    }
    for(int i=0; i<100; i++) {
        if(n == dic[i]) {       //查字典
            return dic[i];
        } else {    //如果没查到,就将结果存入字典中
            int result = fib_recur_with_dic(n-1) + fib_recur_with_dic(n-2);
            dic[i] = result;    //存储结果
            return result;
        }
    }
}