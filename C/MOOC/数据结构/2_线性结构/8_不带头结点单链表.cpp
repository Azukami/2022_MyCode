#include <stdio.h>
#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode *next;
} LNode;
typedef struct LNode* LinkList; //��LNOde*������ΪLinkList����LinkList��ʾ�������ͷ��㣬����ָ��LinkList���͵ı�����һ��������
//��ʼ��һ���յĵ�����
bool InitList(LinkList &L) {
    L = NULL;   //�ձ���ʱû���κν�㣬����Ϊ�˷�ֹ�ڴ��е�������
    return true;
}
void test() {
    LinkList L; //����һ��ָ�������ָ��
    //��ʼ��һ���ձ�
    InitList(L);
    //��������
}
//�������п�
bool Empty(LinkList L) {
    if (L==NULL) {
        return true;
    } else {
        return false;
    }
}
//���ҵ�����L�еĵ�i�����
LNode *GetElem(LinkList L, int i)
{
    int j = 1;
    LNode *p=L->next;
    if(i==0) {
        return L;
    }
    if(i<1) {
        return NULL;
    }
    while (p!=NULL && j<i) {
        p=p->next;
        j++;
    }
    return p;
}