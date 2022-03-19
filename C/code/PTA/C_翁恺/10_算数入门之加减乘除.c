#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	
	int c = a + b;
	int d = a - b;
	int e = a * b;
	if (a % b == 0) {
		int f = a / b;
		printf("%d + %d = %d\n", a, b, c);
		printf("%d - %d = %d\n", a, b, d);
		printf("%d * %d = %d\n", a, b, e);
		printf("%d / %d = %d\n", a, b, f);
	}
	else {
		double f = (double) a / b;
		printf("%d + %d = %d\n", a, b, c);
		printf("%d - %d = %d\n", a, b, d);
		printf("%d * %d = %d\n", a, b, e);
		printf("%d / %d = %.2f\n", a, b, f);
	}
	
	return 0;
}
