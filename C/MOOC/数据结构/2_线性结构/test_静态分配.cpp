#include <stdio.h>
#include <stdlib.h>
//静态分配
#define MaxSize 20
typedef struct 
{
    int data[MaxSize];
    int length;
}SqList;
//初始化这个顺序表
void InitList(SqList &L)
{
    int i;
    for(i=0;i<MaxSize;i++) {
        L.data[i] = 0;
    }
    L.length = 0;
}
//插入
void ListInsert(SqList &L, int i, int e)
{
    int j;
    for(j=L.length; j>=i; j--)
    {
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = e;
    L.length ++;
}
int main(int argc, char const *argv[])
{
    SqList L;
    InitList(L);
    for(int i=0;i<MaxSize;i++) {
        printf("%d\n", L.data[i]);
    }

    return 0;
}