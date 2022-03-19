#include <stdio.h>

typedef struct LNode *List;
struct LNode
{
    int Data;/*int为ElementType，可以是任意类型*/
    List Next;
};

struct  Lnode L;
List PtrL;