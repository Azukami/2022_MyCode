#include <stdlib.h>
typedef struct DNode {
    int data;
    struct DNode *next,*prior;
}DNode;
typedef struct DNode* DLinkList;
//初始化空的循环双链表
bool InitDLinkList(DLinkList &L)
{
    L = (DNode *)malloc(sizeof(DNode));     //分配一个头结点
    if(L==NULL) {       //内存不足则分配失败
        return false;
    }
    L->prior = L;   //头结点的prior指向头结点
    L->next = L;    //头结点的next指向头结点
    return true;
}
void testDLinkList()
{
    //初始化循环双链表
    DLinkList L;
    InitDLinkList(L);
    //后续代码
}
//判空
bool Empty(DLinkList L)
{
    if(L->next == L) {
        return true;
    }else {
        return false;
    }
}
//判断结点p是否为循环单链表的表尾结点
bool IsTail(DLinkList L, DNode *p)
{
    if(p->next == L) {
        return true;
    } else {
        return false;
    }
}