#include <stdio.h>

int main()
{
	int chi;
	int cun;
	scanf("%d %d", &chi, &cun);
	float mi = (chi + cun / 12) * 0.3048;

	printf("������������ߣ�%d��%d�硣", chi, cun);
	printf("��������ǣ�%lf���ף�", mi);

	return 0;
}
