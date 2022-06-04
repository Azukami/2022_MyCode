//地址用16进制表达比较方便，因此用%x对变量的地址进行输出。
#include <stdio.h>

int main(void) {
	int i = 0;
	int p;
//取相邻变量i和p的地址
	printf("%p\n", &i);
	printf("%p\n", &p);

	return 0;
}