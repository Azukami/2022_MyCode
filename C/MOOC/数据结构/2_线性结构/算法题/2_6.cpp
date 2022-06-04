//从有序顺序表中删除所有其值重复的元素，使表中所有元素的值均不同
#include <stdlib.h>
#include <stdio.h>
#define InitSize 20
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
bool InitList(SeqList &L)
{
    L.data = (int *)malloc(L.MAXSIZE*sizeof(int));
    L.MAXSIZE = InitSize;
    L.Length = 0;
}
void IncreaseSize(int len, SeqList &L)
{
    int *p = L.data;
    L.data = (int *)malloc((InitSize+len)*sizeof(int));
    for(int i=0; i<L.Length; i++) {
        L.data[i] = p[i];
    }
    L.MAXSIZE = L.MAXSIZE + len;
    free(p);
}
bool DeleteRepeatElem(SeqList &L)
{
    if(L.Length==0) {
        return false;
    }
    int i;
    for(i=0;i<L.Length;i++) {
        if(L.data[i]==L.data[i+1]) {
            L.data[i+1]=L.data[i+2];
            if(L.data[i+2]==NULL) {
                L.data[i+1] = NULL;
                L.Length--;
            }
            L.Length--;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    SeqList L;
    InitList(L);
    IncreaseSize(11,L);
    DeleteRepeatElem(L);
    return 0;
}