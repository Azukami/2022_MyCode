#include <stdlib.h>
typedef struct LNode{        //���嵥����������
    int data;        //ÿ�������һ������Ԫ��
    struct LNode *next;      //ָ��ָ����һ�����
}LNode;
typedef struct LNode* LinkList;
//��ʼ��һ��ѭ��������
bool InitList(LinkList &L)
{
    L = (LNode *)malloc(sizeof(LNode));    //����һ��ͷ���
    if(L==NULL) {            //�ڴ治�㣬����ʧ��
        return false;    
    }
    L->next = L;            //ͷ���nextָ��ͷ���
    return true;
}
//�п�
bool Empty(LinkList L)
{
    if(L->next==L) {
        return true;
    } else {
        return false;
    }
}
//�жϽ��p�Ƿ�Ϊѭ��������ı�β���
bool IsTail(LinkList L, LNode *p)
{
    if(p->next==L) {
        return true;
    } else {
        return false;
    }
}