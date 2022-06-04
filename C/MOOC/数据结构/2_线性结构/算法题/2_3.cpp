//对长度为n的顺序表L，编写一个时间复杂度为O(n)，空间复杂度为O(1)的算法
//该算法删除线性表中所有值为x的元素
#include <stdlib.h>
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
SeqList DeleteElemX(SeqList &L, int x)
{
    int i;
    for(i=0;i<L.Length-1;i++) {
        if(L.data[i] == x) {
            L.data[i] = L.data[i+1];
            L.Length--;
        }
    }
    return L;
}