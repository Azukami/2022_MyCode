//设将n(n>1)个整数存放到一维数组R中。设计一个在时间和空间两方面都尽可能高效的算法
//将R中保存的序列循环左移p(0<p<n)个位置，即将R中的数据由(X0,X1,...,Xn-1)
//变换为(Xp,Xp+1,...,Xn-1,X0,X1,...,Xp-1)。要求：
//1.给出算法的基本设计思想
//2.根据设计思想，采用C或C++或Java语言描述算法，关键之处给出注释
//3.说明你所设计算法的时间复杂度和空间复杂度
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
SeqList LeftMove(SeqList L, int p)
{
    int n = L.Length;
    SeqList A;
    A.Length = p;
    for(int i=0;i<A.Length;i++) {
        A.data[i] = L.data[i];
    }
    SeqList B;
    B.Length = n-p;
    for(int j=p;j<n-1;j++) {
        B.data[j] = L.data[j];
    }
    SeqList R;
    R.Length = L.Length;
    for(int k=0;k<B.Length;k++) {
        R.data[k] = B.data[k];
    }
    for(int l=p;l<n-1;l++) {
        for(int i=0;i<A.Length;i++) {
            R.data[l] = A.data[i];
        }
    }
    return R;
}