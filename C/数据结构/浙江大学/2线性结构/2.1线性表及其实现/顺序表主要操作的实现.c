#include <stdio.h>

typedef struct LNode *List;/*����ʵ�����Ա��˳��洢*/
const int MAXSIZE = 10;/*��ռ��С*/
struct LNode {
    int Data[MAXSIZE];/*intΪElementType������Ϊ�������ͣ�MAXSIZE����Ϊ������󳤶�*/
    int Last;/*��ָ��Last��ָʾ���Ա����һ��Ԫ�����ڵ�λ��*/
};
struct LNode L;
List PtrL;

/*��ʼ��˳����������±�*/
List MakeEmpty()
{
    List Ptrl;
    Ptrl = (List ) malloc( sizeof(struct LNode) );
    Ptrl->Last = -1;
    return Ptrl;
}

/*˳���Ĳ��Ҳ���*/
int Find(int X, List PtrL )/*intΪElementType������Ϊ��������*/
{
    int i = 0;
    while(i <= PtrL -> Last && PtrL -> Data[i] != X ) {
        i = i + 1;
    }
    if (i > PtrL->Last ) {
        return -1;/*���û�ҵ�������-1*/
    } else{
        return i;/*�ҵ��󷵻ص��Ǵ洢λ��*/
    }
}/*ƽ���Ƚϴ���Ϊ(n+1)/2��ƽ��ʱ������ΪO(n)��*/

/*˳���Ĳ������*//*�����Ա�ĵ�i(1<=i<=n+1)��λ���ϲ���һ��ֵΪX����Ԫ��*/
void Insert( int X, int i, List PtrL) /*int XΪElementType X������Ϊ��������*/
{
    int j;
    if (PtrL -> Last == MAXSIZE - 1) /*��ռ��������޷�����*/
    {
        printf("����");
        return;
    }
    if( i < 1 || i > PtrL -> Last + 2 ) { /*||Ϊ�߼������*/
        printf("λ�ò��Ϸ�");
        return;
    }
    for (j = PtrL -> Last; j >= i-1; j = j - 1 ) {
        PtrL -> Data[j+1] = PtrL -> Data[j];/*��ai~an��������ƶ�*/
    }
    PtrL -> Data[i-1] = X;/*��Ԫ�ز���*/
    PtrL -> Last++;/*Last��ָ�����Ԫ��*/
    return;
}/*ƽ���ƶ�����Ϊn/2��ƽ��ʱ������ΪO(n)��*/

/*˳����ɾ��������ɾ����ĵ�i(1<=i<=n)��λ���ϵ�Ԫ��)*/
void Delete(int i, List PtrL)
{
    int j;
    if ( i < 1 || i > PtrL -> Last + 1 ) {/*���ձ�ɾ��λ�õĺϷ���*/
        printf("�����ڵ�%d��Ԫ��", i);
        return;
    }
    for ( j = i; j <= PtrL -> Last; j++ ) {
        PtrL -> Data[j-1] = PtrL -> Data[j];
    }/*��ai+1~an˳����ǰ�ƶ�*/
    PtrL -> Last--;/*Last��ָ�����Ԫ��*/
    return;
}/*ƽ���ƶ�����Ϊ(n-1)/2��ƽ��ʱ������ΪO(n)*/