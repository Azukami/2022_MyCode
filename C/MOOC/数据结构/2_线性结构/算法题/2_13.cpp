//2018ͳ������
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
    //�Ƚϸ�������Aλ��������L��Ԫ��ֵ
    for(i=1;i<=A.Length;i++) {
        //����δ���ֵ���С������
        if(i != L.data[i-1]) {
            return i;
        } else{
            //���LΪ���������ϣ������L���Ԫ��+1��ֵ����Ϊδ���ֵ���С������
            return i+1;
        }
    }
}