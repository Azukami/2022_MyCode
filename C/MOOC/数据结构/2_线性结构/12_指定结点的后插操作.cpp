//后插操作：在p结点之后插入元素e
#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode *next;
}LNode;
typedef struct LNode* LinkList;
bool InitList(LinkList &L)
{
    LNode *L = (LNode *)malloc(sizeof(LNode));
    if(L==NULL) {
        return false;
    }
    L->next = NULL;
    return true;
}
bool InsertNextNode (LNode *p, int e)
{
    if(p==NULL) {
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if(s==NULL) {       //内存已满，分配失败
        return false;
    }
    s->data = e;        //用结点s的数据域保存数据元素e
    s->next = p->next;
    p->next = s;        //将结点s连到p之后
    return true;
}