//顺序表的基本操作——插入
#define MaxSize 10  //定义最大长度
typedef struct {
    int data[MaxSize];
    int length;
} SqList;           //静态分配实现顺序表
void InitList(SqList &L) {
    for(int i=0; i<MaxSize; i++){
        L.data[i] = 0;
    }
    L.length = 0;
}
bool ListInsert(SqList &L, int i, int e)
{
    //反馈
    if (i<1 || i>L.length+1) {      //判断i的范围是否有效
        return false;
    }
    if(L.length >= MaxSize) {       //当前存储空间已满，不能插入
        return false;
    }
    for(int j=L.length; j>=i; j--) {    //将第i个元素以及之后的元素向后移
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = e;        //在位置i处放入e
    L.length++;             //表L长度加1
    return true;
}

int main(int argc, char const *argv[])
{
    SqList L;       //声明一个顺序表
    InitList(L);    //初始化顺序表
    //插入几个元素
    ListInsert(L,3,3);

    return 0;
}