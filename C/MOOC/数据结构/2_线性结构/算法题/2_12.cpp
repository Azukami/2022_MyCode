//2013统考真题
#define InitSize 10
typedef struct{
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
//求数组中最大元素位序
int Max(SeqList L)
{
    int maxid = 0;
    for (int i = 1; i<L.Length; i++) {
        if(L.data[i] > L.data[maxid]) {
            maxid = i;
        }
    }
    return maxid;
}
//求主元素
int Majority(SeqList &L)
{
    //选择排序
    for (int i=L.Length-1; i>0; i--) {
        int maxid = Max(L);
        //swap L.data[maxid], L.data[len-1]做交换
        int t = L.data[maxid];
        L.data[maxid] = L.data[i];
        L.data[i] = t;     //交换完成
    }
    //求中位数
    int median;
    median = L.data[L.Length/2];
    int cnt;
    for(int j=0;j<L.Length;j++) {
        if(L.data[j]==median) {
            cnt++;
        }
    }
    //有主元素则输出，无主元素则输出-1
    if(cnt>L.Length/2) {
        return cnt;
    } else {
        return -1;
    }
}