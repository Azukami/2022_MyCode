//删除指定结点p
#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode* next;
}LNode;
typedef struct LNode* LinkList;
bool InitList(LinkList &L)
{
    LNode *L = (LNode*)malloc(sizeof(LNode));
    if(L==NULL) {
        return false;
    }
    L->next = NULL;
    return true;
}
bool DeleteNode(LNode *p)
{
    if(p==NULL) {
        return false;
    }
    LNode *q;
    q = p->next;            //令q指向*p的后继结点
    p->data=p->next->data;  //和后继结点交换数据域
    p->next=q->next;        //将*q结点从链中断开
    free(q);                //释放后继结点的存储空间
    return true;
}