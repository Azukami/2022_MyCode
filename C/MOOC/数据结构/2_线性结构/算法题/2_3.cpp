//�Գ���Ϊn��˳���L����дһ��ʱ�临�Ӷ�ΪO(n)���ռ临�Ӷ�ΪO(1)���㷨
//���㷨ɾ�����Ա�������ֵΪx��Ԫ��
#include <stdlib.h>
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
SeqList DeleteElemX(SeqList &L, int x)
{
    int i;
    for(i=0;i<L.Length-1;i++) {
        if(L.data[i] == x) {
            L.data[i] = L.data[i+1];
            L.Length--;
        }
    }
    return L;
}