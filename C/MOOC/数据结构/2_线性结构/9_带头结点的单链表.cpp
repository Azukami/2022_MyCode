#include <stdio.h>
#include <stdlib.h>
typedef struct LNode{
    int data;
    struct LNode *next;
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
void test()
{
    LinkList L;
    InitList(L);
    //ºóÐø´úÂë
}
//ÅÐ¿Õ
bool Empty(LinkList L)
{
    if(L->next == NULL) {
        return true;
    } else {
        return false;
    }
}