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
    //ɾ��˳���L��ֵ�ڸ���ֵs��t֮�䣨Ҫ��s<t��������Ԫ��
    int i = 0;
    int k = 0;
    if(L.Length==0 || s>=t) {
        return false;   //���Ա�Ϊ�ջ�s��t���Ϸ��򷵻ش�����Ϣ���˳�����
    }
    for(i=0;i<L.Length;i++) {
        if(L.data[i]>=s && L.data[i]<=t) {
            k++;
        } else{
            L.data[i-k] = L.data[i];    //��ǰԪ��ǰ��k��λ��
        }
    }
    L.Length -= k;      //���ȼ�С
    return true;
}