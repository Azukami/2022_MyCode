#include "3_���.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    Node *head = NULL;  //ͷָ��
    int number;
    do {
        scanf("%d", &number);
        if (number != -1) {
            //add to linked-list
            Node *p = (Node*)malloc(sizeof(Node));
            p->value = number;
            p->next = NULL; //�½���nextӦ����NULL
            //find the last��Ȼ���������ȥ
            //��Ҫ����
            Node *last = head;
            if (last != NULL) {
                while (last->next != NULL) {
                    last = last->next;
                }   //ѭ������ʱlast���������Ǹ���
            last->next = p; //����
            } else {
                head = p;
            }
        }
    } while (number != -1);
    
    return 0;
}