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
//在第i个位置插入元素e（带头结点）
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
//后插操作的实现
bool InsertNextNode(LNode *p, int e)
{
    if (p==NULL) {
        return false;    
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if(s==NULL) {
        return false;    //内存分配失败    
    }
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}
//带头结点链表尾插法建立单链表
LinkList List_TailInsert(LinkList &L)    //正向建立单链表
{
    int x;        //设ElementType为整型
    L=(LinkList)malloc(sizeof(LNode));    //建立头结点L
    LNode *s, *r = L;    //表头指针s和表尾指针r初始状态下都指向头结点
    scanf("%d", &x);        //输入结点的值
    while(x!=9999) {        //输入9999表示插入结束
        s=(LNode*)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;        //表尾指针指向新的表尾结点
        scanf("%d", &x);
    }
    r->next = NULL;        //表为节点指针置空
    return L;
}
//不带头结点链表尾插法建立单链表
LinkList List_TailInsert1(LinkList &L)
{
    int x;
    LNode *s;   //临时结点s
    LNode *r;   //表尾指针r
    L = NULL;
    r = L;
    scanf("%d", &x);    //输入结点的值
    while(x!=9999) {
        s=(LNode *)malloc(sizeof(LNode));   //创建新结点
        s->data = x;
        if(L==NULL) {   //创建链表的第一个结点
            L = s;
            r = s;
            s->next = NULL;
        } else {
            r->next = s;    //把指针r指向的结点的next指针指向s这个结点
            r = s;          //再让r指针指向s这个结点
        }
        scanf("%d", &x);
    }
    r->next = NULL; //尾结点指针为空
    return L;
}