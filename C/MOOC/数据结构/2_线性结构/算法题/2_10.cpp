//�轫n(n>1)��������ŵ�һά����R�С����һ����ʱ��Ϳռ������涼�����ܸ�Ч���㷨
//��R�б��������ѭ������p(0<p<n)��λ�ã�����R�е�������(X0,X1,...,Xn-1)
//�任Ϊ(Xp,Xp+1,...,Xn-1,X0,X1,...,Xp-1)��Ҫ��
//1.�����㷨�Ļ������˼��
//2.�������˼�룬����C��C++��Java���������㷨���ؼ�֮������ע��
//3.˵����������㷨��ʱ�临�ӶȺͿռ临�Ӷ�
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