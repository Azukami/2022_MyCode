#include <stdlib.h>
typedef struct DNode {
    int data;
    struct DNode *prior,*next;
}DNode;
typedef struct DNode* DLinkList;
//在p结点之后再插入s结点
bool InsertNextDNode(DNode *p, DNode *s)
{
    if(p==NULL || s==NULL) {    //非法参数
        return false;
    }
    s->next = p->next;
    if(p->next != NULL) {       //如果p结点有后继结点
        p->next->prior = s;
    }
    s->prior = p;
    p->next = s;
    return true;
}