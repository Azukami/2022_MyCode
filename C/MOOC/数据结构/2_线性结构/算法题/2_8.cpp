//已知在一维数组A[m+n]中依次存放两个线性表(a1,a2,a3,...,am)和(b1,b2,...,bn)
//编写一个函数，将数组中两个顺序表的位置互换，即将(b1,b2,...,bn)放到(a1,a2,a3,...,am)的前面
#include <stdlib.h>
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
SeqList SwapSeqList(SeqList L,SeqList &C)
{
    int m;
    int n;
    L.Length = m+n;
    SeqList A;
    A.Length = m;
    for(int p=0;p<A.Length;p++) {
        A.data[p] = L.data[p];
    }
    SeqList B;
    B.Length = n;
    for(int q=m;q<m+n-1;q++) {
        B.data[q] = L.data[q];
    }
    int i;
    for(i=0;i<B.Length;i++) {
        C.data[i] = B.data[i];
    }
    int j;
    for(j=B.Length;j<(B.Length+A.Length);j++) {
        C.data[j] = A.data[j];
    }
    return C;
}