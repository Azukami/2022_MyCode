#include <stdlib.h>
#include <stdio.h>
#define InitSize 10
typedef struct {
    int *data;
    int MAXSIZE;
    int length;
}SqList;
bool Del_Min(SqList &L, int &value)
{
    //ɾ��˳���L����СֵԪ�ؽ�㣬��ͨ�������Ͳ���value������ֵ
    //���ɾ���ɹ�������true�����򣬷���false
    if(L.length==0) {
        return false;       //��գ���ֹ��������
    }
    value = L.data[0];      //������Сֵ����
    int pos = 0;            //�ٶ�����0��Ԫ��ֵ��С
    for(int i=1;i<L.length;i++) {   //ѭ����Ѱ�Ҿ�����Сֵ��Ԫ��
        if(L.data[i] < value) {     //��value���䵱ǰ������Сֵ��Ԫ��
            value = L.data[i];      //����Ӯ�˽�ֵ��Ϊ����ֵ
            pos = i;                //λ�ô�Ϊ����λ��
        }
    }
    L.data[pos] = L.data[L.length-1];   //�ճ���λ�������һ��Ԫ���
    L.length--;
    return true;        //��ʱ��valueΪ��Сֵ
}