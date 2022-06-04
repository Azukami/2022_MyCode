//一个长度为L(L≥1)的升序序列S，处在第[L/2]个位置的数称为S的中位数。
//例如，若序列S1=(11,13,15,17,19),则S1的中位数是15，两个序列的中位数是含它们
//所有元素的升序序列的中位数。例如，若S2=(2,4,6,8,10),则S1和S2的中位数是11.
//现在有两个等长升序序列A和B，试设计一个在时间和空间两方面都尽可能高效的算法，
//找出两个序列A和B的中位数。要求：
//1.给出算法的基本设计思想
//2.根据设计思想，采用C或C++或Java语言描述算法，关键之处给出注释
//说明你所设计算法的时间复杂度和空间复杂度
#define INITSIZE 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
int Max(int a, int b)
{
    int max;
    if(a>=b) {
        max = a;
    } else{
        max = b;
    }
    return max;
}
int Min(int a, int b)
{
    int min;
    if(a<=b) {
        min = a;
    } else{
        min = b;
    }
    return min;
}
int Median(SeqList a, SeqList b)
{
    SeqList c;
    //新表c长等于旧的两个表长之和
    c.Length = a.Length+b.Length;
    //将两个表中小的元素放到新表中
    for(int i=0;i<Min(a.Length,b.Length);i++) {
        for(int p=0;p<Min(a.Length,b.Length);p++) {
            c.data[i] = Min(a.data[i],b.data[p]);
        }
    }
    //将较长表的剩余部分添加到新表中
    for(int j=Min(a.Length,b.Length);j<Max(a.Length,b.Length);j++) {
        if(a.Length>b.Length) {
            c.data[j]=a.data[j];
        } else if(b.Length>a.Length) {
            c.data[j]=b.data[j];
        }
    }
    //求新表中位数
    int median;
    median = c.data[c.Length/2];
    return median;
}