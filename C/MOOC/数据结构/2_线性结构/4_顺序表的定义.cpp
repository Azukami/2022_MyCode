#include <stdio.h>
#define MaxSize 10        //����˳�����󳤶�
typedef struct {
    int data[MaxSize];    //�þ�̬�ġ����顱���������Ԫ��
    int length;           //˳���ĵ�ǰ����
} SqList;                 //˳�������Ͷ���

//��������������ʼ��һ��˳���
void InitList(SqList &L) {
    int i;
    for(i=0; i<MaxSize; i++) {
        L.data[i] = 0;    //����������Ԫ������ΪĬ�ϳ�ʼֵ0
    }
    L.length=0;           //˳����ʼ����Ϊ0
}

int main()
{
    SqList L;            //����һ��˳���L
    InitList(L);         //��L��Ϊ��������InitList�����У���ʼ�����˳���
    //����������������
    for (int i = 0; i < MaxSize; i++)
    {
        printf("data[%d]=%d\n", i, L.data[i]);
    }
    
    return 0;
}