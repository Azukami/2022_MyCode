#include <stdio.h>
#include <stdlib.h>
typedef struct PolyNode *Polynomial;
struct PolyNode/*������ṹ��*/
{
    int coef;/*����ʽϵ��*/
    int expon;/*����ʽָ��*/
    Polynomial link;/*ָ����*/
};
struct PolyNode L;
Polynomial a;