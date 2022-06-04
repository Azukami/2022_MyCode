#include "3_结点.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    Node *head = NULL;  //头指针
    int number;
    do {
        scanf("%d", &number);
        if (number != -1) {
            //add to linked-list
            Node *p = (Node*)malloc(sizeof(Node));
            p->value = number;
            p->next = NULL; //新结点的next应当是NULL
            //find the last，然后把它接上去
            //需要遍历
            Node *last = head;
            if (last != NULL) {
                while (last->next != NULL) {
                    last = last->next;
                }   //循环结束时last就是最后的那个了
            last->next = p; //链接
            } else {
                head = p;
            }
        }
    } while (number != -1);
    
    return 0;
}