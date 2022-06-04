#include <stdio.h>

int main()
{
	int a = 6;
	int b = 5;
	int temp;
	
	temp = a;
	a = b;
	b = temp;
	
	printf("a=%d,b=%d", a, b);
	
	return 0;
}
