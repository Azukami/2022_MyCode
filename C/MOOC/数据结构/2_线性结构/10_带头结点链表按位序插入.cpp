#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode *next;
}LNode;
typedef struct LNode* LinkList;
//在第i个位置插入元素e（带头结点）
bool ListInsert(LinkList &L, int i, int e)
{
    if(i < 1) {
        return false;
    }
    LNode *p;   //指针p指向当前扫描到的结点
    int j = 0;  //当前指针p指向的是第几个结点
    p = L;      //L指向头结点，头结点是第0个结点（不存数据）
    while (p != NULL && j<i-1)  //循环找到第i-1个结点
    {
        p = p->next;
        j++;
    }
    if (p = NULL) {     //i值不合法
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;    //将s结点连到p之后
    return true;    //插入成功
}