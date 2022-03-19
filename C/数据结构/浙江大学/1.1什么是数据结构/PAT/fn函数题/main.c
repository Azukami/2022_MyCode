#include <stdio.h>
#define MAXSIZE 10
#define NotFound 0

typedef int Position;
typedef  struct LNode *List;
typedef int ElementType;
struct LNode
{
    ElementType Data[MAXSIZE];
    Position Last;
};

Position BinarySearch( List L, ElementType X );
int BinarySearch(List L, ElementType X) { /*数组长度为10*/
    int left = 0;
    int right = 9;
    int mid;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (X < mid) {
            right = mid - 1;
        } else if (X > mid) {
            left = mid + 1;
        } else {
            return mid;
        }
    }
    return NotFound;
}