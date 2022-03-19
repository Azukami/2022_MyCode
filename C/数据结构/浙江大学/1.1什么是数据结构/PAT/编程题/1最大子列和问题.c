#include <stdio.h>

int MaxSubseqSum1 ( int A[], int N )
{
	int ThisSum, MaxSum = 0;
	int i, j, k;
	for ( i = 0; i < N; i = i + 1 ) { /*i���������λ��*/
		for ( j = i; j < N; j = j + 1 ) { /*j�������Ҷ�λ�� */
			ThisSum = 0;/*ThisSum�Ǵ�A[i]��A[j]�����к�*/
			for ( k = i; k < j; k = k + 1 )
				ThisSum = ThisSum + A[k];
			if ( ThisSum > MaxSum ) /* ����յõ���������к͸��� */
			    MaxSum = ThisSum; /*����½��*/
		}/*jѭ������*/
	}/*iѭ������*/
	return MaxSum;
}

int MaxSubseqSum2 ( int A[], int N )
{
	int ThisSum, MaxSum = 0;
	int i, j;
	for ( i = 0; i < N; i = i + 1 ) { /*i���������λ�� */
		ThisSum = 0; /*ThisSum�Ǵ�A[i]��A[j]�����к� */
		for ( j = i; j < N; j = j + 1 ) { /*j�������Ҷ�λ��*/
			ThisSum = ThisSum + A[j];
			/* ������ͬ��i����ͬ��j��ֻҪ��j-1��ѭ���Ļ������ۼ�1���*/
			if ( ThisSum > MaxSum ) /*����յõ���������к͸��� */
				MaxSum = ThisSum;/*����½��*/
		} /*jѭ������ */
	} /*iѭ������*/
	return MaxSum;
}

int Max3( int A, int B, int C )
{ /* ����3�������е����ֵ*/
    return A > B ? A > C ? A : C : B > C ? B : C;
}

int DivideAndConquer ( int List[], int left,  int right )
{ /*���η���List[left]��List[right]��������к� */
	int MaxLeftSum, MaxRightSum; /*�������������Ľ�*/
	int MaxLeftBorderSum, MaxRightBorderSum; /*��ſ�ֽ��ߵĽ��*/
	
	int LeftBorderSum, RightBorderSum;
	int center, i;
	
	if ( left == right ) { /*�ݹ����ֹ����������ֻ��1������ */
		if ( List[left] > 0 )   return List[left];
		else return 0;
	}
	
	/*������"��"�Ĺ���*/
	center = ( left + right ) / 2; /*�ҵ��зֵ� */
	
	/*�ݹ�����������е�����*/
	MaxLeftSum = DivideAndConquer( List, left, center );
	MaxRightSum = DivideAndConquer( List, left, center );
	
	/*�������ֽ��ߵ�������к� */
	MaxLeftBorderSum = 0; LeftBorderSum = 0;
	for ( i = center; i >= left; i = i - 1 ) { /*����������ɨ��*/
		LeftBorderSum = List[i] + LeftBorderSum;
		if ( LeftBorderSum > MaxLeftBorderSum )
			MaxLeftBorderSum = LeftBorderSum;
	} /*���ɨ�����*/
	
	MaxRightBorderSum = 0; RightBorderSum = 0;
	for ( i = center + 1; i <= right; i = i + 1 ) { /*����������ɨ��*/
		RightBorderSum = RightBorderSum + List[i];
		if ( RightBorderSum > MaxRightBorderSum )
			MaxRightBorderSum = RightBorderSum;
	}/*�ұ�ɨ�����*/
	
	/*���淵��"��"�Ľ�� */
	return Max3( MaxLeftSum, MaxRightSum, MaxLeftBorderSum + MaxRightBorderSum );
}

int MaxSubseqSum3( int List[], int N )
{   /*������ǰ2���㷨��ͬ�ĺ����ӿ� */
	return DivideAndConquer( List, 0, N-1 );
}

int MaxSubseqSum4( int A[], int N ) /*���ߴ���*/
{
	int ThisSum, MaxSum;
	int i;
	ThisSum = MaxSum = 0;
	for( i = 0; i < N; i = i + 1 ) {
		ThisSum = A[i] + ThisSum; /*�����ۼ�*/
		if ( ThisSum > MaxSum )
			MaxSum = ThisSum; /*���ָ��������µ�ǰ���*/
		else if( ThisSum < 0 ) /*�����ǰ���к�Ϊ��*/
			ThisSum = 0; /*�򲻿���ʹ����Ĳ��ֺ���������֮*/
	}
	return MaxSum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ThisSum,MaxSum;
    int i;
    int m;
    ThisSum = MaxSum = 0;
    for( i = 0; i< n; i = i + 1) {
        scanf("%d", &m);
        ThisSum = m + ThisSum;
        if( ThisSum > MaxSum ) {
            MaxSum = ThisSum;
        } else if ( ThisSum < 0 ) {
            ThisSum = 0;
        }
    }
    printf("%d", MaxSum);
    return 0;
}