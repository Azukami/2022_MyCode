#include <stdio.h>
#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode *next;
} LNode;
typedef struct LNode* LinkList; //将LNOde*重命名为LinkList，用LinkList表示单链表的头结点，用以指明LinkList类型的变量是一个单链表
//初始化一个空的单链表
bool InitList(LinkList &L) {
    L = NULL;   //空表，暂时没有任何结点，这是为了防止内存中的脏数据
    return true;
}
void test() {
    LinkList L; //声明一个指向单链表的指针
    //初始化一个空表
    InitList(L);
    //后续代码
}
//单链表判空
bool Empty(LinkList L) {
    if (L==NULL) {
        return true;
    } else {
        return false;
    }
}
//查找单链表L中的第i个结点
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