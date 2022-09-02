#include <stdlib.h>
typedef struct DNode{
    int data;
    struct DNode *prior,*next;
}DNode;
typedef struct DNode* DLinkList;
//ɾ��p���ĺ�̽��
bool DeleteNextDNode(DNode *p)
{
    if(p==NULL) {
        return false;
    }
    DNode *q = p->next; //�ҵ�p�ĺ�̽��q
    if(q==NULL) {       //pû�к�̽��
        return false;
    }
    p->next = q->next;
    if(q->next!=NULL) { //q��㲻�����һ�����
        q->next->prior = p;
    }
    free(q);        //�ͷŽ��ռ�
    return true;
}
void DestoryList(DLinkList &L)
{
    //ѭ���ͷŸ������ݽ��
    while(L->next != NULL) {
        DeleteNextDNode(L);
    }
    free(L);        //�ͷ�ͷ��㣬���ٱ�ʱ����ɾ��ͷ���
    L=NULL;         //ͷָ��ָ��NULL
}