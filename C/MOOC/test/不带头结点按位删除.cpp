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
bool ListDelete(LinkList &L, int i, int &e)
{
    if(i<1) {
        return false;
    }
    if(i=1){
        LNode* p;
        p = L;
        L = p->next;
        free(p);
    }
    LNode *p;
    int j = 0;
    p = L;
    while (p!=NULL && j<i-1)
    {
        p = p->next;
        j++;
    }
    if(p==NULL) {
        return false;
    }
    LNode *q;
    q = p->next;
    e = q->data;
    p->next = q->next;
    free(q);
    return true;
}