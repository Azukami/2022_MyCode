#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
bool Del_s_t(SeqList &L, int s, int t)
{
    //ɾ������˳���L��ֵ�ڸ���ֵs��t֮�������Ԫ��
    int i;
    int j;
    if(s>=t || L.Length==0) {
        return false;
    }
    for(i=0;i<L.Length;i++){
        //Ѱ��ֵ��s�ĵ�һ��Ԫ��
        if(L.data[i]>=s){
            break;
        }
    } 
    if(i>=L.Length) {
        return false;   //����Ԫ��ֵ��С��s���򷵻�
    }
    for(j=i;j<L.Length;j++) {
        //Ѱ��ֵ>t�ĵ�һ��Ԫ��
        if(L.data[j]>t){
            break;
        }
    }
    while(j<L.Length) {
        L.data[i] = L.data[j];  //ǰ�ƣ����ɾ��Ԫ��λ��
        i++;
        j++;
    }
    L.Length = i+1;
    return true;
}