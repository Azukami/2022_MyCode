#include <stdlib.h>
#define InitSize 10
typedef struct 
{
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
void Reverse(SeqList &L)
{
    int temp;       //辅助变量
    for(int i=0;i<L.Length/2;i++) {
        temp = L.data[i];       //交换L.data[i]与L.data[L.Length-i-1]
        L.data[i] = L.data[L.Length-i-1];
        L.data[L.Length-i-1] = temp;
    }
}