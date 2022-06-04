//2018统考真题
#define InitSize 10
typedef struct {
    int* data;
    int MAXSIZE;
    int Length; 
}SeqList;
int FindMissMinElem(SeqList L)
{
    int n = L.Length;
    SeqList A;
    A.Length = n;
    int i;
    //比较辅助数组A位序与数组L中元素值
    for(i=1;i<=A.Length;i++) {
        //发现未出现的最小正整数
        if(i != L.data[i-1]) {
            return i;
        } else{
            //如果L为正整数集合，则输出L最大元素+1的值，即为未出现的最小正整数
            return i+1;
        }
    }
}