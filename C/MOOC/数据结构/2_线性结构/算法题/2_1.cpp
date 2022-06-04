//从顺序表中删除具有最小值的元素并由函数返回被删除元素的值
//空出的位置由最后一个元素填补，若顺序表为空，则显示出错信息并退出运行
#include <stdlib.h>
#include <stdio.h>
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
int DeleteElem(SeqList &L)
{
    if(L.Length == 0) {
        return -1;  //顺序表为空，返回-1表示出错并退出
    }
    int i;
    int minid = 0;
    for(i=0;i<L.Length;i++) {
        if(L.data[i]<L.data[minid]) {
            minid = i;
        }
    }
    int e = L.data[i];
    L.data[minid] = L.data[L.Length-1]; //空出的位置由最后一个元素填补
    L.Length--;

    return e;   //返回被删除元素的值
}