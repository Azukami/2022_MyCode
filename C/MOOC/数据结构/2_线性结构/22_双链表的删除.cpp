#include <stdlib.h>
typedef struct DNode{
    int data;
    struct DNode *prior,*next;
}DNode;
typedef struct DNode* DLinkList;
//删除p结点的后继结点
bool DeleteNextDNode(DNode *p)
{
    if(p==NULL) {
        return false;
    }
    DNode *q = p->next; //找到p的后继结点q
    if(q==NULL) {       //p没有后继结点
        return false;
    }
    p->next = q->next;
    if(q->next!=NULL) { //q结点不是最后一个结点
        q->next->prior = p;
    }
    free(q);        //释放结点空间
    return true;
}
void DestoryList(DLinkList &L)
{
    //循环释放各个数据结点
    while(L->next != NULL) {
        DeleteNextDNode(L);
    }
    free(L);        //释放头结点，销毁表时才能删除头结点
    L=NULL;         //头指针指向NULL
}