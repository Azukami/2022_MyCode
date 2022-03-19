#include <stdio.h>

int main()
{
	int number1,number2 = 0;
	
	printf("请输入两个整数，如\"1 2\"这样的形式输入\n");
	scanf("%d %d", &number1, &number2);
	
	double number3 = (number1 + number2) / 2.0;
	printf("这两个数的平均值为%lf", number3);
	
	return 0;
}
