//从顺序表中删除其值在给定值s与t之间（要求s<t）的所有元素，
//若s或t不合理或顺序表为空，则显示出错信息并退出运行
#include <stdlib.h>
#include <stdio.h>
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
bool DeleteElemSToT(SeqList &L,int s,int t)
{
    if(s>t) {
        return false;
    }
    if(L.Length<=0) {
        return false;
    }
    int i;
    for(i=0;i<L.Length;i++) {
        if(L.data[i]>s && L.data[i]<t) {
            L.data[i] = L.data[i+1];
            L.Length--;
        }
    }
    return true;
}