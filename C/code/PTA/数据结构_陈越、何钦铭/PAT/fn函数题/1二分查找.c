#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0

typedef int ElementType;
typedef int Position;
typedef struct LNode *List;
struct LNode
{
    ElementType Data[MAXSIZE];
    Position Last; /*保存线性表中最后一个元素的位置*/
};

List ReadInput();/*元素从下标1开始存储*/
Position BinarySearch( List L, ElementType X);

int main()
{
    List L;
    ElementType X;
    Position P;

    L = ReadInput();
    scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}

int BinSearch(int *arr, int x, int length){
    int left = 0;
    int right = length - 1;
    int mid;
    while( left <= right) {
        mid = left + (right - left) / 2;
        if ( x < arr[mid]) {
            right = mid - 1;
        } else if(x > arr[mid]) {
            left = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}