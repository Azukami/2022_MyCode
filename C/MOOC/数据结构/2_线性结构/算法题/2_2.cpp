//���һ����Ч�㷨����˳���L������Ԫ�����ã�Ҫ���㷨�Ŀռ临�Ӷ�ΪO(1)
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