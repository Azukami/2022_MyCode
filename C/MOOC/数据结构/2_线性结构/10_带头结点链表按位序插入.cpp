#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode *next;
}LNode;
typedef struct LNode* LinkList;
//�ڵ�i��λ�ò���Ԫ��e����ͷ��㣩
bool ListInsert(LinkList &L, int i, int e)
{
    if(i < 1) {
        return false;
    }
    LNode *p;   //ָ��pָ��ǰɨ�赽�Ľ��
    int j = 0;  //��ǰָ��pָ����ǵڼ������
    p = L;      //Lָ��ͷ��㣬ͷ����ǵ�0����㣨�������ݣ�
    while (p != NULL && j<i-1)  //ѭ���ҵ���i-1�����
    {
        p = p->next;
        j++;
    }
    if (p = NULL) {     //iֵ���Ϸ�
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;    //��s�������p֮��
    return true;    //����ɹ�
}