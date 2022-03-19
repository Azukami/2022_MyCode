#include <stdio.h>

typedef struct LNode *List;/*数组实现线性表的顺序存储*/
const int MAXSIZE = 10;/*表空间大小*/
struct LNode {
    int Data[MAXSIZE];/*int为ElementType，可以为任意类型；MAXSIZE定义为数组最大长度*/
    int Last;/*用指针Last来指示线性表最后一个元素所在的位置*/
};
struct LNode L;
List PtrL;

/*初始化顺序表，即建立新表*/
List MakeEmpty()
{
    List Ptrl;
    Ptrl = (List ) malloc( sizeof(struct LNode) );
    Ptrl->Last = -1;
    return Ptrl;
}

/*顺序表的查找操作*/
int Find(int X, List PtrL )/*int为ElementType，可以为任意类型*/
{
    int i = 0;
    while(i <= PtrL -> Last && PtrL -> Data[i] != X ) {
        i = i + 1;
    }
    if (i > PtrL->Last ) {
        return -1;/*如果没找到，返回-1*/
    } else{
        return i;/*找到后返回的是存储位置*/
    }
}/*平均比较次数为(n+1)/2，平均时间性能为O(n)。*/

/*顺序表的插入操作*//*在线性表的第i(1<=i<=n+1)个位置上插入一个值为X的新元素*/
void Insert( int X, int i, List PtrL) /*int X为ElementType X，可以为任意类型*/
{
    int j;
    if (PtrL -> Last == MAXSIZE - 1) /*表空间已满，无法插入*/
    {
        printf("表满");
        return;
    }
    if( i < 1 || i > PtrL -> Last + 2 ) { /*||为逻辑运算或*/
        printf("位置不合法");
        return;
    }
    for (j = PtrL -> Last; j >= i-1; j = j - 1 ) {
        PtrL -> Data[j+1] = PtrL -> Data[j];/*将ai~an倒序向后移动*/
    }
    PtrL -> Data[i-1] = X;/*新元素插入*/
    PtrL -> Last++;/*Last仍指向最后元素*/
    return;
}/*平均移动次数为n/2，平均时间性能为O(n)。*/

/*顺序表的删除操作（删除表的第i(1<=i<=n)个位置上的元素)*/
void Delete(int i, List PtrL)
{
    int j;
    if ( i < 1 || i > PtrL -> Last + 1 ) {/*检查空表及删除位置的合法性*/
        printf("不存在第%d个元素", i);
        return;
    }
    for ( j = i; j <= PtrL -> Last; j++ ) {
        PtrL -> Data[j-1] = PtrL -> Data[j];
    }/*将ai+1~an顺序向前移动*/
    PtrL -> Last--;/*Last仍指向最后元素*/
    return;
}/*平均移动次数为(n-1)/2，平均时间性能为O(n)*/