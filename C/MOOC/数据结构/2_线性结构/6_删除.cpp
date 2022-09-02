#include <stdlib.h>
#include <stdio.h>
#define MaxSize 10  //������󳤶�
typedef struct {
    int data[MaxSize];
    int length;
} SqList;           //��̬����ʵ��˳���
void InitList(SqList &L) {
    for(int i=0; i<MaxSize; i++){
        L.data[i] = 0;
    }
    L.length = 0;
}
bool ListDelete(SqList &L, int i, int &e) {
    if (i<1 || i>L.length) {
        return false;       //�ж�i�ķ�Χ�Ƿ���Ч
    }
    e = L.data[i-1];          //����ɾ����Ԫ�ظ�ֵ��e
    for (int j = i; j < L.length; j++) {    //����i��λ�ú��Ԫ��ǰ��
        L.data[j-1] = L.data[j];
    }
    L.length--;             //���Ա��ȼ�1
    return true;
}
int main(int argc, char const *argv[])
{
    SqList L;       //����һ��˳���
    InitList(L);    //��ʼ��˳���
    //���뼸��Ԫ��
    int e = -1;     //�ñ���e��ɾ����Ԫ�ش�����
    if (ListDelete(L, 3, e)) {
        printf("��ɾ����3��Ԫ�أ�ɾ��Ԫ��ֵΪ=%d\n", e);
    } else {
        printf("λ��i���Ϸ���ɾ��ʧ��\n");
    }
    return 0;
}
