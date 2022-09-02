//˳���Ļ���������������
#define MaxSize 10  //������󳤶�
typedef struct {
    int data[MaxSize];
    int length;
} SqList;           //��̬����ʵ��˳���
void InitList(SqList &L) {
    for(int i=0; i<MaxSize; i++){
        L.data[i] = 0;
    }
    L.length = 0;
}
bool ListInsert(SqList &L, int i, int e)
{
    //����
    if (i<1 || i>L.length+1) {      //�ж�i�ķ�Χ�Ƿ���Ч
        return false;
    }
    if(L.length >= MaxSize) {       //��ǰ�洢�ռ����������ܲ���
        return false;
    }
    for(int j=L.length; j>=i; j--) {    //����i��Ԫ���Լ�֮���Ԫ�������
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = e;        //��λ��i������e
    L.length++;             //��L���ȼ�1
    return true;
}

int main(int argc, char const *argv[])
{
    SqList L;       //����һ��˳���
    InitList(L);    //��ʼ��˳���
    //���뼸��Ԫ��
    ListInsert(L,3,3);

    return 0;
}