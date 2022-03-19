#include <stdio.h>

int main()
{
	int count,A[5];
	int i = 0;
	scanf("%d", &count);
	/* 将数组分成两段，左段长为n-k，右段长为k。 */
	for (i = 0; i < count; i = i + 1 )
	{
		scanf("%d", &A[i]);
	}
	/* 分别将两段逆转（即元素排列次序与原次序相反）。 */
	for (i = 0; i < count/2; i = i + 1 )
	{
		int temp = A[i];
		A[i] = A[count - i - 1];
		A[count - i - 1] = temp;
	}
	/* 再数组元素整体逆转 */
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
