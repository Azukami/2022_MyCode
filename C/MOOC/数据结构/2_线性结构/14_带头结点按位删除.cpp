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
    LNode *p;   //指针p指向当前扫描到的结点
    int j = 0;  //当前p指向的是第几个结点
    p = L;      //L指向头结点，头结点是第0个结点（不存数据）
    while (p!=NULL && j<i-1) {      //遍历链表找到第i-1个结点
        p = p->next;
        j++;
    }
    if(p==NULL) {       //i值不合法
        return false;
    }
    LNode *q;
    q = p->next;        //令指针q指向被删除结点
    e = q->data;        //用e返回元素的值
    p->next = q->next;  //将q指向的第i个结点从链表中断开
    free(q);            //释放这个结点的存储空间
    return true;        //删除成功
}