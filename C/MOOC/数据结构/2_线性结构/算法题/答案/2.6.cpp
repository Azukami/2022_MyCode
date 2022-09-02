#include <stdlib.h>
#include <stdio.h>
#define InitSize 20
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
bool Delete_Same(SeqList &L)
{
    if(L.Length==0) {
        return false;
    }
    int i;
    int j;      //i�洢��һ������ͬ��Ԫ�أ�jΪ����ָ��
    for(i=0,j=1;j<L.Length;j++) {
        if(L.data[i] != L.data[j]) {    //������һ�����ϸ�Ԫ��ֵ��ͬ��Ԫ��
            L.data[++i]=L.data[j];      //�ҵ��󣬽�Ԫ��ǰ��
        }
    }
    L.Length=i+1;
    return true;
}
bool Delete_saME(SeqList &L)
{
    if(L.Length==0) {
        return false;
    }
    int mark = 0;
    for(int i=0;i<L.Length;i++) {
        if(L.data[i]==L.data[i+1]) {    //�ҵ���ɾ��Ԫ�غ����������
            mark++;
        }else{
            L.data[i] = L.data[i+mark]; //��Ԫ��ǰ��mark��λ��
        }
    }
    L.Length -= mark;
    return true;
}