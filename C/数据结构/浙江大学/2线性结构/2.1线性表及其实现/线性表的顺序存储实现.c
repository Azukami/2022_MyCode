#include <stdio.h>

typedef struct LNode *List;/*数组实现线性表的顺序存储*/
struct LNode {
    int Data[10];/*int为ElementType，可以为任意类型；10为MAXSIZE，定义为数组最大长度*/
    int Last;/*用指针Last来指示线性表最后一个元素所在的位置*/
};
struct LNode L;
List PtrL;