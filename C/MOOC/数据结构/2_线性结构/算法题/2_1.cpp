//��˳�����ɾ��������Сֵ��Ԫ�ز��ɺ������ر�ɾ��Ԫ�ص�ֵ
//�ճ���λ�������һ��Ԫ�������˳���Ϊ�գ�����ʾ������Ϣ���˳�����
#include <stdlib.h>
#include <stdio.h>
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
int DeleteElem(SeqList &L)
{
    if(L.Length == 0) {
        return -1;  //˳���Ϊ�գ�����-1��ʾ�����˳�
    }
    int i;
    int minid = 0;
    for(i=0;i<L.Length;i++) {
        if(L.data[i]<L.data[minid]) {
            minid = i;
        }
    }
    int e = L.data[i];
    L.data[minid] = L.data[L.Length-1]; //�ճ���λ�������һ��Ԫ���
    L.Length--;

    return e;   //���ر�ɾ��Ԫ�ص�ֵ
}