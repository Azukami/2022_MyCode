//����������p���֮�����Ԫ��e
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
    if(s==NULL) {       //�ڴ�����������ʧ��
        return false;
    }
    s->data = e;        //�ý��s�������򱣴�����Ԫ��e
    s->next = p->next;
    p->next = s;        //�����s����p֮��
    return true;
}