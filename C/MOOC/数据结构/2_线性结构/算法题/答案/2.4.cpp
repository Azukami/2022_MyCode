#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
bool Del_s_t(SeqList &L, int s, int t)
{
    //删除有序顺序表L中值在给定值s与t之间的所有元素
    int i;
    int j;
    if(s>=t || L.Length==0) {
        return false;
    }
    for(i=0;i<L.Length;i++){
        //寻找值≥s的第一个元素
        if(L.data[i]>=s){
            break;
        }
    } 
    if(i>=L.Length) {
        return false;   //所有元素值均小于s，则返回
    }
    for(j=i;j<L.Length;j++) {
        //寻找值>t的第一个元素
        if(L.data[j]>t){
            break;
        }
    }
    while(j<L.Length) {
        L.data[i] = L.data[j];  //前移，填补被删除元素位置
        i++;
        j++;
    }
    L.Length = i+1;
    return true;
}