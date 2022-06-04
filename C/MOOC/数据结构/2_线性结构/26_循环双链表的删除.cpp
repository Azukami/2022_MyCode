#include <stdlib.h>
typedef struct DNode {
    int data;
    struct DNode *next,*prior;
}DNode;
typedef struct DNode* DLinkList;
bool InitDLinkList(DLinkList &L)
{
    L = (DNode *)malloc(sizeof(DNode));
    if(L==NULL) {
        return false;
    }
    L->next = L;
    L->prior = L;
    return true;
}
//删除p的后继结点q
bool DeleteNextDNode(DNode *p, DNode *q)
{
    p->next=q->next;
    q->next->prior = p;
    free(q);
}