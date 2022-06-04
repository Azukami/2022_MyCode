//设计一个高效算法，将顺序表L中所有元素逆置，要求算法的空间复杂度为O(1)
#include <stdlib.h>
#define InitSize 10
typedef struct 
{
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
SeqList Swap(SeqList &L)
{
    int i;
    int t;
    for(i=0;i<(L.Length/2);i++) {
        t = L.data[i];
        L.data[i] = L.data[L.Length-i-1];
        L.data[L.Length-i-1] = t;
    }
    return L;
}