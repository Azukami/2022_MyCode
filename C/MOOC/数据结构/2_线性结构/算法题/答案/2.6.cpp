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
    int j;      //i存储第一个不相同的元素，j为工作指针
    for(i=0,j=1;j<L.Length;j++) {
        if(L.data[i] != L.data[j]) {    //查找下一个与上个元素值不同的元素
            L.data[++i]=L.data[j];      //找到后，将元素前移
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
        if(L.data[i]==L.data[i+1]) {    //找到待删除元素后计数器自增
            mark++;
        }else{
            L.data[i] = L.data[i+mark]; //将元素前移mark个位置
        }
    }
    L.Length -= mark;
    return true;
}