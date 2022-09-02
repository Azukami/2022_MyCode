#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode *next;
}LNode;
typedef struct LNode* LinkList;
bool InitList(LinkList &L)
{
    L = NULL;
    return true;
}
bool ListInsert(LinkList &L, int i, int e)
{
    if(i<1) {
        return false;
    }
    if(i==1) {      //�����1�����Ĳ�����������������ͬ
        LNode *s = (LNode *)malloc(sizeof(LNode));
        s->data = e;
        s->next = L;
        L = s;      //ͷָ��ָ���½��(��ǰ����ĵ�һ�����)
        return true;
    }
    LNode *p;       //����һ��ָ��ǰɨ�赽�Ľ���ָ��p
    int j = 1;      //��ǰpָ����ǵ�j����㣬����û��ͷ��㣬���j�ĳ�ֵ��1��ʼ
    p = L;          //pָ���1����㣨ע�⣺����ͷ��㣩
    while(p!=NULL && j<i-1) {       //���������ҵ���i-1�����
        p = p->next;
        j++;
    }
    if(p==NULL) {       //iֵ���Ϸ�
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;        //����ɹ�
}