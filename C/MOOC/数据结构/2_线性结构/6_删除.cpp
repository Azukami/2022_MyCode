#include <stdlib.h>
#include <stdio.h>
#define MaxSize 10  //定义最大长度
typedef struct {
    int data[MaxSize];
    int length;
} SqList;           //静态分配实现顺序表
void InitList(SqList &L) {
    for(int i=0; i<MaxSize; i++){
        L.data[i] = 0;
    }
    L.length = 0;
}
bool ListDelete(SqList &L, int i, int &e) {
    if (i<1 || i>L.length) {
        return false;       //判断i的范围是否有效
    }
    e = L.data[i-1];          //将被删除的元素赋值给e
    for (int j = i; j < L.length; j++) {    //将第i个位置后的元素前移
        L.data[j-1] = L.data[j];
    }
    L.length--;             //线性表长度减1
    return true;
}
int main(int argc, char const *argv[])
{
    SqList L;       //声明一个顺序表
    InitList(L);    //初始化顺序表
    //插入几个元素
    int e = -1;     //用变量e把删除的元素带回来
    if (ListDelete(L, 3, e)) {
        printf("已删除第3个元素，删除元素值为=%d\n", e);
    } else {
        printf("位序i不合法，删除失败\n");
    }
    return 0;
}
