#include <stdlib.h>
#include <stdio.h>
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
bool Del_s_t(SeqList &L, int s, int t)
{
    //删除顺序表L中值在给定值s与t之间（要求s<t）的所有元素
    int i = 0;
    int k = 0;
    if(L.Length==0 || s>=t) {
        return false;   //线性表为空或s、t不合法则返回错误信息并退出运行
    }
    for(i=0;i<L.Length;i++) {
        if(L.data[i]>=s && L.data[i]<=t) {
            k++;
        } else{
            L.data[i-k] = L.data[i];    //当前元素前移k个位置
        }
    }
    L.Length -= k;      //长度减小
    return true;
}