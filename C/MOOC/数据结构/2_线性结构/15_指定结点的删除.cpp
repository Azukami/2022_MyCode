//ɾ��ָ�����p
#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode* next;
}LNode;
typedef struct LNode* LinkList;
bool InitList(LinkList &L)
{
    LNode *L = (LNode*)malloc(sizeof(LNode));
    if(L==NULL) {
        return false;
    }
    L->next = NULL;
    return true;
}
bool DeleteNode(LNode *p)
{
    if(p==NULL) {
        return false;
    }
    LNode *q;
    q = p->next;            //��qָ��*p�ĺ�̽��
    p->data=p->next->data;  //�ͺ�̽�㽻��������
    p->next=q->next;        //��*q�������жϿ�
    free(q);                //�ͷź�̽��Ĵ洢�ռ�
    return true;
}