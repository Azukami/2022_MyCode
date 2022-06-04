#define InitSize 10     //顺序表的初始长度
typedef struct {
    int *data;          //指示动态分配数组的指针
    int MaxSize;        //顺序表的最大容量
    int length;         //顺序表的当前长度
} SqList;               //顺序表的类型定义（动态分配模式）

//在顺序表L中查找第一个元素值等于e的元素，并返回其位序
int LocateElem(SqList L, int e)
{
    for (int i = 0; i < L.length; i++)
    {
        if(L.data[i]==e) {
            return i+1;         //数组下标为i的元素值为e，返回其位序i+1
        }
    return 0;                   //退出循环，表明查找失败
    }
}