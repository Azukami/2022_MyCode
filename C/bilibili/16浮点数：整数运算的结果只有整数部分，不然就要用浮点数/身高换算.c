#include <stdio.h>

int main()
{
	int chi;
	int cun;
	scanf("%d %d", &chi, &cun);
	float mi = (chi + cun / 12) * 0.3048;

	printf("请输入您的身高：%d尺%d寸。", chi, cun);
	printf("您的身高是：%lf（米）", mi);

	return 0;
}
