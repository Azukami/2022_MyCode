#include <stdlib.h>
typedef struct DNode {
    int data;
    struct DNode *next,*prior;
}DNode;
typedef struct DNode* DLinkList;
bool InitDLinkList(DLinkList &L)
{
    L=(DNode *)malloc(sizeof(DNode));
    if(L==NULL) {
        return false;
    }
    L->prior=L;
    L->next=L;
    return true;
}
//��p���֮�����s���
bool InsertNextDNode(DNode *p, DNode *s)
{
    s->next = p->next;
    p->next->prior = s;
    s->prior = p;
    p->next = s;
}