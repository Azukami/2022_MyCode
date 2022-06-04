#include <stdlib.h>
typedef struct LNode {
    int data;
    struct LNode *next;
}LNode;
typedef struct LNode* LinkList;
bool InitList(LinkList &L)
{
    LNode* L = (LNode *)malloc(sizeof(LNode));
    if(L==NULL) {
        return false;    
    }
    L->next = NULL;
    return true;
}
//按位查找第i个结点
LNode *ListSearch(LinkList L, int i)
{
    if(i<1) {
        return NULL;    
    }
    LNode *p;
    p = L;
    int j = 0;
    while(p!=NULL && j<i) {
        p = p->next;
        j++;    
    }
    return p;
}
//按值查找数据元素为e的结点
LNode *LocateElem(LinkList L, int e)
{
    LNode* p;
    p = L->next;
    while(p!=NULL && p->data!=e) {
        p=p->next;    
    }
    return p;
}
//带头结点求表的长度
int LengthList(LinkList L)
{
    int cnt = 0;
    LNode* p = L;
    while(p->next!=NULL) {
        p = p->next;
        cnt++;
    }
    return cnt;
}
//不带头结点求表的长度
int LengthList(LinkList L)
{
    int cnt = 0;
    LNode *p = L;
    while(p!=NULL) {
        p = p->next;
        cnt++;    
    }
    return cnt;
}