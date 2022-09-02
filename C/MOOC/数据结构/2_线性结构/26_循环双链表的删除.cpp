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
//ɾ��p�ĺ�̽��q
bool DeleteNextDNode(DNode *p, DNode *q)
{
    p->next=q->next;
    q->next->prior = p;
    free(q);
}