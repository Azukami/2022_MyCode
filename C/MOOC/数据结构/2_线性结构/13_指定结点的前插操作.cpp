//ǰ��������ڽ��p֮ǰ����Ԫ��e
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
    p->next = s;            //�½��s����p֮��
    s->data = p->data;      //��p��Ԫ�ظ��Ƶ�s��
    p->data = e;            //��p��Ԫ�ظ���Ϊe
    return true;
}