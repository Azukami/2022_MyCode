//��֪��һά����A[m+n]�����δ���������Ա�(a1,a2,a3,...,am)��(b1,b2,...,bn)
//��дһ��������������������˳����λ�û���������(b1,b2,...,bn)�ŵ�(a1,a2,a3,...,am)��ǰ��
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