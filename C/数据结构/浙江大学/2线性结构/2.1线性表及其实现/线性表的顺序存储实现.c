#include <stdio.h>

typedef struct LNode *List;/*����ʵ�����Ա��˳��洢*/
struct LNode {
    int Data[10];/*intΪElementType������Ϊ�������ͣ�10ΪMAXSIZE������Ϊ������󳤶�*/
    int Last;/*��ָ��Last��ָʾ���Ա����һ��Ԫ�����ڵ�λ��*/
};
struct LNode L;
List PtrL;