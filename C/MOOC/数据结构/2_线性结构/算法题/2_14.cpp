//2020统考真题
#define InitSize 10
#define MaxInt 2147483647
typedef struct {
    int* data;
    int MAXSIZE;
    int Length;
}SeqList;
int Abs(int a, int b)
{
    int abs;
    if((a-b)>=0) {
        abs = (a-b);
    } else {
        abs = -(a-b);
    }
    return abs;
}
int MinElem(int a, int b, int c)
{
    if(a<b && a<c) {
        return a;
    } else if(b<a && b<c) {
        return b;
    } else if(c<a && c<b) {
        return c;
    }
}
int FindMinRange(SeqList a, SeqList b, SeqList c)
{
    //循环计算D
    int i = 0;
    int j = 0;
    int k = 0;
    int minD = MaxInt;
    int D;
    while(i<a.Length && j<b.Length && k<c.Length && minD>0) {
        D = Abs(a.data[i],b.data[j]) + Abs(b.data[j],c.data[k]) + Abs(c.data[k],a.data[i]);
        //D<minD时，更新minD
        if(D < minD) {
            minD = D;
        }
        if(a.data[i] == MinElem(a.data[i],b.data[j],c.data[k])) {
            i++;
        } else if(b.data[j] == MinElem(a.data[i],b.data[j],c.data[k])) {
            j++;
        } else if(c.data[k] == MinElem(a.data[i],b.data[j],c.data[k])) {
            k++;
        }
    }
    return minD;
}