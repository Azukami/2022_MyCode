//前插操作：在结点p之前插入元素e
#include <stdlib.h>
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode;
typedef struct LNode* LinkList;
bool InsertPriorNode(LNode *p, int e)
{
    if(p==NULL) {
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if(s ==NULL) {
        return false;
    }
    s->next = p->next;
    p->next = s;            //新结点s连到p之后
    s->data = p->data;      //将p中元素复制到s中
    p->data = e;            //将p中元素覆盖为e
    return true;
}