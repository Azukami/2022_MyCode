#include <stdlib.h>
typedef struct DNode{
    int data;
    struct DNode *prior, *next;
}DNode;
typedef struct DNode* DLinkList;
//��ʼ��˫����
bool InitDLinkList(DLinkList &L)
{
    L=(DNode*)malloc(sizeof(DNode));    //����һ��ͷ���
    if(L==NULL) {           //�ڴ治�㣬����ʧ��
        return false;
    }
    L->prior = NULL;        //ͷ����priorʼ��ָ��NULL
    L->next = NULL;         //ͷ���֮����ʱ��û�н��
    return true;
}
void testDLinkList()
{
    //��ʼ��˫����
    DLinkList L;
    InitDLinkList(L);
    //��������
}
//�ж�˫�����Ƿ�Ϊ�գ���ͷ��㣩
bool Empty(DLinkList L)
{
    if(L->next==NULL) {
        return true;
    } else {
        return false;
    }
}