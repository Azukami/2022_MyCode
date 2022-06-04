#include <stdio.h>

int main()
{
	int number;
	
	scanf("%d", &number);
	
	int a = number / 100;
	int c = number % 10;
	int b = (number % 100) / 10;
	
	int number2 = 100*c + 10*b + a;
	
	printf("%d", number2);
	
	return 0;
}
