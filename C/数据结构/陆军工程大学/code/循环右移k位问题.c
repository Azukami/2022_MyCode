#include <stdio.h>

int main()
{
	int count,A[5];
	int i = 0;
	scanf("%d", &count);
	/* ������ֳ����Σ���γ�Ϊn-k���Ҷγ�Ϊk�� */
	for (i = 0; i < count; i = i + 1 )
	{
		scanf("%d", &A[i]);
	}
	/* �ֱ�������ת����Ԫ�����д�����ԭ�����෴���� */
	for (i = 0; i < count/2; i = i + 1 )
	{
		int temp = A[i];
		A[i] = A[count - i - 1];
		A[count - i - 1] = temp;
	}
	/* ������Ԫ��������ת */
	for (i = 0; i < count; i = i + 1 )
	{
		if ( i == 0 ) {
			printf("%d", A[i]);
		}else{
			printf(",%d", A[i]);
		}
	}
	return 0;
}
