#include <stdio.h>
#include <stdlib.h>
#define InitSize 10     //初始长度
typedef struct {
    int *data;          //指向表起始位置的指针
    int MaxSize;        //最大长度
    int length;         //当前长度
} SeqList;
//初始化顺序表
void InitList(SeqList &L)
{
    L.data = (int *)malloc(InitSize*sizeof(int));
    L.length = 0;
    L.MaxSize = InitSize;
}
//动态增加顺序表长度
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