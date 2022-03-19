#include <stdio.h>
//比较两个数的大小
int main()
{
//初始化
	int a,b = 0;
//输入两个整数
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
//比较大小
	int max = 0;
	if ( a > b ) {
		max = a;
	} else {
		max = b;
	}
//输出两个数中大的那个数
    printf("大的那个是%d\n", max);
    
    return 0;
}
