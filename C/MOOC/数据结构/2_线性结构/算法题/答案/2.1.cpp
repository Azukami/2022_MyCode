#include <stdlib.h>
#include <stdio.h>
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int length;
}SqList;
bool Del_Min(SqList &L, int &value)
{
    //删除顺序表L中最小值元素结点，并通过引用型参数value返回其值
    //如果删除成功，返回true；否则，返回false
    if(L.length==0) {
        return false;       //表空，中止操作返回
    }
    value = L.data[0];      //设置最小值擂主
    int pos = 0;            //假定表中0号元素值最小
    for(int i=1;i<L.length;i++) {   //循环，寻找具有最小值的元素
        if(L.data[i] < value) {     //让value记忆当前具有最小值的元素
            value = L.data[i];      //打擂赢了将值存为它的值
            pos = i;                //位置存为它的位置
        }
    }
    L.data[pos] = L.data[L.length-1];   //空出的位置由最后一个元素填补
    L.length--;
    return true;        //此时，value为最小值
}