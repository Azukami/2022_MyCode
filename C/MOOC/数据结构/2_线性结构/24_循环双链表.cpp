#include <stdlib.h>
typedef struct DNode {
    int data;
    struct DNode *next,*prior;
}DNode;
typedef struct DNode* DLinkList;
//��ʼ���յ�ѭ��˫����
bool InitDLinkList(DLinkList &L)
{
    L = (DNode *)malloc(sizeof(DNode));     //����һ��ͷ���
    if(L==NULL) {       //�ڴ治�������ʧ��
        return false;
    }
    L->prior = L;   //ͷ����priorָ��ͷ���
    L->next = L;    //ͷ����nextָ��ͷ���
    return true;
}
void testDLinkList()
{
    //��ʼ��ѭ��˫����
    DLinkList L;
    InitDLinkList(L);
    //��������
}
//�п�
bool Empty(DLinkList L)
{
    if(L->next == L) {
        return true;
    }else {
        return false;
    }
}
//�жϽ��p�Ƿ�Ϊѭ��������ı�β���
bool IsTail(DLinkList L, DNode *p)
{
    if(p->next == L) {
        return true;
    } else {
        return false;
    }
}