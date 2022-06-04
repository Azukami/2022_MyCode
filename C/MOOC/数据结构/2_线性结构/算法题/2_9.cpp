//线性表(a1,a2,a3,...,an)中的元素递增有序且按顺序存储于计算机内。
//要求设计一个算法，完成用最少时间在表中查找数值为x的元素，若找到，
//则将其与后继元素相交换，若找不到，则将其插入表中并使表中元素仍递增有序
#include <stdlib.h>
#include <stdio.h>
#define InitSize 10
typedef struct  {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
//要求时间尽可能少，则应采用二分查找
int search(SeqList L, int x)
{
    int ret = -1;
    int left = 0;
    int right = L.Length-1;
    while(right > left) {
        int mid = (left+right)/2;
        if(L.data[mid]==x) {
            ret = mid;
            break;
        } else if(x<L.data[mid]) {
            right = mid-1;
        } else if(x>L.data[mid]) {
            left = mid+1;
        }
    }
    return ret; //ret是待查找元素x在表L中的数组下标，若返回-1表示查找失败
}
SeqList ExchangeAndInsert(SeqList &L, int ret)
{
    int x;
    printf("输入待查找元素x:");
    scanf("%d", &x);
    ret = search(L,x);
    //Exchange
    if(ret!=-1) {
        int temp;
        temp = L.data[ret];
        L.data[ret] = L.data[ret+1];
        L.data[ret+1] = temp;
        if(L.data[ret+1]==NULL) {
            printf("x为表末尾元素,无法交换\n");
        }
    } else if(ret == -1) {  //Insert
        int i;
        for(i=0;i<L.Length;i++) {
            if(L.data[i]<x) {
                int j;
                L.Length++;
                for(j=L.Length;j>=i;j++) {
                    L.data[j+1] = L.data[j];
                }
                L.data[i+1] = x;
            }
        }
    }
    return L;
}