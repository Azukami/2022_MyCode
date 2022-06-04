//将两个有序顺序表合并成一个新的有序顺序表，并由函数返回结果顺序表
#include <stdlib.h>
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
int Min(int a, int b)
{
    int min;
    if(a<=b) {
        min = a;
    } else {
        min = b;
    }
    return min;
}
int Max(int a, int b)
{
    int max;
    if(a>=b) {
        max = a;
    } else {
        max = b;
    }
    return max;
}
SeqList TwoSeqListMerge(SeqList a, SeqList b, SeqList &c)
{
    int i;
    int j;
    //将两个表中小的元素放到新表中
    for(i=0;i<Min(a.Length,b.Length);i++) {
        for(int p=0;p<Min(a.Length,b.Length);p++) {
            c.data[i] = Min(a.data[i],b.data[p]);
        }
    }
    for(j=Min(a.Length,b.Length);j<Max(a.Length,b.Length);j++) {
        if(a.Length>b.Length) {
            c.data[j] = a.data[j];
        } else if(b.Length>a.Length) {
            c.data[j] = b.data[j];
        } else {
            return c;
        }
    }
    return c;
}