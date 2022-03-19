#include <stdio.h>

int main()
{
	int a = 6;
	int b = 5;
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	printf("a的值是%d b的值是%d", a, b);
	
	return 0;
}
