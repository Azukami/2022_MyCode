#include "3_���.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct _list {
    Node* head;
} List;
//���Լ�����ĽṹList�����������������Է����������
void add(List* pList, int number);
int main(int argc, char const *argv[])
{
    List list;
    int number;
    list.head = NULL;   //ͷָ��
    do {
        scanf("%d", &number);
        if (number != -1) {
            add(&list,number);
        }
    } while (number != -1);
    //��list�ı���
    Node *p;
    for (p=list.head;p;p=p->next) {   //����������зǳ������ľ���д��,������������p������
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
    p->next = NULL; //�½���nextӦ����NULL
    //find the last��Ȼ���������ȥ
    //��Ҫ����
    Node *last = pList->head;
    if (last != NULL) {
        while (last->next != NULL) {
            last = last->next;
        }   //ѭ������ʱlast���������Ǹ���
        last->next = p; //����
    } else {
        pList->head = p;
    }
}