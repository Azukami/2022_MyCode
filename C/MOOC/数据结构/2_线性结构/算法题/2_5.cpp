//��˳�����ɾ����ֵ�ڸ���ֵs��t֮�䣨Ҫ��s<t��������Ԫ�أ�
//��s��t�������˳���Ϊ�գ�����ʾ������Ϣ���˳�����
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