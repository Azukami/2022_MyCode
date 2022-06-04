#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode *next;
}LNode;
typedef struct LNode* LinkList;
bool InitList(LinkList &L)
{
    L = NULL;
    return true;
}
bool ListInsert(LinkList &L, int i, int e)
{
    if(i<1) {
        return false;
    }
    if(i==1) {      //插入第1个结点的操作与其它结点操作不同
        LNode *s = (LNode *)malloc(sizeof(LNode));
        s->data = e;
        s->next = L;
        L = s;      //头指针指向新结点(当前链表的第一个结点)
        return true;
    }
    LNode *p;       //定义一个指向当前扫描到的结点的指针p
    int j = 1;      //当前p指向的是第j个结点，由于没有头结点，因此j的初值从1开始
    p = L;          //p指向第1个结点（注意：不是头结点）
    while(p!=NULL && j<i-1) {       //遍历链表找到第i-1个结点
        p = p->next;
        j++;
    }
    if(p==NULL) {       //i值不合法
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;        //插入成功
}