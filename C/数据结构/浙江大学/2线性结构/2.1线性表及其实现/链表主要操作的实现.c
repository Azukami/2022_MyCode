#include <stdio.h>
/*���Ա���ʽ�洢ʵ��*/
typedef struct LNode *List;
struct LNode
{
    int Data;/*intΪElementType����������������*/
    List Next;
};

struct  Lnode L;
List PtrL;

/*���*/
int Length(List PtrL)
{
    List p = PtrL; /*pָ���ĵ�һ�����*/
    int j = 0;
    while (p) {
        p = p -> Next;
        j++; /*��ǰpָ����ǵ�j�����*/
    }
    return j;
}/*ʱ�临�Ӷ�ΪO(n)*/

/*���ң�����Ų��ҡ���FindKth*/
List FindKth( int K, List PtrL )
{
    List p = PtrL;
    int i = 1;
    while(p != NULL && i < K ) {
        p = p -> Next;
        i++;
    }
    if (i == K ) {
        return p;/*�ҵ���K��������ָ��*/
    } else {
        return NULL;
    }/*���򷵻ؿ�*/
}/*ʱ�临�Ӷ�ΪO(n)*/
/*���ң���ֵ���ҡ���Find*/
List Find( int X, List PtrL )/*int ΪElementType����������������*/
{
    List p = PtrL;
    while(p != NULL && p -> Data != X ){
        p = p -> Next;
    }
    return p;
}/*ʱ�临�Ӷ�ΪO(n)*/

/*�������ʵ��*/
//1.�ȹ���һ���½�㣬��sָ��
//2.���ҵ�����ĵ�i-1����㣬��pָ��
//3.Ȼ���޸�ָ�룬�����㣨p֮������½����s��
List Insert( int X, int i, List PtrL )/*X��intΪElementType*/
{
    List p,s;
    if( i == 1) {/*�½������ڱ�ͷ*/
        s = (List)malloc(sizeof(struct LNode));/*���롢��װ���*/
        s -> Data = X;
        s -> Next = PtrL;/*��ͷָ��*/
        return s;
    }
    p = FindKth( i-1, PtrL );/*���ҵ�i-1�����*/
    if(p == NULL) {/*��i-1�������ڣ����ܲ���*/
        printf("����i��");
        return NULL;
    } else {
        s = (List)malloc(sizeof(struct LNode));/*���롢��װ���*/
        s -> Data = X;
        s -> Next = p -> Next; /*�½������ڵ�i-1�����ĺ���*/
        p -> Next = s;
        return PtrL;
    }
}/*ƽ�����Ҵ���Ϊn/2��ʱ�临�Ӷ�ΪO(n)*/

/*ɾ������ʵ�֣�ɾ������ĵ�i(1<=i<=n)��λ���ϵĽ�㣩*/
//1.���ҵ�����ĵ�i-1����㣬��pָ��
//2.����ָ��sָ��Ҫ��ɾ���Ľ�㣨p����һ����㣩
//3.Ȼ���޸�ָ�룬ɾ��s��ָ���
//4.����ͷ�s��ָ���Ŀռ�
List Delete(int i, List PtrL)
{
    List p,s;
    if(i == 1) {/*��Ҫɾ�����Ǳ�ĵ�һ�����*/
        s = PtrL;/*sָ���һ�����*/
        if (PtrL != NULL) {/*��������ɾ��*/
            PtrL = PtrL -> Next;
        } else {
            return NULL;
        }
        free(s);/*�ͷű�ɾ�����*/
        return PtrL;
    }
    p = FindKth(i-1, PtrL);
    if (p == NULL){
        printf("��%d����㲻����", i-1);
        return NULL;
    } else if(p -> Next == NULL) {
        printf("��%d����㲻����", i);
        return NULL;
    } else {
        s = p -> Next;/*sָ���i�����*/
        p -> Next = s -> Next;/*��������ɾ��*/
        free(s);/*�ͷű�ɾ�����*/
        return PtrL;
    }
} /*ƽ�����Ҵ���Ϊn/2��ʱ�临�Ӷ�ΪO(n)*/