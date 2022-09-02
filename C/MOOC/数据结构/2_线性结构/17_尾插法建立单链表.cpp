#include <stdlib.h>
#include <stdio.h>
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
//�ڵ�i��λ�ò���Ԫ��e����ͷ��㣩
bool ListInsert(LinkList &L, int i, int e)
{
    if(i<1) {
        return false;
    }
    int j = 0;
    LNode *p = L;
    while (p!=NULL && j<i-1) {
        p = p->next;
        j++;
    }
    if(p==NULL) {
        return false;
    }
    LNode* s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    s = p->next;
    return true;
}
//��������ʵ��
bool InsertNextNode(LNode *p, int e)
{
    if (p==NULL) {
        return false;    
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if(s==NULL) {
        return false;    //�ڴ����ʧ��    
    }
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}
//��ͷ�������β�巨����������
LinkList List_TailInsert(LinkList &L)    //������������
{
    int x;        //��ElementTypeΪ����
    L=(LinkList)malloc(sizeof(LNode));    //����ͷ���L
    LNode *s, *r = L;    //��ͷָ��s�ͱ�βָ��r��ʼ״̬�¶�ָ��ͷ���
    scanf("%d", &x);        //�������ֵ
    while(x!=9999) {        //����9999��ʾ�������
        s=(LNode*)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;        //��βָ��ָ���µı�β���
        scanf("%d", &x);
    }
    r->next = NULL;        //��Ϊ�ڵ�ָ���ÿ�
    return L;
}
//����ͷ�������β�巨����������
LinkList List_TailInsert1(LinkList &L)
{
    int x;
    LNode *s;   //��ʱ���s
    LNode *r;   //��βָ��r
    L = NULL;
    r = L;
    scanf("%d", &x);    //�������ֵ
    while(x!=9999) {
        s=(LNode *)malloc(sizeof(LNode));   //�����½��
        s->data = x;
        if(L==NULL) {   //��������ĵ�һ�����
            L = s;
            r = s;
            s->next = NULL;
        } else {
            r->next = s;    //��ָ��rָ��Ľ���nextָ��ָ��s������
            r = s;          //����rָ��ָ��s������
        }
        scanf("%d", &x);
    }
    r->next = NULL; //β���ָ��Ϊ��
    return L;
}