//���Ա�(a1,a2,a3,...,an)�е�Ԫ�ص��������Ұ�˳��洢�ڼ�����ڡ�
//Ҫ�����һ���㷨�����������ʱ���ڱ��в�����ֵΪx��Ԫ�أ����ҵ���
//��������Ԫ���ཻ�������Ҳ��������������в�ʹ����Ԫ���Ե�������
#include <stdlib.h>
#include <stdio.h>
#define InitSize 10
typedef struct  {
    int *data;
    int MAXSIZE;
    int Length;
}SeqList;
//Ҫ��ʱ�価�����٣���Ӧ���ö��ֲ���
int search(SeqList L, int x)
{
    int ret = -1;
    int left = 0;
    int right = L.Length-1;
    while(right > left) {
        int mid = (left+right)/2;
        if(L.data[mid]==x) {
            ret = mid;
            break;
        } else if(x<L.data[mid]) {
            right = mid-1;
        } else if(x>L.data[mid]) {
            left = mid+1;
        }
    }
    return ret; //ret�Ǵ�����Ԫ��x�ڱ�L�е������±꣬������-1��ʾ����ʧ��
}
SeqList ExchangeAndInsert(SeqList &L, int ret)
{
    int x;
    printf("���������Ԫ��x:");
    scanf("%d", &x);
    ret = search(L,x);
    //Exchange
    if(ret!=-1) {
        int temp;
        temp = L.data[ret];
        L.data[ret] = L.data[ret+1];
        L.data[ret+1] = temp;
        if(L.data[ret+1]==NULL) {
            printf("xΪ��ĩβԪ��,�޷�����\n");
        }
    } else if(ret == -1) {  //Insert
        int i;
        for(i=0;i<L.Length;i++) {
            if(L.data[i]<x) {
                int j;
                L.Length++;
                for(j=L.Length;j>=i;j++) {
                    L.data[j+1] = L.data[j];
                }
                L.data[i+1] = x;
            }
        }
    }
    return L;
}