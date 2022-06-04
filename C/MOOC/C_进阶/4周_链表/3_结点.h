#ifndef _NODE_H_
#define _NODE_H_

typedef struct _node {
    int value;
    struct _node *next;
} Node;
//指针指向的结点还是这个类型的变量，因此指针的类型是struct _node
#endif