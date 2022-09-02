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
bool ListDelete(LinkList &L, int i, int &e)
{
    if(i<1) {
        return false;
    }
    LNode *p;   //ָ��pָ��ǰɨ�赽�Ľ��
    int j = 0;  //��ǰpָ����ǵڼ������
    p = L;      //Lָ��ͷ��㣬ͷ����ǵ�0����㣨�������ݣ�
    while (p!=NULL && j<i-1) {      //���������ҵ���i-1�����
        p = p->next;
        j++;
    }
    if(p==NULL) {       //iֵ���Ϸ�
        return false;
    }
    LNode *q;
    q = p->next;        //��ָ��qָ��ɾ�����
    e = q->data;        //��e����Ԫ�ص�ֵ
    p->next = q->next;  //��qָ��ĵ�i�����������жϿ�
    free(q);            //�ͷ�������Ĵ洢�ռ�
    return true;        //ɾ���ɹ�
}