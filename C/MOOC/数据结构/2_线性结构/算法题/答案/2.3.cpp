#include <stdlib.h>
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
void del_x(SeqList &L, int x)
{
    int mark = 0;   //mark��¼ֵ����x��Ԫ�ظ���
    int i = 0;      //ѭ������i
    while(i<L.Length) {
        if(L.data[i] == x) {    //ɨ�赽��Ԫ����x��ͳ��
            mark++;
        } else{     //��ɨ�赽�����Ԫ�ز���x��ǰ��
            L.data[i-mark] = L.data[i];     //��ǰԪ��ǰ��mark��λ��
        }
        i++;
    }
    L.Length = L.Length - mark;     //˳���L�ĳ��ȼ���x��������ô��
}