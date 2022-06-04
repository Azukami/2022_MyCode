#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode* next;
}LNode;
typedef struct LNode* LinkList;
LinkList nizhi(LinkList &L, int i)
{
    int j;
    LNode *p;
    LNode *r;
    for(i>0;;i--) {
        while(p!=NULL && j<i-1) {
            p = p->next;
            j++;    
        }
        r = p->next;
        p->next = NULL;
        r->next = L->next;
        L->next = r;
        r = p;
    }
}