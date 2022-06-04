#include <stdlib.h>
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
void del_x(SeqList &L, int x)
{
    int mark = 0;   //mark记录值等于x的元素个数
    int i = 0;      //循环变量i
    while(i<L.Length) {
        if(L.data[i] == x) {    //扫描到的元素是x则统计
            mark++;
        } else{     //当扫描到的这个元素不是x则前移
            L.data[i-mark] = L.data[i];     //当前元素前移mark个位置
        }
        i++;
    }
    L.Length = L.Length - mark;     //顺序表L的长度减少x的数量那么长
}