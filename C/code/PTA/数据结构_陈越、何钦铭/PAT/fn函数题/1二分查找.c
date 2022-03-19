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
    Position Last; /*�������Ա������һ��Ԫ�ص�λ��*/
};

List ReadInput();/*Ԫ�ش��±�1��ʼ�洢*/
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