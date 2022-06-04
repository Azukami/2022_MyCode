//从有序顺序表中删除其值在给定值s与t之间（要求s<t）的所有元素
//如果s或t不合理或顺序表为空，则显示出错信息退出运行
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
bool DeleteElemStoT(SeqList &L, int s, int t)
{
    int i;
    int a1;
    for(i=0;i<L.Length-1;i++) {
        if(L.data[i] > s) {
            a1 = i;
            break;
        }
    }
    int j;
    int a2;
    for(j=0;j<L.Length-1;j++) {
        if(L.data[j] < t) {
            a2 = j;
            break;
        }
    }
    for(a1=i;a2=j;a1++,a2++) {
        L.data[a1]=L.data[a2+1];
    }

    return true;
}