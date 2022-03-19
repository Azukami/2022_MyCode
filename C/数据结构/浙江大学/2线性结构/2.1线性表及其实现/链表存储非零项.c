#include <stdio.h>
#include <stdlib.h>
typedef struct PolyNode *Polynomial;
struct PolyNode/*链表结点结构体*/
{
    int coef;/*多项式系数*/
    int expon;/*多项式指数*/
    Polynomial link;/*指针域*/
};
struct PolyNode L;
Polynomial a;