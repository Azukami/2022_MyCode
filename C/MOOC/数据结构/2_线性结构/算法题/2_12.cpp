//2013ͳ������
#define InitSize 10
typedef struct{
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
//�����������Ԫ��λ��
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
//����Ԫ��
int Majority(SeqList &L)
{
    //ѡ������
    for (int i=L.Length-1; i>0; i--) {
        int maxid = Max(L);
        //swap L.data[maxid], L.data[len-1]������
        int t = L.data[maxid];
        L.data[maxid] = L.data[i];
        L.data[i] = t;     //�������
    }
    //����λ��
    int median;
    median = L.data[L.Length/2];
    int cnt;
    for(int j=0;j<L.Length;j++) {
        if(L.data[j]==median) {
            cnt++;
        }
    }
    //����Ԫ�������������Ԫ�������-1
    if(cnt>L.Length/2) {
        return cnt;
    } else {
        return -1;
    }
}