#define InitSize 10     //˳���ĳ�ʼ����
typedef struct {
    int *data;          //ָʾ��̬���������ָ��
    int MaxSize;        //˳�����������
    int length;         //˳���ĵ�ǰ����
} SqList;               //˳�������Ͷ��壨��̬����ģʽ��

//��˳���L�в��ҵ�һ��Ԫ��ֵ����e��Ԫ�أ���������λ��
int LocateElem(SqList L, int e)
{
    for (int i = 0; i < L.length; i++)
    {
        if(L.data[i]==e) {
            return i+1;         //�����±�Ϊi��Ԫ��ֵΪe��������λ��i+1
        }
    return 0;                   //�˳�ѭ������������ʧ��
    }
}