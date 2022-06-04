#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode* next;
}LNode;
typedef struct LNode* LinkList;
bool InitList(LinkList &L)
{
    L = (LNode *)malloc(sizeof(LNode));
    if(L==NULL) {
        return false;
    }
    L->next = NULL;
    return true;
}
bool Empty(LinkList L)
{
    if(L->next==NULL) {
        return true;
    } else{
        return false;
    }
}
bool LinkInsert(LinkList &L, int i, int e)
{
    if(i<1) {
        return false;
    }
    LNode* p;
    int j = 0;
    p = L;
    while(p!=NULL && j<i-1) {
        p=p->next;
        j++;
    }
    if(p==NULL) {
        return false;
    }
    LNode* s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}