#include <stdio.h>
/*线性表链式存储实现*/
typedef struct LNode *List;
struct LNode
{
    int Data;/*int为ElementType，可以是任意类型*/
    List Next;
};

struct  Lnode L;
List PtrL;

/*求表长*/
int Length(List PtrL)
{
    List p = PtrL; /*p指向表的第一个结点*/
    int j = 0;
    while (p) {
        p = p -> Next;
        j++; /*当前p指向的是第j个结点*/
    }
    return j;
}/*时间复杂度为O(n)*/

/*查找：按序号查找——FindKth*/
List FindKth( int K, List PtrL )
{
    List p = PtrL;
    int i = 1;
    while(p != NULL && i < K ) {
        p = p -> Next;
        i++;
    }
    if (i == K ) {
        return p;/*找到第K个，返回指针*/
    } else {
        return NULL;
    }/*否则返回空*/
}/*时间复杂度为O(n)*/
/*查找：按值查找——Find*/
List Find( int X, List PtrL )/*int 为ElementType，可以是任意类型*/
{
    List p = PtrL;
    while(p != NULL && p -> Data != X ){
        p = p -> Next;
    }
    return p;
}/*时间复杂度为O(n)*/

/*插入操作实现*/
//1.先构造一个新结点，用s指向
//2.再找到链表的第i-1个结点，用p指向
//3.然后修改指针，插入结点（p之后插入新结点是s）
List Insert( int X, int i, List PtrL )/*X的int为ElementType*/
{
    List p,s;
    if( i == 1) {/*新结点插入在表头*/
        s = (List)malloc(sizeof(struct LNode));/*申请、填装结点*/
        s -> Data = X;
        s -> Next = PtrL;/*表头指针*/
        return s;
    }
    p = FindKth( i-1, PtrL );/*查找第i-1个结点*/
    if(p == NULL) {/*第i-1个不存在，不能插入*/
        printf("参数i错");
        return NULL;
    } else {
        s = (List)malloc(sizeof(struct LNode));/*申请、填装结点*/
        s -> Data = X;
        s -> Next = p -> Next; /*新结点插入在第i-1个结点的后面*/
        p -> Next = s;
        return PtrL;
    }
}/*平均查找次数为n/2，时间复杂度为O(n)*/

/*删除操作实现（删除链表的第i(1<=i<=n)个位置上的结点）*/
//1.先找到链表的第i-1个结点，用p指向
//2.再用指针s指向要被删除的结点（p的下一个结点）
//3.然后修改指针，删除s所指结点
//4.最后释放s所指结点的空间
List Delete(int i, List PtrL)
{
    List p,s;
    if(i == 1) {/*若要删除的是表的第一个结点*/
        s = PtrL;/*s指向第一个结点*/
        if (PtrL != NULL) {/*从链表中删除*/
            PtrL = PtrL -> Next;
        } else {
            return NULL;
        }
        free(s);/*释放被删除结点*/
        return PtrL;
    }
    p = FindKth(i-1, PtrL);
    if (p == NULL){
        printf("第%d个结点不存在", i-1);
        return NULL;
    } else if(p -> Next == NULL) {
        printf("第%d个结点不存在", i);
        return NULL;
    } else {
        s = p -> Next;/*s指向第i个结点*/
        p -> Next = s -> Next;/*从链表中删除*/
        free(s);/*释放被删除结点*/
        return PtrL;
    }
} /*平均查找次数为n/2，时间复杂度为O(n)*/