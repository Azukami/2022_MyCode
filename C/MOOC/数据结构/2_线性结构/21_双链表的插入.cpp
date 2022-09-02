#include <stdlib.h>
typedef struct DNode {
    int data;
    struct DNode *prior,*next;
}DNode;
typedef struct DNode* DLinkList;
//��p���֮���ٲ���s���
bool InsertNextDNode(DNode *p, DNode *s)
{
    if(p==NULL || s==NULL) {    //�Ƿ�����
        return false;
    }
    s->next = p->next;
    if(p->next != NULL) {       //���p����к�̽��
        p->next->prior = s;
    }
    s->prior = p;
    p->next = s;
    return true;
}