#include <stdio.h>
#include <stdlib.h>
#define InitSize 10     //��ʼ����
typedef struct {
    int *data;          //ָ�����ʼλ�õ�ָ��
    int MaxSize;        //��󳤶�
    int length;         //��ǰ����
} SeqList;
//��ʼ��˳���
void InitList(SeqList &L)
{
    L.data = (int *)malloc(InitSize*sizeof(int));
    L.length = 0;
    L.MaxSize = InitSize;
}
//��̬����˳�����
void IncreaseSize(int len, SeqList &L)
{
    int *p = L.data;
    L.data = (int *)malloc((InitSize+len)*sizeof(int));
    for(int i=0; i<L.length; i++) {
        L.data[i] = p[i];
    }
    L.MaxSize = L.MaxSize + len;
    free(p);
}
int main(int argc, char const *argv[])
{
    SeqList L;
    InitList(L);
    IncreaseSize(5,L);

    return 0;
}