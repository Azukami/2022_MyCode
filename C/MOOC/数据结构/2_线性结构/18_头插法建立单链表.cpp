#include <stdio.h>
#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode* next;
}LNode;
typedef struct LNode* LinkList;
bool InitList(LinkList &L)
{
    L = (LNode *)malloc(sizeof(LNode));
    if(L==NULL) {
        return false;
    }
    L->next = NULL;
    return true;
}
//��ָ�����ĺ�����
bool InsertNextNode(LNode *p, int e)
{
    if(p==NULL) {
        return false;    
    }
    LNode*s = (LNode*)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}
//��ͷ���ĵ�������ͷ�巨����������
LinkList List_HeadInsert(LinkList &L)   //������������
{
    LNode *s;       //�½��
    int x;
    L=(LinkList)malloc(sizeof(LNode));  //����ͷ���
    L->next = NULL;     //��ʼ״̬Ϊ�ձ�
    scanf("%d", &x);    //�������ֵ
    while(x!=9999) {    //����9999��ʾ����
        s = (LNode*)malloc(sizeof(LNode));  //�����½��
        s->data = x;
        s->next = L->next;
        L->next = s;    //���½�������У�LΪͷָ��
        scanf("%d", &x);
    }
    return L;
}
//����ͷ���ĵ�������ͷ�巨����������
LinkList List_HeadInsert1(LinkList &L)
{
    LNode *s;   //��ʱ���
    int x;
    L=NULL;
    scanf("%d", &x);    //�������ֵ
    while(x!=9999){     //����9999��ʾ����
        s = (LNode*)malloc(sizeof(LNode));  //�����½��
        s->data = x;
        if(L==NULL) {   //�����һ�δ����½�㣬�򽫸õ�����Ϊͷ���
            L = s;
            s->next = NULL;
        } else {        //������ǵ�һ�δ�����㣬��ֱ�ӽ��½�����ӵ�����ͷ
            s->next = L;
            L = s;
        }
        scanf("%d", &x);
    }
    return L;
}