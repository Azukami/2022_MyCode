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
//对指定结点的后插操作
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
//带头结点的单链表用头插法建立单链表
LinkList List_HeadInsert(LinkList &L)   //逆向建立单链表
{
    LNode *s;       //新结点
    int x;
    L=(LinkList)malloc(sizeof(LNode));  //创建头结点
    L->next = NULL;     //初始状态为空表
    scanf("%d", &x);    //输入结点的值
    while(x!=9999) {    //输入9999表示结束
        s = (LNode*)malloc(sizeof(LNode));  //创建新结点
        s->data = x;
        s->next = L->next;
        L->next = s;    //将新结点插入表中，L为头指针
        scanf("%d", &x);
    }
    return L;
}
//不带头结点的单链表用头插法建立单链表
LinkList List_HeadInsert1(LinkList &L)
{
    LNode *s;   //临时结点
    int x;
    L=NULL;
    scanf("%d", &x);    //输入结点的值
    while(x!=9999){     //输入9999表示结束
        s = (LNode*)malloc(sizeof(LNode));  //创建新结点
        s->data = x;
        if(L==NULL) {   //如果第一次创建新结点，则将该点设置为头结点
            L = s;
            s->next = NULL;
        } else {        //如果不是第一次创建结点，则直接将新结点连接到链表头
            s->next = L;
            L = s;
        }
        scanf("%d", &x);
    }
    return L;
}