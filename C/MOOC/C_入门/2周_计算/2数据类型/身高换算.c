#include <stdio.h>

int main()
{
	double foot,inch;
	printf("请输入您的身高是几尺几寸，例如5 7代表5尺7寸。\n");
	scanf("%lf %lf", &foot, &inch);
	
	double mi = (foot + inch / 12) * 0.3048;
	printf("您的身高是%.2f米", mi);

	return 0;
}
