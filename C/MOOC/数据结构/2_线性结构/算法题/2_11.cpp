//һ������ΪL(L��1)����������S�����ڵ�[L/2]��λ�õ�����ΪS����λ����
//���磬������S1=(11,13,15,17,19),��S1����λ����15���������е���λ���Ǻ�����
//����Ԫ�ص��������е���λ�������磬��S2=(2,4,6,8,10),��S1��S2����λ����11.
//�����������ȳ���������A��B�������һ����ʱ��Ϳռ������涼�����ܸ�Ч���㷨��
//�ҳ���������A��B����λ����Ҫ��
//1.�����㷨�Ļ������˼��
//2.�������˼�룬����C��C++��Java���������㷨���ؼ�֮������ע��
//˵����������㷨��ʱ�临�ӶȺͿռ临�Ӷ�
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
    //�±�c�����ھɵ�������֮��
    c.Length = a.Length+b.Length;
    //����������С��Ԫ�طŵ��±���
    for(int i=0;i<Min(a.Length,b.Length);i++) {
        for(int p=0;p<Min(a.Length,b.Length);p++) {
            c.data[i] = Min(a.data[i],b.data[p]);
        }
    }
    //���ϳ����ʣ�ಿ����ӵ��±���
    for(int j=Min(a.Length,b.Length);j<Max(a.Length,b.Length);j++) {
        if(a.Length>b.Length) {
            c.data[j]=a.data[j];
        } else if(b.Length>a.Length) {
            c.data[j]=b.data[j];
        }
    }
    //���±���λ��
    int median;
    median = c.data[c.Length/2];
    return median;
}