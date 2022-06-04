#include "3_结点.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct _list {
    Node* head;
} List;
//用自己定义的结构List来代表整个链表，可以方便各种扩充
void add(List* pList, int number);
int main(int argc, char const *argv[])
{
    List list;
    int number;
    list.head = NULL;   //头指针
    do {
        scanf("%d", &number);
        if (number != -1) {
            add(&list,number);
        }
    } while (number != -1);
    //对list的遍历
    Node *p;
    for (p=list.head;p;p=p->next) {   //在链表操作中非常常见的经典写法,结束的条件是p还存在
        printf("%d\t", p->value);
    }
    printf("\n");
    return 0;
}
void add(List* pList, int number)
{
    //add to linked-list
    Node *p = (Node*)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL; //新结点的next应当是NULL
    //find the last，然后把它接上去
    //需要遍历
    Node *last = pList->head;
    if (last != NULL) {
        while (last->next != NULL) {
            last = last->next;
        }   //循环结束时last就是最后的那个了
        last->next = p; //链接
    } else {
        pList->head = p;
    }
}